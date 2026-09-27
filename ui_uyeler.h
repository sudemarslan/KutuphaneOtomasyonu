/********************************************************************************
** Form generated from reading UI file 'uyeler.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UYELER_H
#define UI_UYELER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_uyeler
{
public:
    QLabel *label;
    QTableView *tv_uyeler;
    QLabel *label_2;
    QLineEdit *le_no;
    QLineEdit *le_ad;
    QLineEdit *le_soyad;
    QPushButton *btn_yenikayit;
    QPushButton *btn_guncelle;
    QPushButton *btn_sil;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *uyeler)
    {
        if (uyeler->objectName().isEmpty())
            uyeler->setObjectName("uyeler");
        uyeler->resize(1339, 692);
        label = new QLabel(uyeler);
        label->setObjectName("label");
        label->setGeometry(QRect(650, 40, 501, 121));
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
        label->setScaledContents(false);
        tv_uyeler = new QTableView(uyeler);
        tv_uyeler->setObjectName("tv_uyeler");
        tv_uyeler->setGeometry(QRect(230, 190, 361, 421));
        label_2 = new QLabel(uyeler);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(240, 150, 171, 20));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label_2->setFont(font1);
        le_no = new QLineEdit(uyeler);
        le_no->setObjectName("le_no");
        le_no->setEnabled(false);
        le_no->setGeometry(QRect(870, 250, 181, 26));
        le_ad = new QLineEdit(uyeler);
        le_ad->setObjectName("le_ad");
        le_ad->setGeometry(QRect(870, 290, 181, 26));
        le_soyad = new QLineEdit(uyeler);
        le_soyad->setObjectName("le_soyad");
        le_soyad->setGeometry(QRect(870, 340, 181, 26));
        btn_yenikayit = new QPushButton(uyeler);
        btn_yenikayit->setObjectName("btn_yenikayit");
        btn_yenikayit->setGeometry(QRect(710, 460, 111, 31));
        btn_yenikayit->setFont(font1);
        btn_guncelle = new QPushButton(uyeler);
        btn_guncelle->setObjectName("btn_guncelle");
        btn_guncelle->setGeometry(QRect(930, 460, 93, 29));
        btn_guncelle->setFont(font1);
        btn_sil = new QPushButton(uyeler);
        btn_sil->setObjectName("btn_sil");
        btn_sil->setGeometry(QRect(820, 550, 93, 29));
        btn_sil->setFont(font1);
        layoutWidget = new QWidget(uyeler);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(760, 240, 107, 131));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);

        verticalLayout->addWidget(label_5);


        retranslateUi(uyeler);

        QMetaObject::connectSlotsByName(uyeler);
    } // setupUi

    void retranslateUi(QDialog *uyeler)
    {
        uyeler->setWindowTitle(QCoreApplication::translate("uyeler", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("uyeler", "\303\234YE \304\260\305\236LEMLER\304\260", nullptr));
        label_2->setText(QCoreApplication::translate("uyeler", "T\303\234M \303\234YELER", nullptr));
        btn_yenikayit->setText(QCoreApplication::translate("uyeler", "Yeni Kay\304\261t", nullptr));
        btn_guncelle->setText(QCoreApplication::translate("uyeler", "G\303\274ncelle", nullptr));
        btn_sil->setText(QCoreApplication::translate("uyeler", "Sil", nullptr));
        label_3->setText(QCoreApplication::translate("uyeler", "\303\234ye No:", nullptr));
        label_4->setText(QCoreApplication::translate("uyeler", "\303\234ye Ad:", nullptr));
        label_5->setText(QCoreApplication::translate("uyeler", "\303\234ye Soyad:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class uyeler: public Ui_uyeler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UYELER_H
