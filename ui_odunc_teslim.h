/********************************************************************************
** Form generated from reading UI file 'odunc_teslim.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ODUNC_TESLIM_H
#define UI_ODUNC_TESLIM_H

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

class Ui_odunc_teslim
{
public:
    QTableView *tv_odunckitap;
    QTableView *tv_teslimkitap;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *le_uyeno;
    QLineEdit *le_kitapno;
    QDateEdit *de_tarihver;
    QPushButton *btn_oduncver;

    void setupUi(QDialog *odunc_teslim)
    {
        if (odunc_teslim->objectName().isEmpty())
            odunc_teslim->setObjectName("odunc_teslim");
        odunc_teslim->resize(1368, 750);
        tv_odunckitap = new QTableView(odunc_teslim);
        tv_odunckitap->setObjectName("tv_odunckitap");
        tv_odunckitap->setGeometry(QRect(200, 170, 361, 421));
        tv_teslimkitap = new QTableView(odunc_teslim);
        tv_teslimkitap->setObjectName("tv_teslimkitap");
        tv_teslimkitap->setGeometry(QRect(950, 170, 361, 421));
        label = new QLabel(odunc_teslim);
        label->setObjectName("label");
        label->setGeometry(QRect(550, 50, 551, 61));
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
        label_2 = new QLabel(odunc_teslim);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(620, 270, 63, 20));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label_2->setFont(font1);
        label_3 = new QLabel(odunc_teslim);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(620, 330, 81, 20));
        label_3->setFont(font1);
        label_4 = new QLabel(odunc_teslim);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(200, 140, 241, 20));
        label_4->setFont(font1);
        label_5 = new QLabel(odunc_teslim);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(950, 140, 241, 20));
        label_5->setFont(font1);
        label_6 = new QLabel(odunc_teslim);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(680, 380, 141, 20));
        label_6->setFont(font1);
        le_uyeno = new QLineEdit(odunc_teslim);
        le_uyeno->setObjectName("le_uyeno");
        le_uyeno->setGeometry(QRect(720, 270, 161, 26));
        le_kitapno = new QLineEdit(odunc_teslim);
        le_kitapno->setObjectName("le_kitapno");
        le_kitapno->setGeometry(QRect(720, 320, 161, 26));
        de_tarihver = new QDateEdit(odunc_teslim);
        de_tarihver->setObjectName("de_tarihver");
        de_tarihver->setGeometry(QRect(660, 410, 161, 26));
        de_tarihver->setMinimumDate(QDate(2026, 1, 1));
        de_tarihver->setDate(QDate(2026, 1, 1));
        btn_oduncver = new QPushButton(odunc_teslim);
        btn_oduncver->setObjectName("btn_oduncver");
        btn_oduncver->setGeometry(QRect(670, 470, 151, 29));
        btn_oduncver->setFont(font1);

        retranslateUi(odunc_teslim);

        QMetaObject::connectSlotsByName(odunc_teslim);
    } // setupUi

    void retranslateUi(QDialog *odunc_teslim)
    {
        odunc_teslim->setWindowTitle(QCoreApplication::translate("odunc_teslim", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("odunc_teslim", "\303\226D\303\234N\303\207 TESL\304\260M ETME \304\260\305\236LEMLER\304\260", nullptr));
        label_2->setText(QCoreApplication::translate("odunc_teslim", "\303\234ye No:", nullptr));
        label_3->setText(QCoreApplication::translate("odunc_teslim", "Kitap No:", nullptr));
        label_4->setText(QCoreApplication::translate("odunc_teslim", "\303\226d\303\274n\303\247 Al\304\261nan Kitaplar Listesi", nullptr));
        label_5->setText(QCoreApplication::translate("odunc_teslim", "Teslim Edilen Kitaplar Listesi", nullptr));
        label_6->setText(QCoreApplication::translate("odunc_teslim", "\303\226d\303\274n\303\247 Verme Tarihi", nullptr));
        de_tarihver->setDisplayFormat(QCoreApplication::translate("odunc_teslim", "dd/MM/yyyy", nullptr));
        btn_oduncver->setText(QCoreApplication::translate("odunc_teslim", "\303\226d\303\274nc\303\274 Ver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class odunc_teslim: public Ui_odunc_teslim {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ODUNC_TESLIM_H
