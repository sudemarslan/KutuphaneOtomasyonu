//Sudem Arslan 24100011061

#ifndef KITAPISLEMLERI_H
#define KITAPISLEMLERI_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QMessageBox>

namespace Ui {
class kitapislemleri;
}

class kitapislemleri : public QDialog
{
    Q_OBJECT

public:
    explicit kitapislemleri(QSqlDatabase,QWidget *parent = nullptr);
    ~kitapislemleri();
    void listele();
    void temizle();

private slots:
    void on_tv_tumkitaplar_clicked(const QModelIndex &index);

    void on_btn_yenikayit_clicked();

    void on_btn_sil_clicked();

    void on_btn_guncelle_clicked();

private:
    Ui::kitapislemleri *ui;
    QSqlQuery *sorgu;
    QSqlQueryModel *model,*odunc_alinan,*onceden_alinan;

};

#endif // KITAPISLEMLERI_H
