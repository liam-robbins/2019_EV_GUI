/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLCDNumber *DRAW;
    QProgressBar *DRAWBAR;
    QLCDNumber *REGEN;
    QLabel *label_2;
    QLCDNumber *batInd;
    QLabel *label_4;
    QLabel *label_5;
    QLCDNumber *M1TEMP;
    QLCDNumber *INV1TEMP;
    QLCDNumber *SPD;
    QProgressBar *SPDBAR;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QProgressBar *REGENBAR;
    QLabel *INVERTERFAULT;
    QLabel *MOTORTEMPFAULT;
    QLabel *CANSHORTFAULT;
    QLabel *HIGHVOLTAGEFAULT;
    QLabel *OPENCANFAULT;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 480);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        DRAW = new QLCDNumber(centralWidget);
        DRAW->setObjectName(QStringLiteral("DRAW"));
        DRAW->setGeometry(QRect(0, 220, 161, 91));
        DRAW->setSmallDecimalPoint(true);
        DRAW->setDigitCount(5);
        DRAWBAR = new QProgressBar(centralWidget);
        DRAWBAR->setObjectName(QStringLiteral("DRAWBAR"));
        DRAWBAR->setGeometry(QRect(270, 220, 351, 91));
        DRAWBAR->setMaximum(100);
        DRAWBAR->setValue(0);
        DRAWBAR->setTextVisible(false);
        REGEN = new QLCDNumber(centralWidget);
        REGEN->setObjectName(QStringLiteral("REGEN"));
        REGEN->setGeometry(QRect(0, 310, 161, 91));
        REGEN->setSmallDecimalPoint(true);
        REGEN->setDigitCount(5);
        REGEN->setSegmentStyle(QLCDNumber::Filled);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 220, 111, 31));
        QFont font;
        font.setPointSize(26);
        label_2->setFont(font);
        batInd = new QLCDNumber(centralWidget);
        batInd->setObjectName(QStringLiteral("batInd"));
        batInd->setGeometry(QRect(680, 0, 81, 51));
        batInd->setStyleSheet(QLatin1String("font: 75 10pt \"PibotoLt\";\n"
"background-color: rgb(255, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        batInd->setLineWidth(0);
        batInd->setMidLineWidth(0);
        batInd->setSmallDecimalPoint(true);
        batInd->setDigitCount(4);
        batInd->setSegmentStyle(QLCDNumber::Flat);
        batInd->setProperty("value", QVariant(1));
        batInd->setProperty("intValue", QVariant(1));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(160, 310, 111, 31));
        label_4->setFont(font);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(760, 0, 41, 51));
        QFont font1;
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setWeight(75);
        label_5->setFont(font1);
        label_5->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 0, 0);"));
        M1TEMP = new QLCDNumber(centralWidget);
        M1TEMP->setObjectName(QStringLiteral("M1TEMP"));
        M1TEMP->setGeometry(QRect(620, 220, 151, 91));
        M1TEMP->setSmallDecimalPoint(false);
        M1TEMP->setDigitCount(5);
        INV1TEMP = new QLCDNumber(centralWidget);
        INV1TEMP->setObjectName(QStringLiteral("INV1TEMP"));
        INV1TEMP->setGeometry(QRect(620, 310, 151, 91));
        SPD = new QLCDNumber(centralWidget);
        SPD->setObjectName(QStringLiteral("SPD"));
        SPD->setGeometry(QRect(0, 0, 161, 221));
        SPD->setSmallDecimalPoint(true);
        SPD->setDigitCount(5);
        SPDBAR = new QProgressBar(centralWidget);
        SPDBAR->setObjectName(QStringLiteral("SPDBAR"));
        SPDBAR->setGeometry(QRect(270, 0, 421, 221));
        SPDBAR->setValue(50);
        SPDBAR->setTextVisible(false);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 280, 101, 31));
        QFont font2;
        font2.setPointSize(20);
        label->setFont(font2);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(160, 370, 101, 31));
        label_3->setFont(font2);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(170, 0, 101, 221));
        label_6->setFont(font);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(630, 220, 91, 31));
        label_7->setFont(font2);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(630, 310, 91, 31));
        label_8->setFont(font2);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(780, 220, 21, 61));
        label_9->setFont(font2);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(780, 310, 21, 61));
        label_10->setFont(font2);
        REGENBAR = new QProgressBar(centralWidget);
        REGENBAR->setObjectName(QStringLiteral("REGENBAR"));
        REGENBAR->setGeometry(QRect(270, 310, 351, 91));
        REGENBAR->setMaximum(100);
        REGENBAR->setValue(0);
        REGENBAR->setTextVisible(false);
        INVERTERFAULT = new QLabel(centralWidget);
        INVERTERFAULT->setObjectName(QStringLiteral("INVERTERFAULT"));
        INVERTERFAULT->setGeometry(QRect(270, 130, 351, 91));
        QFont font3;
        font3.setPointSize(22);
        INVERTERFAULT->setFont(font3);
        INVERTERFAULT->setAlignment(Qt::AlignCenter);
        MOTORTEMPFAULT = new QLabel(centralWidget);
        MOTORTEMPFAULT->setObjectName(QStringLiteral("MOTORTEMPFAULT"));
        MOTORTEMPFAULT->setGeometry(QRect(270, 220, 351, 91));
        MOTORTEMPFAULT->setFont(font3);
        MOTORTEMPFAULT->setAlignment(Qt::AlignCenter);
        CANSHORTFAULT = new QLabel(centralWidget);
        CANSHORTFAULT->setObjectName(QStringLiteral("CANSHORTFAULT"));
        CANSHORTFAULT->setGeometry(QRect(270, 70, 351, 91));
        CANSHORTFAULT->setFont(font3);
        CANSHORTFAULT->setAlignment(Qt::AlignCenter);
        HIGHVOLTAGEFAULT = new QLabel(centralWidget);
        HIGHVOLTAGEFAULT->setObjectName(QStringLiteral("HIGHVOLTAGEFAULT"));
        HIGHVOLTAGEFAULT->setGeometry(QRect(270, 310, 351, 91));
        HIGHVOLTAGEFAULT->setFont(font3);
        HIGHVOLTAGEFAULT->setAlignment(Qt::AlignCenter);
        OPENCANFAULT = new QLabel(centralWidget);
        OPENCANFAULT->setObjectName(QStringLiteral("OPENCANFAULT"));
        OPENCANFAULT->setGeometry(QRect(270, 0, 351, 91));
        OPENCANFAULT->setFont(font3);
        OPENCANFAULT->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        label_5->raise();
        DRAW->raise();
        DRAWBAR->raise();
        REGEN->raise();
        label_2->raise();
        batInd->raise();
        label_4->raise();
        M1TEMP->raise();
        INV1TEMP->raise();
        SPD->raise();
        SPDBAR->raise();
        label->raise();
        label_3->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        REGENBAR->raise();
        INVERTERFAULT->raise();
        MOTORTEMPFAULT->raise();
        CANSHORTFAULT->raise();
        HIGHVOLTAGEFAULT->raise();
        OPENCANFAULT->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "DRAW", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "REGEN", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "V", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "kW", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "kW", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "km/hr", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "m1", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "inv1", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "C", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "C", Q_NULLPTR));
        INVERTERFAULT->setText(QApplication::translate("MainWindow", "FAULT: INVERTER TEMP", Q_NULLPTR));
        MOTORTEMPFAULT->setText(QApplication::translate("MainWindow", "FAULT: MOTOR TEMP", Q_NULLPTR));
        CANSHORTFAULT->setText(QApplication::translate("MainWindow", "FAULT: CAN SHORT", Q_NULLPTR));
        HIGHVOLTAGEFAULT->setText(QApplication::translate("MainWindow", "FAULT: HIGH VOLTAGE", Q_NULLPTR));
        OPENCANFAULT->setText(QApplication::translate("MainWindow", "FAULT: CAN OPEN CIRCUIT", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
