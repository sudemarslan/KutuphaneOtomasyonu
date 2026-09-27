//Sudem Arslan 24100011061

#ifndef UYELER_H
#define UYELER_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QSqlError>
namespace Ui {
class uyeler;
}

class uyeler : public QDialog
{
    Q_OBJECT

public:
    explicit uyeler(QSqlDatabase ,QWidget *parent = nullptr);
    ~uyeler();
    void listele();
    void temizle();

private slots:
    void on_btn_yenikayit_clicked();

    void on_btn_guncelle_clicked();

    void on_btn_sil_clicked();

    void on_tv_uyeler_clicked(const QModelIndex &index);

private:
    Ui::uyeler *ui;
    QSqlQuery *sorgu;
    QSqlQueryModel *model,*odunc_alinan;
};

#endif // UYELER_H
