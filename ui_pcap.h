/********************************************************************************
** Form generated from reading UI file 'pcap.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PCAP_H
#define UI_PCAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PCAP
{
public:
    QAction *PCAPOPEN;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QTextEdit *textEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PCAP)
    {
        if (PCAP->objectName().isEmpty())
            PCAP->setObjectName(QStringLiteral("PCAP"));
        PCAP->resize(1145, 585);
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        PCAP->setFont(font);
        PCAPOPEN = new QAction(PCAP);
        PCAPOPEN->setObjectName(QStringLiteral("PCAPOPEN"));
        centralwidget = new QWidget(PCAP);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(0, 0, 201, 151));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        pushButton->setFont(font1);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(0, 150, 111, 61));
        lineEdit_2->setFont(font1);
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(0, 220, 111, 61));
        lineEdit_3->setFont(font1);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(0, 290, 111, 61));
        lineEdit->setFont(font1);
        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(110, 150, 91, 61));
        lineEdit_5->setFont(font1);
        lineEdit_6 = new QLineEdit(centralwidget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(110, 220, 91, 61));
        lineEdit_6->setFont(font1);
        lineEdit_7 = new QLineEdit(centralwidget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(110, 290, 91, 61));
        lineEdit_7->setFont(font1);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(220, 0, 911, 551));
        QFont font2;
        font2.setPointSize(12);
        textEdit->setFont(font2);
        PCAP->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(PCAP);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        PCAP->setStatusBar(statusbar);

        retranslateUi(PCAP);

        QMetaObject::connectSlotsByName(PCAP);
    } // setupUi

    void retranslateUi(QMainWindow *PCAP)
    {
        PCAP->setWindowTitle(QApplication::translate("PCAP", "MainWindow", Q_NULLPTR));
        PCAPOPEN->setText(QApplication::translate("PCAP", "PCAPOPEN", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PCAPOPEN->setToolTip(QApplication::translate("PCAP", "PCAPOPEN", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("PCAP", "PCAP FILE", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lineEdit_2->setToolTip(QApplication::translate("PCAP", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lineEdit_2->setText(QApplication::translate("PCAP", "Average:", Q_NULLPTR));
        lineEdit_3->setText(QApplication::translate("PCAP", "Max:", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("PCAP", "Min:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PCAP: public Ui_PCAP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PCAP_H
