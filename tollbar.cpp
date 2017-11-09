#include "tollbar.h"
#include "mainwindow.h"
#include "ui_tollbar.h"
#include "pcap.h"


TollBar::TollBar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TollBar)
{
    ui->setupUi(this);
    form = new PCAP();
    connect(ui->pushButton_2,SIGNAL(clicked()),form,SLOT(show()));
}

TollBar::~TollBar()
{
    delete ui;
}
void TollBar::on_actionOpen_Calculator_triggered()
{

}

void TollBar::on_pushButton_clicked()
{
    MainWindow *zzz = new MainWindow(this);
    zzz->show();
}

