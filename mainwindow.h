//Sudem Arslan 24100011061

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QCoreApplication>
#include <uyeler.h>
#include <kitapislemleri.h>
#include <oduncalma.h>
#include <odunc_teslim.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_btn_uye_clicked();

    void on_btn_kitap_clicked();

    void on_btn_oduncalma_clicked();

    void on_btn_oduncteslim_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
};
#endif // MAINWINDOW_H
