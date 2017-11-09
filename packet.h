#ifndef PACKET_H
#define PACKET_H

class Packet
{
    unsigned int t1;
    unsigned int t2;
protected:
    unsigned int caplen;
    unsigned int len;

public:
    Packet();
//    Packet (const Packet &p);
//    void operator=(const Packet &p);
//    char* getPcapHeader()//selector
//    {
//        return ()&m_pHeader;
//    }
//    char* getData() //selector
//    {
//        return m_data;
//    }
   ~Packet();
    virtual void show();
    void setLen(int l) {len = l;}
    unsigned int getlen() {return len;}
};
class EthPacket : public Packet
{
public:
    EthPacket();
    ~EthPacket();
    virtual void show();
};

class IpPacket : public Packet
{
public:
    IpPacket();
    ~IpPacket();
    virtual void show();
};


#endif // PACKET_H
