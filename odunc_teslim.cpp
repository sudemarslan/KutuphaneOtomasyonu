//Sudem Arslan 24100011061

#include "odunc_teslim.h"
#include "ui_odunc_teslim.h"

odunc_teslim::odunc_teslim(QSqlDatabase db,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::odunc_teslim)
{
    ui->setupUi(this);
    sorgu = new QSqlQuery(db);
    listele();
}

odunc_teslim::~odunc_teslim()
{
    delete ui;
}

void odunc_teslim::listele()
{
    sorgu -> prepare("select *from odunc_alinan");
    if(!sorgu->exec()){
        QMessageBox::critical(this,"Hata","Sorgu Gerçekleşemedi");
        return;
    }
    model1 = new QSqlQueryModel();
    model1 -> setQuery(*sorgu);
    ui -> tv_odunckitap -> setModel(model1);

    sorgu -> prepare("select *from odunc_teslim_edilen");
    if(!sorgu->exec()){
        QMessageBox::critical(this,"Hata","Sorgu Gerçekleşemedi");
        return;
    }
    model2 = new QSqlQueryModel();
    model2 -> setQuery(*sorgu);
    ui -> tv_teslimkitap -> setModel(model2);


}

void odunc_teslim::temizle()
{
    ui -> le_uyeno -> clear();
    ui -> le_kitapno -> clear();
    ui->de_tarihver->setDate(QDate(2026,01,01));


}

void odunc_teslim::on_tv_odunckitap_clicked(const QModelIndex &index)
{
    ui -> le_uyeno -> setText(model1->index(index.row(),0).data().toString());
    ui -> le_kitapno -> setText(model1->index(index.row(),1).data().toString());
}


void odunc_teslim::on_btn_oduncver_clicked()
{
    if(ui->le_uyeno->text()==""){
        QMessageBox::critical(this,"Hata","Tablodan Veri Seçin!");
        return;
    }
    QString alistarihi = "";
    sorgu -> prepare("select odunc_alma_tarihi from odunc_alinan where uye_no=? and kitap_no=?");
    sorgu -> addBindValue(ui->le_uyeno->text());
    sorgu -> addBindValue(ui->le_kitapno->text());
    if(!sorgu->exec()){
        QMessageBox::critical(this,"Hata","Alış Tarihi Alinamadı");
        return;
    }
    if(sorgu -> next()){
        alistarihi = sorgu -> value(0).toString();
    }else{
        QMessageBox::critical(this,"Hata","Alış Tarihi Bulunamadı");
        return;
    }

    QDate alma_tarihi = QDate::fromString(alistarihi,"dd/MM/yyyy");
    QDate teslim_tarihi = ui->de_tarihver->date();
    int gun_farki = alma_tarihi.daysTo(teslim_tarihi);
    int  borc = 0;
    if(gun_farki>15){
        borc = (gun_farki-15)*4;
    }
    if(alma_tarihi>teslim_tarihi){
        QMessageBox::critical(this,"Hata","Teslim Tarihi Alış Tarihinden sonra olmalıdır!");
        temizle();
        return;
    }
    sorgu -> prepare("insert into odunc_teslim_edilen (uye_no,kitap_no,alma_tarihi,verme_tarihi,borc) values(?,?,?,?,?)");
    sorgu -> addBindValue(ui->le_uyeno->text());
    sorgu -> addBindValue(ui->le_kitapno->text());
    sorgu -> addBindValue(alistarihi);
    sorgu -> addBindValue(ui->de_tarihver->text());
    sorgu -> addBindValue(borc);
    if(!sorgu -> exec()){
        QMessageBox::critical(this,"Hata","Teslim kaydı olmadı");
        return;
    }

    sorgu -> prepare("delete from odunc_alinan where uye_no=? and kitap_no=?");
    sorgu ->addBindValue(ui->le_uyeno->text());
    sorgu -> addBindValue(ui->le_kitapno->text());
    if(!sorgu -> exec()){
        QMessageBox::critical(this,"Hata","Kayıt Silinemedi");
        return;
    }

    sorgu -> prepare("update kitap set kitap_sayisi=kitap_sayisi+1 where kitap_no=?");
    sorgu -> addBindValue(ui->le_kitapno->text());
    if(!sorgu -> exec()){
        QMessageBox::critical(this,"Hata","Stok Güncellenemedi");
        return;
    }
    temizle();
    listele();

}

