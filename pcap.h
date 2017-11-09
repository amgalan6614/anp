#ifndef PCAP_H
#define PCAP_H

#include <QMainWindow>
#include <pcap.h>
#include <QVector>
namespace Ui {

class PCAP;
}
struct PcapHeader
{
    qint32 t1;
    qint32 t2;
    qint32 caplen;
    qint32 len;
};



class PCAP : public QMainWindow
{
    Q_OBJECT

public:
    explicit PCAP(QWidget *parent = 0);
    ~PCAP();

private slots:
    void on_actionPCAPOPEN_triggered();

    void on_PCAPOPEN_triggered();

    void on_pushButton_clicked();

private:
    Ui::PCAP *ui;
};
class Deny
{
public:
    PcapHeader pHeader;
    char data[2000];
};



struct PcapFHeader
{
    qint32 magic;
    qint16 version_major;
    qint16 version_minor;
    qint32 thiszone;     /* gmt to local correction */
    qint32 sigfigs;    /* accuracy of timestamps */
    qint32 snaplen;    /* max length saved portion of each pkt */
    qint32 linktype;   /* data link type (LINKTYPE_*) */
};


class PacketStream
{
public:
    PcapFHeader fHeader;
    QVector <Deny> packets;
};

#endif // PCAP_H
