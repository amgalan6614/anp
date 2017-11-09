/********************************************************************************
** Form generated from reading UI file 'tollbar.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOLLBAR_H
#define UI_TOLLBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TollBar
{
public:
    QAction *actionOpen_Calculator;
    QAction *actiongrfd;
    QAction *actiongfd;
    QAction *actionfg;
    QAction *actionOpen_PCAP;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QMenu *menuMenu;

    void setupUi(QMainWindow *TollBar)
    {
        if (TollBar->objectName().isEmpty())
            TollBar->setObjectName(QStringLiteral("TollBar"));
        TollBar->resize(566, 255);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../\320\240\320\260\320\261\320\276\321\207\320\270\320\271 \321\201\321\202\320\276\320\273/w512h5121350249286calculator.png"), QSize(), QIcon::Normal, QIcon::Off);
        TollBar->setWindowIcon(icon);
        actionOpen_Calculator = new QAction(TollBar);
        actionOpen_Calculator->setObjectName(QStringLiteral("actionOpen_Calculator"));
        actiongrfd = new QAction(TollBar);
        actiongrfd->setObjectName(QStringLiteral("actiongrfd"));
        actiongfd = new QAction(TollBar);
        actiongfd->setObjectName(QStringLiteral("actiongfd"));
        actionfg = new QAction(TollBar);
        actionfg->setObjectName(QStringLiteral("actionfg"));
        actionOpen_PCAP = new QAction(TollBar);
        actionOpen_PCAP->setObjectName(QStringLiteral("actionOpen_PCAP"));
        centralwidget = new QWidget(TollBar);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 281, 231));
        pushButton->setStyleSheet(QStringLiteral("background-image:url(:/new/prefix1/image4.jpg)"));
        pushButton->setIcon(icon);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 0, 291, 231));
        TollBar->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TollBar);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 566, 22));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        TollBar->setMenuBar(menubar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionOpen_Calculator);

        retranslateUi(TollBar);

        QMetaObject::connectSlotsByName(TollBar);
    } // setupUi

    void retranslateUi(QMainWindow *TollBar)
    {
        TollBar->setWindowTitle(QApplication::translate("TollBar", "Calculate", Q_NULLPTR));
        actionOpen_Calculator->setText(QApplication::translate("TollBar", "Open Calculator", Q_NULLPTR));
        actionOpen_Calculator->setShortcut(QApplication::translate("TollBar", "F1", Q_NULLPTR));
        actiongrfd->setText(QApplication::translate("TollBar", "grfd", Q_NULLPTR));
        actiongfd->setText(QApplication::translate("TollBar", "gfd", Q_NULLPTR));
        actionfg->setText(QApplication::translate("TollBar", "fg", Q_NULLPTR));
        actionOpen_PCAP->setText(QApplication::translate("TollBar", "Open_PCAP", Q_NULLPTR));
        pushButton->setText(QApplication::translate("TollBar", "Open Calculator", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("TollBar", "Open PCAP", Q_NULLPTR));
        menuMenu->setTitle(QApplication::translate("TollBar", "Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TollBar: public Ui_TollBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOLLBAR_H
