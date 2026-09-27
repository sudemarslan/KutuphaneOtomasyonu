//Sudem Arslan 24100011061

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbPath = QCoreApplication::applicationDirPath() + "/24100011061.db";
    db.setDatabaseName(dbPath);

    if(!db.open()){
        ui -> statusbar ->showMessage("Veritabanına Bağlanılamadı");
        return;
    }else{
        ui -> statusbar -> showMessage("Veritabanına Bağlanıldı");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_uye_clicked()
{
    uyeler *uye = new uyeler(db);
    uye -> show();
}


void MainWindow::on_btn_kitap_clicked()
{
    kitapislemleri *kitap = new kitapislemleri(db);
    kitap -> show();
}


void MainWindow::on_btn_oduncalma_clicked()
{
    oduncalma *odunc = new oduncalma(db);
    odunc -> show();
}


void MainWindow::on_btn_oduncteslim_clicked()
{
    odunc_teslim *teslim = new odunc_teslim(db);
    teslim -> show();
}

