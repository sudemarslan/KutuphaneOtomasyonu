/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *btn_kitap;
    QPushButton *btn_uye;
    QPushButton *btn_oduncalma;
    QPushButton *btn_oduncteslim;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1355, 789);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(470, 130, 741, 61));
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
        btn_kitap = new QPushButton(centralwidget);
        btn_kitap->setObjectName("btn_kitap");
        btn_kitap->setGeometry(QRect(460, 240, 211, 211));
        btn_kitap->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/book.jpg);"));
        btn_uye = new QPushButton(centralwidget);
        btn_uye->setObjectName("btn_uye");
        btn_uye->setGeometry(QRect(190, 240, 211, 211));
        btn_uye->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/user.jpg);"));
        btn_oduncalma = new QPushButton(centralwidget);
        btn_oduncalma->setObjectName("btn_oduncalma");
        btn_oduncalma->setGeometry(QRect(760, 240, 211, 211));
        btn_oduncalma->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/odunc_1.jpg);"));
        btn_oduncteslim = new QPushButton(centralwidget);
        btn_oduncteslim->setObjectName("btn_oduncteslim");
        btn_oduncteslim->setGeometry(QRect(1060, 240, 211, 211));
        btn_oduncteslim->setStyleSheet(QString::fromUtf8("border-image: url(:/images/images/odunc_2.jpg);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(230, 470, 151, 31));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(490, 470, 171, 31));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(760, 470, 231, 31));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(1030, 470, 301, 31));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1355, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "K\303\234T\303\234PHANE OTOMASYONUNA HO\305\236GELD\304\260N\304\260Z!", nullptr));
        btn_kitap->setText(QString());
        btn_uye->setText(QString());
        btn_oduncalma->setText(QString());
        btn_oduncteslim->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "\303\234ye \304\260\305\237lemleri", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Kitap \304\260\305\237lemleri", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\303\226d\303\274n\303\247 Alma \304\260\305\237lemleri", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\303\226d\303\274n\303\247 Teslim Etme \304\260\305\237lemleri", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
