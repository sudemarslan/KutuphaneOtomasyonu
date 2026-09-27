/********************************************************************************
** Form generated from reading UI file 'kitapislemleri.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KITAPISLEMLERI_H
#define UI_KITAPISLEMLERI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_kitapislemleri
{
public:
    QLabel *label;
    QLabel *label_2;
    QTableView *tv_tumkitaplar;
    QLabel *label_3;
    QTableView *tv_oduncalinan;
    QTableView *tv_oncedenodunc;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *le_kitapno;
    QLineEdit *le_kitapad;
    QLineEdit *le_kitapstok;
    QPushButton *btn_yenikayit;
    QPushButton *btn_guncelle;
    QPushButton *btn_sil;

    void setupUi(QDialog *kitapislemleri)
    {
        if (kitapislemleri->objectName().isEmpty())
            kitapislemleri->setObjectName("kitapislemleri");
        kitapislemleri->resize(1361, 759);
        label = new QLabel(kitapislemleri);
        label->setObjectName("label");
        label->setGeometry(QRect(620, 20, 321, 61));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        label->setPalette(palette);
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(kitapislemleri);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 90, 131, 20));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label_2->setFont(font1);
        tv_tumkitaplar = new QTableView(kitapislemleri);
        tv_tumkitaplar->setObjectName("tv_tumkitaplar");
        tv_tumkitaplar->setGeometry(QRect(190, 130, 421, 271));
        label_3 = new QLabel(kitapislemleri);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 430, 371, 20));
        label_3->setFont(font1);
        tv_oduncalinan = new QTableView(kitapislemleri);
        tv_oduncalinan->setObjectName("tv_oduncalinan");
        tv_oduncalinan->setGeometry(QRect(190, 460, 421, 271));
        tv_oncedenodunc = new QTableView(kitapislemleri);
        tv_oncedenodunc->setObjectName("tv_oncedenodunc");
        tv_oncedenodunc->setGeometry(QRect(770, 460, 421, 271));
        label_4 = new QLabel(kitapislemleri);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(770, 430, 441, 20));
        label_4->setFont(font1);
        label_5 = new QLabel(kitapislemleri);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(840, 110, 91, 20));
        label_5->setFont(font1);
        label_6 = new QLabel(kitapislemleri);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(840, 170, 91, 20));
        label_6->setFont(font1);
        label_7 = new QLabel(kitapislemleri);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(840, 230, 63, 20));
        label_7->setFont(font1);
        le_kitapno = new QLineEdit(kitapislemleri);
        le_kitapno->setObjectName("le_kitapno");
        le_kitapno->setEnabled(false);
        le_kitapno->setGeometry(QRect(950, 110, 181, 26));
        le_kitapad = new QLineEdit(kitapislemleri);
        le_kitapad->setObjectName("le_kitapad");
        le_kitapad->setGeometry(QRect(950, 170, 181, 26));
        le_kitapstok = new QLineEdit(kitapislemleri);
        le_kitapstok->setObjectName("le_kitapstok");
        le_kitapstok->setGeometry(QRect(950, 220, 181, 26));
        btn_yenikayit = new QPushButton(kitapislemleri);
        btn_yenikayit->setObjectName("btn_yenikayit");
        btn_yenikayit->setGeometry(QRect(830, 280, 93, 29));
        btn_yenikayit->setFont(font1);
        btn_guncelle = new QPushButton(kitapislemleri);
        btn_guncelle->setObjectName("btn_guncelle");
        btn_guncelle->setGeometry(QRect(1050, 280, 93, 29));
        btn_guncelle->setFont(font1);
        btn_sil = new QPushButton(kitapislemleri);
        btn_sil->setObjectName("btn_sil");
        btn_sil->setGeometry(QRect(950, 350, 93, 29));
        btn_sil->setFont(font1);

        retranslateUi(kitapislemleri);

        QMetaObject::connectSlotsByName(kitapislemleri);
    } // setupUi

    void retranslateUi(QDialog *kitapislemleri)
    {
        kitapislemleri->setWindowTitle(QCoreApplication::translate("kitapislemleri", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("kitapislemleri", "K\304\260TAP \304\260\305\236LEMLER\304\260", nullptr));
        label_2->setText(QCoreApplication::translate("kitapislemleri", "T\303\274m Kitaplar", nullptr));
        label_3->setText(QCoreApplication::translate("kitapislemleri", "Se\303\247ilen Kitab\304\261n \303\226d\303\274n\303\247 Al\304\261nma Durumu", nullptr));
        label_4->setText(QCoreApplication::translate("kitapislemleri", "Se\303\247ilen Kitab\304\261n Daha \303\226nceden \303\226d\303\274n\303\247 Al\304\261nma Durumu", nullptr));
        label_5->setText(QCoreApplication::translate("kitapislemleri", "Kitap No:", nullptr));
        label_6->setText(QCoreApplication::translate("kitapislemleri", "Kitap Ad:", nullptr));
        label_7->setText(QCoreApplication::translate("kitapislemleri", "Stok:", nullptr));
        btn_yenikayit->setText(QCoreApplication::translate("kitapislemleri", "Yeni Kay\304\261t", nullptr));
        btn_guncelle->setText(QCoreApplication::translate("kitapislemleri", "G\303\274ncelle", nullptr));
        btn_sil->setText(QCoreApplication::translate("kitapislemleri", "Sil", nullptr));
    } // retranslateUi

};

namespace Ui {
    class kitapislemleri: public Ui_kitapislemleri {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KITAPISLEMLERI_H
