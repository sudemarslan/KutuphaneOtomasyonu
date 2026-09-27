//Sudem Arslan 24100011061

#ifndef ODUNC_TESLIM_H
#define ODUNC_TESLIM_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QMessageBox>

namespace Ui {
class odunc_teslim;
}

class odunc_teslim : public QDialog
{
    Q_OBJECT

public:
    explicit odunc_teslim(QSqlDatabase,QWidget *parent = nullptr);
    ~odunc_teslim();
    void listele();
    void temizle();

private slots:
    void on_tv_odunckitap_clicked(const QModelIndex &index);

    void on_btn_oduncver_clicked();

private:
    Ui::odunc_teslim *ui;
    QSqlQuery *sorgu;
    QSqlQueryModel *model1,*model2;
};

#endif // ODUNC_TESLIM_H
