#include "mainwindow.h"
#include "tollbar.h"
#include <QApplication>
#include <packet.h>
#include <QDebug>
int main(int argc, char *argv[])
{
    qDebug() << "main() started";
    Packet p;
    p.setLen(500);

    Packet *p_ptr;

    qDebug() << "main():" <<__LINE__;
    p_ptr = new Packet();
    p_ptr->setLen(p.getlen());
    qDebug ()<<p_ptr->getlen();
    delete p_ptr;
    EthPacket ep;
    IpPacket ip;
    p.show();
    ep.show();
    ip.show();
    p_ptr = &p;
    p_ptr ->show();
    p_ptr = &ep;
    p_ptr ->show();
    p_ptr = &ip;
    p_ptr ->show();


    QApplication a(argc, argv);
   /* MainWindow w;
    w.show(); */

   TollBar w;
   w.show();
    return a.exec();
}
