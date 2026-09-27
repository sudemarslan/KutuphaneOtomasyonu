//Sudem Arslan 24100011061

#ifndef ODUNCALMA_H
#define ODUNCALMA_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QMessageBox>

namespace Ui {
class oduncalma;
}

class oduncalma : public QDialog
{
    Q_OBJECT

public:
    explicit oduncalma(QSqlDatabase,QWidget *parent = nullptr);
    ~oduncalma();
    void listele();
    void temizle();

private slots:
    void on_tv_uyeler_clicked(const QModelIndex &index);

    void on_tv_kitaplar_clicked(const QModelIndex &index);

    void on_btn_oduncal_clicked();

private:
    Ui::oduncalma *ui;
    QSqlQuery *sorgu;
    QSqlQueryModel *model1,*model2,*model3;
};

#endif // ODUNCALMA_H
