//Sudem Arslan 24100011061

#include "oduncalma.h"
#include "ui_oduncalma.h"

oduncalma::oduncalma(QSqlDatabase db,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::oduncalma)
{
    ui->setupUi(this);
    sorgu = new QSqlQuery(db);
    listele();
}

oduncalma::~oduncalma()
{
    delete ui;
}

void oduncalma::listele()
{
    sorgu -> prepare("select *from uye");
    if(!sorgu->exec()){
        QMessageBox::critical(this,"Hata","Sorgu Gerçekleşemedi");
        return;
    }
    model1 = new QSqlQueryModel();
    model1 -> setQuery(*sorgu);
    ui -> tv_uyeler -> setModel(model1);

    sorgu -> prepare("select *from kitap");
    if(!sorgu->exec()){
        QMessageBox::critical(this,"Hata","Sorgu Gerçekleşemedi");
        return;
    }
    model2 = new QSqlQueryModel();
    model2 -> setQuery(*sorgu);
    ui -> tv_kitaplar -> setModel(model2);

    sorgu -> prepare("select *from odunc_alinan");
    if(!sorgu->exec()){
        QMessageBox::critical(this,"Hata","Sorgu Gerçekleşemedi");
        return;
    }
    model3 = new QSqlQueryModel();
    model3 -> setQuery(*sorgu);
    ui -> tv_oduncalinanlar -> setModel(model3);

}

void oduncalma::temizle()
{
    ui -> le_uyeno -> clear();
    ui -> le_kitapno -> clear();
    ui->de_tarih->setDate(QDate(2026,01,01));

}

void oduncalma::on_tv_uyeler_clicked(const QModelIndex &index)
{
    ui -> le_uyeno -> setText(model1->index(index.row(),0).data().toString());

}


void oduncalma::on_tv_kitaplar_clicked(const QModelIndex &index)
{
    ui -> le_kitapno -> setText(model2->index(index.row(),0).data().toString());

}


void oduncalma::on_btn_oduncal_clicked()
{
    if(ui->le_uyeno->text()=="" || ui->le_kitapno->text()==""){
        QMessageBox::critical(this,"Hata","Gerekli Alanları Tablodan Seçiniz!");
        return;
    }
    sorgu -> prepare("select *from odunc_alinan where kitap_no=? and  uye_no=?");
    sorgu -> addBindValue(ui->le_kitapno->text());
    sorgu -> addBindValue(ui->le_uyeno->text());
    if(!sorgu -> exec()){
        QMessageBox::critical(this,"Hata","Sorgu Gerçekleşemedi");
        return;
    }
    if(sorgu->next()){
        QMessageBox::information(this,"Bilgi","Bu üye daha önceden bu kitabın 1 tanesini ödünç almıştır.Tekrar ödünç verilemez");
        temizle();
        return;
    }


    sorgu->prepare("select kitap_sayisi from kitap where kitap_no=?");
    sorgu->addBindValue(ui->le_kitapno->text());

    if(!sorgu->exec()){
        QMessageBox::critical(this,"Hata","Kitap stoğu alınamadı");
        return;
    }

    int stok = 0;

    if(sorgu->next()){
        stok = sorgu->value(0).toInt();
    }

    if(stok == 0 ){
        QMessageBox::critical(this,"Hata","Kitabın Stoğu Tükenmiştir");
        temizle();
        return;
    }


    sorgu -> prepare("insert into odunc_alinan (uye_no,kitap_no,odunc_alma_tarihi) values(?,?,?)");
    sorgu -> addBindValue(ui->le_uyeno->text());
    sorgu -> addBindValue(ui->le_kitapno->text());
    sorgu -> addBindValue(ui->de_tarih->text());
    if(!sorgu -> exec()){
        QMessageBox::critical(this,"Hata","Ödünç Alma Gerçekleşemedi");
        return;
    }
    sorgu -> prepare("update kitap set kitap_sayisi=kitap_sayisi-1 where kitap_no=?");
    sorgu -> addBindValue(ui->le_kitapno->text());
    if(!sorgu->exec()){
        QMessageBox::critical(this,"Hata","Stok Güncellenemedi");
        return;
    }
    temizle();
    listele();

}

