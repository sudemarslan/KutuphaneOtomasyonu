/********************************************************************************
** Form generated from reading UI file 'oduncalma.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ODUNCALMA_H
#define UI_ODUNCALMA_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_oduncalma
{
public:
    QLabel *label;
    QLabel *label_2;
    QTableView *tv_uyeler;
    QTableView *tv_kitaplar;
    QLabel *label_3;
    QTableView *tv_oduncalinanlar;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *le_uyeno;
    QLineEdit *le_kitapno;
    QPushButton *btn_oduncal;
    QDateEdit *de_tarih;

    void setupUi(QDialog *oduncalma)
    {
        if (oduncalma->objectName().isEmpty())
            oduncalma->setObjectName("oduncalma");
        oduncalma->resize(1363, 754);
        label = new QLabel(oduncalma);
        label->setObjectName("label");
        label->setGeometry(QRect(550, 20, 481, 51));
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
        label_2 = new QLabel(oduncalma);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 70, 111, 20));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label_2->setFont(font1);
        tv_uyeler = new QTableView(oduncalma);
        tv_uyeler->setObjectName("tv_uyeler");
        tv_uyeler->setGeometry(QRect(180, 100, 461, 251));
        tv_kitaplar = new QTableView(oduncalma);
        tv_kitaplar->setObjectName("tv_kitaplar");
        tv_kitaplar->setGeometry(QRect(790, 100, 461, 251));
        label_3 = new QLabel(oduncalma);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(800, 80, 111, 20));
        label_3->setFont(font1);
        tv_oduncalinanlar = new QTableView(oduncalma);
        tv_oduncalinanlar->setObjectName("tv_oduncalinanlar");
        tv_oduncalinanlar->setGeometry(QRect(790, 420, 461, 251));
        label_4 = new QLabel(oduncalma);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(800, 390, 211, 20));
        label_4->setFont(font1);
        label_5 = new QLabel(oduncalma);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(210, 450, 111, 20));
        label_5->setFont(font1);
        label_6 = new QLabel(oduncalma);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(210, 490, 121, 20));
        label_6->setFont(font1);
        label_7 = new QLabel(oduncalma);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(210, 540, 161, 20));
        label_7->setFont(font1);
        le_uyeno = new QLineEdit(oduncalma);
        le_uyeno->setObjectName("le_uyeno");
        le_uyeno->setEnabled(false);
        le_uyeno->setGeometry(QRect(380, 450, 141, 26));
        QFont font2;
        font2.setBold(false);
        le_uyeno->setFont(font2);
        le_kitapno = new QLineEdit(oduncalma);
        le_kitapno->setObjectName("le_kitapno");
        le_kitapno->setEnabled(false);
        le_kitapno->setGeometry(QRect(380, 490, 141, 26));
        le_kitapno->setFont(font2);
        btn_oduncal = new QPushButton(oduncalma);
        btn_oduncal->setObjectName("btn_oduncal");
        btn_oduncal->setGeometry(QRect(270, 620, 93, 29));
        QFont font3;
        font3.setBold(true);
        btn_oduncal->setFont(font3);
        de_tarih = new QDateEdit(oduncalma);
        de_tarih->setObjectName("de_tarih");
        de_tarih->setGeometry(QRect(380, 540, 141, 26));
        de_tarih->setFont(font2);
        de_tarih->setDate(QDate(2026, 1, 1));

        retranslateUi(oduncalma);

        QMetaObject::connectSlotsByName(oduncalma);
    } // setupUi

    void retranslateUi(QDialog *oduncalma)
    {
        oduncalma->setWindowTitle(QCoreApplication::translate("oduncalma", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("oduncalma", "\303\226D\303\234N\303\207 ALMA \304\260\305\236LEMLER\304\260", nullptr));
        label_2->setText(QCoreApplication::translate("oduncalma", "T\303\274m \303\234yeler", nullptr));
        label_3->setText(QCoreApplication::translate("oduncalma", "T\303\274m Kitaplar", nullptr));
        label_4->setText(QCoreApplication::translate("oduncalma", "\303\226d\303\274n\303\247 Al\304\261nan Kitaplar Listesi", nullptr));
        label_5->setText(QCoreApplication::translate("oduncalma", "\303\234ye No:", nullptr));
        label_6->setText(QCoreApplication::translate("oduncalma", "Kitap No:", nullptr));
        label_7->setText(QCoreApplication::translate("oduncalma", "\303\226d\303\274n\303\247 Alma Tarihi:", nullptr));
        btn_oduncal->setText(QCoreApplication::translate("oduncalma", "\303\226d\303\274n\303\247 Al", nullptr));
        de_tarih->setDisplayFormat(QCoreApplication::translate("oduncalma", "dd/MM/yyyy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class oduncalma: public Ui_oduncalma {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ODUNCALMA_H
