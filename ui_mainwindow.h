/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_12;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QPushButton *pushButton_22;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_30;
    QMenuBar *menuBar;
    QMenu *menuCalculator;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(297, 416);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../\320\240\320\260\320\261\320\276\321\207\320\270\320\271 \321\201\321\202\320\276\320\273/w512h5121350249286calculator.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QStringLiteral("background-image:url(:/new/prefix1/image4.jpg)"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 40, 121, 91));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        lineEdit->setFont(font);
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(20, 140, 41, 31));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 140, 41, 31));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(140, 140, 41, 31));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 220, 41, 31));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(140, 180, 41, 31));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(20, 180, 41, 31));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(80, 180, 41, 31));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(80, 220, 41, 31));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(140, 220, 41, 31));
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(80, 260, 41, 31));
        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(140, 260, 41, 31));
        pushButton_14 = new QPushButton(centralWidget);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(20, 260, 41, 31));
        pushButton_15 = new QPushButton(centralWidget);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(200, 180, 41, 31));
        pushButton_17 = new QPushButton(centralWidget);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(200, 260, 41, 31));
        pushButton_18 = new QPushButton(centralWidget);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setGeometry(QRect(200, 220, 41, 31));
        pushButton_22 = new QPushButton(centralWidget);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));
        pushButton_22->setGeometry(QRect(80, 300, 161, 31));
        pushButton_22->setStyleSheet(QStringLiteral("background-image:rgb(239, 41, 41qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 0, 0, 255), stop:0.479904 rgba(255, 0, 0, 255), stop:0.522685 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255)))"));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 20, 91, 91));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 140, 41, 31));
        pushButton_30 = new QPushButton(centralWidget);
        pushButton_30->setObjectName(QStringLiteral("pushButton_30"));
        pushButton_30->setGeometry(QRect(20, 300, 41, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 297, 22));
        menuCalculator = new QMenu(menuBar);
        menuCalculator->setObjectName(QStringLiteral("menuCalculator"));
        MainWindow->setMenuBar(menuBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuCalculator->menuAction());
        menuCalculator->addSeparator();
        menuCalculator->addSeparator();
        menuCalculator->addSeparator();
        menuCalculator->addAction(actionOpen);
        toolBar->addAction(actionOpen);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Calculator", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindow", "Pcap Open", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("MainWindow", "\320\241", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("MainWindow", "*", Q_NULLPTR));
        pushButton_17->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        pushButton_18->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        pushButton_22->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
        lineEdit_2->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "/", Q_NULLPTR));
        pushButton_30->setText(QApplication::translate("MainWindow", "X^2", Q_NULLPTR));
        menuCalculator->setTitle(QApplication::translate("MainWindow", "Calculator", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
