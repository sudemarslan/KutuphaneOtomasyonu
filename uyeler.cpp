//Sudem Arslan 24100011061

#include "uyeler.h"
#include "ui_uyeler.h"

uyeler::uyeler(QSqlDatabase db,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::uyeler)
{
    ui->setupUi(this);
    sorgu = new QSqlQuery(db);
    listele();
}

uyeler::~uyeler()
{
    delete ui;
}

void uyeler::listele()
{

    sorgu -> prepare("select *from uye");
    if(!sorgu->exec()){
        QMessageBox::critical(this,"Hata",sorgu->lastError().text());
        return;
    }
    model = new QSqlQueryModel();
    model -> setQuery(*sorgu);
    ui -> tv_uyeler -> setModel(model);

}

void uyeler::temizle()
{
    ui -> le_no -> clear();
    ui -> le_ad -> clear();
    ui -> le_soyad -> clear();

}

void uyeler::on_btn_yenikayit_clicked()
{
    if(ui->le_ad->text()=="" || ui->le_soyad->text()==""){
        QMessageBox::critical(this,"Hata","Gerekli Alanları Doldurunuz!");
        return;
    }

    sorgu -> prepare("insert into uye (uye_ad,uye_soyad)values(?,?)");
    sorgu ->addBindValue(ui -> le_ad -> text());
    sorgu -> addBindValue(ui->le_soyad->text());
    if(!sorgu->exec()){
        QMessageBox::critical(this,"Hata",sorgu->lastError().text());
        return;
    }
    temizle();
    listele();

}


void uyeler::on_btn_guncelle_clicked()
{
    if(ui->le_ad -> text() == "" || ui->le_soyad->text()==""){
        QMessageBox::critical(this,"Hata","Gerekli Alanları Doldurunuz");
        return;
    }

    sorgu -> prepare("update uye set uye_ad=?,uye_soyad=? where uye_no=?");
    sorgu->addBindValue(ui->le_ad->text());
    sorgu->addBindValue(ui->le_soyad->text());
    sorgu -> addBindValue(ui->le_no->text());
    if(!sorgu->exec()){
        QMessageBox::critical(this,"Hata","Üye Güncelleme İşlemi Yapılamadı");
        return;
    }
    temizle();
    listele();

}


void uyeler::on_btn_sil_clicked()
{
    if(ui->le_no->text()==""){
        QMessageBox::critical(this,"Hata","Silmek İstediğiniz Üyeyi Tablodan Seçin!");
        return;
    }
    sorgu -> prepare("select *from odunc_alinan where uye_no=?");
    sorgu -> addBindValue(ui -> le_no -> text());
    sorgu -> exec();
    int sayac=0;
    while(sorgu -> next()){
        sayac++;
    }
    if(sayac>0){
        QMessageBox::critical(this,"Hata","Bu Üye Silinemez.Üyenin henüz teslim etmediği kitaplar vardır.");
        temizle();
        return;
    }else{
        sorgu -> prepare("delete from uye where uye_no=?");
        sorgu -> addBindValue(ui -> le_no->text());
        if(!sorgu->exec()){
            QMessageBox::critical(this,"Hata","Üye Silme Gerçekleşemedi");
            return;
        }
        temizle();
        listele();
    }

}


void uyeler::on_tv_uyeler_clicked(const QModelIndex &index)
{
    ui -> le_no -> setText(model->index(index.row(),0).data().toString());
    ui -> le_ad -> setText(model->index(index.row(),1).data().toString());
    ui -> le_soyad -> setText(model->index(index.row(),2).data().toString());
}

