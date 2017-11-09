#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"
#include<QFile>
#include <QDebug>
bool plus=0,minus=0,multi=0,devide=0,ex=0;
double Num,Num2;
int checked=0;
QString Line,Line2;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionOpen,SIGNAL(triggered()),this,SLOT(open()));

}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_4_clicked(bool checked)
{
    ui->lineEdit->setText(ui->lineEdit->text()+"1");
}


void MainWindow::on_pushButton_8_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"2");
}
void MainWindow::on_pushButton_9_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"3");
}
void MainWindow::on_pushButton_6_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"4");
}
void MainWindow::on_pushButton_7_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"5");
}
void MainWindow::on_pushButton_5_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"6");
}
void MainWindow::on_pushButton_1_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"7");
}
void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"8");
}
void MainWindow::on_pushButton_3_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"9");
}
void MainWindow::on_pushButton_10_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"0");
}


void MainWindow::on_pushButton_17_clicked()
{
    double s;
    plus=1;
    if (checked==2)
    {
        Line = ui->lineEdit->text();
        Num = Line.toFloat();
        Line2 = ui->lineEdit_2->text();
        Num2 = Line2.toFloat();
        s=Num2-Num;
        ui->lineEdit_2->setText(QString::number(s));
        ui->lineEdit->setText(0);
    }
    if (checked==3)
    {
        Line = ui->lineEdit->text();
        Num = Line.toFloat();
        Line2 = ui->lineEdit_2->text();
        Num2 = Line2.toFloat();
        s=Num2*Num;
        ui->lineEdit_2->setText(QString::number(s));
        ui->lineEdit->setText(0);
    }
    if (checked==4)
    {
        Line = ui->lineEdit->text();
        Num = Line.toFloat();
        Line2 = ui->lineEdit_2->text();
        Num2 = Line2.toFloat();
        s=Num2/Num;
        ui->lineEdit_2->setText(QString::number(s));
        ui->lineEdit->setText(0);
    }
    if (checked==5)
    {
        Line = ui->lineEdit->text();
        Num = Line.toFloat();
        Line2 = ui->lineEdit_2->text();
        Num2 = Line2.toFloat();
        s=pow(Num2,Num);
        ui->lineEdit_2->setText(QString::number(s));
        ui->lineEdit->setText(0);
    }
    Line = ui->lineEdit->text();
    Num = Line.toFloat();
    Line2 = ui->lineEdit_2->text();
    Num2 = Line2.toFloat();
    s=Num+Num2;
    ui->lineEdit_2->setText(QString::number(s));
    ui->lineEdit->setText(0);
    checked=1;
}

void MainWindow::on_pushButton_18_clicked()
{
    double s;
    minus=1;
    if (checked==1)
    {
        Line = ui->lineEdit->text();
        Num = Line.toFloat();
        Line2 = ui->lineEdit_2->text();
        Num2 = Line2.toFloat();
        s=Num2+Num;
        ui->lineEdit_2->setText(QString::number(s));
        ui->lineEdit->setText(0);
    }
    if (checked==3)
    {
        Line = ui->lineEdit->text();
        Num = Line.toFloat();
        Line2 = ui->lineEdit_2->text();
        Num2 = Line2.toFloat();
        s=Num2*Num;
        ui->lineEdit_2->setText(QString::number(s));
        ui->lineEdit->setText(0);
    }
    if (checked==4)
    {
        Line = ui->lineEdit->text();
        Num = Line.toFloat();
        Line2 = ui->lineEdit_2->text();
        Num2 = Line2.toFloat();
        s=Num2/Num;
        ui->lineEdit_2->setText(QString::number(s));
        ui->lineEdit->setText(0);
    }
    if (checked==5)
    {
        Line = ui->lineEdit->text();
        Num = Line.toFloat();
        Line2 = ui->lineEdit_2->text();
        Num2 = Line2.toFloat();
        s=pow(Num2,Num);
        ui->lineEdit_2->setText(QString::number(s));
        ui->lineEdit->setText(0);
    }
    Line = ui->lineEdit->text();
    Num = Line.toFloat();
    Line2 = ui->lineEdit_2->text();
    Num2 = Line2.toFloat();
    if (Num2==0)
        ui->lineEdit_2->setText(QString::number(Num));
    else
    {
    s=Num2-Num;
    ui->lineEdit_2->setText(QString::number(s));
    }
    ui->lineEdit->setText(0);
    checked=2;
}

void MainWindow::on_pushButton_15_clicked()
{
    double s;
    if (checked==1)
    {
        Line = ui->lineEdit->text();
        Num = Line.toFloat();
        Line2 = ui->lineEdit_2->text();
        Num2 = Line2.toFloat();
        s=Num2+Num;
        ui->lineEdit_2->setText(QString::number(s));
        ui->lineEdit->setText(0);
    }
    if (checked==2)
    {
        Line = ui->lineEdit->text();
        Num = Line.toFloat();
        Line2 = ui->lineEdit_2->text();
        Num2 = Line2.toFloat();
        s=Num2-Num;
        ui->lineEdit_2->setText(QString::number(s));
        ui->lineEdit->setText(0);
    }
    if (checked==4)
    {
        Line = ui->lineEdit->text();
        Num = Line.toFloat();
        Line2 = ui->lineEdit_2->text();
        Num2 = Line2.toFloat();
        s=Num2/Num;
        ui->lineEdit_2->setText(QString::number(s));
        ui->lineEdit->setText(0);
    }
    if (checked==5)
    {
        Line = ui->lineEdit->text();
        Num = Line.toFloat();
        Line2 = ui->lineEdit_2->text();
        Num2 = Line2.toFloat();
        s=pow(Num2,Num);
        ui->lineEdit_2->setText(QString::number(s));
        ui->lineEdit->setText(0);
    }
    Line = ui->lineEdit->text();
    Num = Line.toFloat();
    Line2 = ui->lineEdit_2->text();
    Num2 = Line2.toFloat();
    if (Num2==0)
        s=Num*1;
    else
    if (Num==0)
        s=Num2*1;
    else
        s=Num*Num2;
    ui->lineEdit_2->setText(QString::number(s));
    ui->lineEdit->setText(0);
    multi=1;
    checked=3;
}

void MainWindow::on_pushButton_22_clicked()
{
    double s;
    Line =ui->lineEdit->text();
    Num = Line.toFloat();
    Line2 = ui->lineEdit_2->text();
    Num2 = Line2.toFloat();
    if (checked==1)
    {
        s=Num+Num2;
        ui->lineEdit->setText(QString::number(s));
        plus=false;
    }
    if (checked==2)
    {
        s=Num2-Num;
        ui->lineEdit->setText(QString::number(s));
        minus=false;
    }
    if (checked==3)
        {
            s=Num2*Num;
            ui->lineEdit->setText(QString::number(s));
            minus=false;
        }
    if (checked==4)
        {
            s=Num2/Num;
            ui->lineEdit->setText(QString::number(s));
            devide=false;
        }\
    if (checked==5)
    {
        s=pow(Num2,Num);
        ui->lineEdit->setText(QString::number(s));
    }

    ui->lineEdit_2->setText(0);
}

void MainWindow::on_pushButton_clicked()
{
    double s;
    if (checked==1)
    {
        Line = ui->lineEdit->text();
        Num = Line.toFloat();
        Line2 = ui->lineEdit_2->text();
        Num2 = Line2.toFloat();
        s=Num2+Num;
        ui->lineEdit_2->setText(QString::number(s));
        ui->lineEdit->setText(0);
    }
    if (checked==2)
    {
        Line = ui->lineEdit->text();
        Num = Line.toFloat();
        Line2 = ui->lineEdit_2->text();
        Num2 = Line2.toFloat();
        s=Num2-Num;
        ui->lineEdit_2->setText(QString::number(s));
        ui->lineEdit->setText(0);
    }
    if (checked==3)
    {
        Line = ui->lineEdit->text();
        Num = Line.toFloat();
        Line2 = ui->lineEdit_2->text();
        Num2 = Line2.toFloat();
        s=Num2*Num;
        ui->lineEdit_2->setText(QString::number(s));
        ui->lineEdit->setText(0);
    }
    if (checked==5)
    {
        Line = ui->lineEdit->text();
        Num = Line.toFloat();
        Line2 = ui->lineEdit_2->text();
        Num2 = Line2.toFloat();
        s=pow(Num2,Num);
        ui->lineEdit_2->setText(QString::number(s));
        ui->lineEdit->setText(0);
    }

    Line = ui->lineEdit->text();
    Num = Line.toFloat();
    Line2 = ui->lineEdit_2->text();
    Num2 = Line2.toFloat();
    if (Num==0)
        s=Num2;
    else
    if (Num2==0)
        s=Num;
    else
        s=Num2/Num;
    ui->lineEdit_2->setText(QString::number(s));
    ui->lineEdit->setText(0);
    devide=1;
    checked=4;
}

void MainWindow::on_pushButton_12_clicked()
{
    double s;
    Line = ui->lineEdit->text();
    Num = Line.toFloat();
    s=Num/100;
    ui->lineEdit->setText(QString::number(s));
}

void MainWindow::on_pushButton_14_clicked()
{
    ui->lineEdit->setText(0);
    ui->lineEdit_2->setText(0);
    checked=0;
    ex=0;
}

void MainWindow::on_pushButton_30_clicked()
{
    double s;
    if (checked==1)
    {
        Line = ui->lineEdit->text();
        Num = Line.toFloat();
        Line2 = ui->lineEdit_2->text();
        Num2 = Line2.toFloat();
        s=Num2+Num;
        ui->lineEdit_2->setText(QString::number(s));
        ui->lineEdit->setText(0);
    }
    if (checked==2)
    {
        Line = ui->lineEdit->text();
        Num = Line.toFloat();
        Line2 = ui->lineEdit_2->text();
        Num2 = Line2.toFloat();
        s=Num2-Num;
        ui->lineEdit_2->setText(QString::number(s));
        ui->lineEdit->setText(0);
    }
    if (checked==3)
    {
        Line = ui->lineEdit->text();
        Num = Line.toFloat();
        Line2 = ui->lineEdit_2->text();
        Num2 = Line2.toFloat();
        s=Num2*Num;
        ui->lineEdit_2->setText(QString::number(s));
        ui->lineEdit->setText(0);
    }
    if (checked==4)
    {
        Line = ui->lineEdit->text();
        Num = Line.toFloat();
        Line2 = ui->lineEdit_2->text();
        Num2 = Line2.toFloat();
        s=Num2/Num;
        ui->lineEdit_2->setText(QString::number(s));
        ui->lineEdit->setText(0);
    }
    Line = ui->lineEdit->text();
    Num = Line.toFloat();
    Line2 = ui->lineEdit_2->text();
    Num2 = Line2.toFloat();
    if ((ex==0)&&(Num2==0))
        s=Num;
    else
    if (ex==0)
        s=Num2;
    else
        s=pow(Num2,Num);
    ui->lineEdit_2->setText(QString::number(s));
    ui->lineEdit->setText(0);
    ex=1;
    checked=5;
}


void MainWindow::on_actionOpen_triggered()
{
    QString Name = QFileDialog::getOpenFileName(0,"Open File","","PCAP files (*.cap)");
    qDebug() << Name;
    if ( Name == "")
        return;
    QFile file(Name);
    if (!file.open(QIODevice::ReadOnly))
    {
        qDebug() <<"error open file";

    }
}
