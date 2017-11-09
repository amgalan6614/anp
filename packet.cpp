#include "packet.h"
#include <QDebug>
Packet::Packet()
{
    //m_data=NULL;
    qDebug() << "Constructor started";
}
//Packet::Packet (const Packet &p);
//{
//    m_pHeader=p.m_pHeader;
//    m_data = new char [m_Header.caplen];
//    memcpy(p.m_data,m_data,m_pHeader.caplen);
//}
//void Packet::operator=(const Packet &p)
//{
//    m_pHeader=p.m_pHeader;
//    m_data = new char [m_Header.caplen];
//    memcpy(p.m_data,m_data,m_pHeader.caplen);
//}zsaqssaqz
Packet::~Packet()
{

//    if (m_data!=NULL)
//        delete []m_data;
    qDebug() << "Destructor started";
}



EthPacket::EthPacket()
{
    len = 0 ;
    qDebug() << "EthConstructor started";
}

EthPacket::~EthPacket()
{
    qDebug() << "EthDestructor started";
}




IpPacket::IpPacket()
{
    qDebug() << "IpConstructor started";
}

IpPacket::~IpPacket()
{
    qDebug() << "IpDestructor started";
}




void Packet::show()
{
    qDebug()<<"Packet show()";
}
void EthPacket::show()
{
    qDebug()<<"EthPacket show()";
}
void IpPacket::show()
{
    qDebug()<<"IpPacket show()";
}





