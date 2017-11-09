#ifndef TOLLBAR_H
#define TOLLBAR_H

#include <QMainWindow>
#include "pcap.h"
namespace Ui {
class TollBar;
}

class TollBar : public QMainWindow
{
    Q_OBJECT

public:
    explicit TollBar(QWidget *parent = 0);
    ~TollBar();

private slots:
    void on_actionOpen_Calculator_triggered();

    void on_pushButton_clicked();

    void on_actionOpen_PCAP_triggered();

    void on_pushButton_2_clicked();

private:
    Ui::TollBar *ui;
private:
    PCAP *form;
};

#endif // TOLLBAR_H
