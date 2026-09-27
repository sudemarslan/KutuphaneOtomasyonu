//Sudem Arslan 24100011061

#include "kitapislemleri.h"
#include "ui_kitapislemleri.h"

kitapislemleri::kitapislemleri(QSqlDatabase db,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::kitapislemleri)
{
    ui->setupUi(this);
    sorgu = new QSqlQuery(db);
    listele();

}

kitapislemleri::~kitapislemleri()
{
    delete ui;
}

void kitapislemleri::listele()
{
    sorgu -> prepare("select *from kitap");
    if(!sorgu->exec()){
        QMessageBox::critical(this,"Hata","Sorgu Gerçekleşemedi");
        return;
    }
    model = new QSqlQueryModel();//sql sorgularını tutacak ve tabloya aktaracak
    model -> setQuery(*sorgu);
    ui -> tv_tumkitaplar -> setModel(model);

}

void kitapislemleri::temizle()
{
    ui -> le_kitapno -> clear();
    ui -> le_kitapad -> clear();
    ui -> le_kitapstok -> clear();

}

void kitapislemleri::on_tv_tumkitaplar_clicked(const QModelIndex &index)
{
    ui -> le_kitapno -> setText(model->index(index.row(),0).data().toString());
    ui -> le_kitapad -> setText(model->index(index.row(),1).data().toString());
    ui -> le_kitapstok -> setText(model->index(index.row(),2).data().toString());

    odunc_alinan = new QSqlQueryModel();
    sorgu->prepare("select *from odunc_alinan where kitap_no=?");
    sorgu->addBindValue(ui->le_kitapno->text());
    if(!sorgu->exec()){
        QMessageBox::critical(this,"Hata","Sorgu Gerçekleşemedi");
        return;
    }
    odunc_alinan->setQuery(*sorgu);
    ui->tv_oduncalinan->setModel(odunc_alinan);

    onceden_alinan = new QSqlQueryModel();
    sorgu -> prepare("select *from odunc_teslim_edilen where kitap_no=?");
    sorgu -> addBindValue(ui->le_kitapno->text());
    if(!sorgu -> exec()){
        QMessageBox::critical(this,"Hata","Sorgu Gerçekleşemedi");
        return;
    }
    onceden_alinan->setQuery(*sorgu);
    ui->tv_oncedenodunc->setModel(onceden_alinan);

}


void kitapislemleri::on_btn_yenikayit_clicked()
{
    if(ui->le_kitapad->text()=="" || ui->le_kitapstok->text()==""){
        QMessageBox::critical(this,"Hata","Gerekli Alanları Doldurunuz");
        return;
    }
    sorgu -> prepare("insert into kitap(kitap_ad,kitap_sayisi) values(?,?)");
    sorgu -> addBindValue(ui->le_kitapad->text());
    sorgu -> addBindValue(ui->le_kitapstok->text().toInt());
    if(!sorgu->exec()){
        QMessageBox::critical(this,"Hata","Yeni Kayıt İşlemi Gerçekleşemedi");
        return;
    }
    temizle();
    listele();
}


void kitapislemleri::on_btn_sil_clicked()
{
    if(ui->le_kitapno->text() == ""){
        QMessageBox::critical(this,"Hata","Silmek İstediğiniz Kitabı Tablodan Seçin!");
        return;
    }
    sorgu -> prepare("select *from odunc_alinan where kitap_no=?");
    sorgu -> addBindValue(ui->le_kitapno->text());
    sorgu -> exec();
    if(sorgu -> next()){
        QMessageBox::critical(this,"Hata","Bu Kitap Silinemez.Bu Kitap bir üyeye ödünç verilmiştir");
        temizle();
        return;
    }
    sorgu -> prepare("delete from kitap where kitap_no=?");
    sorgu -> addBindValue(ui -> le_kitapno->text());
    if(!sorgu->exec()){
        QMessageBox::critical(this,"Hata","Silme Gerçekleşemedi");
        return;
    }
    temizle();
    listele();
}


void kitapislemleri::on_btn_guncelle_clicked()
{
    if(ui-> le_kitapad -> text() == "" || ui -> le_kitapstok -> text() == ""){
        QMessageBox::critical(this,"Hata","Gerekli Alanları Doldurunuz!");
        return;
    }
    sorgu -> prepare("update kitap set kitap_ad=?,kitap_sayisi=? where kitap_no=?");
    sorgu -> addBindValue(ui->le_kitapad->text());
    sorgu -> addBindValue(ui -> le_kitapstok->text());
    sorgu -> addBindValue(ui->le_kitapno->text());
    if(!sorgu->exec()){
        QMessageBox::critical(this,"Hata","Güncelleme gerçekleşemedi");
        return;
    }
    temizle();
    listele();
}

