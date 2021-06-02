#pragma execution_character_set("utf-8")
#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) : QWidget(parent), ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("Qt三菱PLC通信+西门子PLC通信");
    showMaximized();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_BTN_OpenPLC_clicked()
{
    int lRet;
    if (ui->radioButton_ActProgType->isChecked() == true)
    {
        ui->listWidget->addItem("ActProgType");
        MyActProgType.SetActUnitType(UNIT_QNUSB);
        MyActProgType.SetActProtocolType(PROTOCOL_USB);
        lRet = MyActProgType.Open();
    }
    else
    {
        ui->listWidget->addItem("ActUtlType");
        MyActUtlType.SetActLogicalStationNumber(1);
        lRet = MyActUtlType.Open();
    }
    ui->listWidget->addItem(QString("0x%1").arg(int(lRet), 8, 16, QLatin1Char('0')));
}

void Widget::on_BTN_GetCPUType_clicked()
{
    int lRet;
    int lCpuCode;
    QString szCpuName;
    if (ui->radioButton_ActProgType->isChecked() == true)
    {
        lRet = MyActProgType.GetCpuType(szCpuName, lCpuCode);
    }
    else
    {
        lRet = MyActUtlType.GetCpuType(szCpuName, lCpuCode);
    }
    if(lRet == 0x00)
    {
        ui->listWidget->addItem("设备数值: " + QString("0x%1").arg(int(lRet), 8, 16, QLatin1Char('0')));
        ui->listWidget->addItem("设备名: " + szCpuName);
    }
    ui->listWidget->addItem(QString("0x%1").arg(int(lRet), 8, 16, QLatin1Char('0')));
}

void Widget::on_BTN_ClosePLC_clicked()
{
    int lRet;
    if (ui->radioButton_ActProgType->isChecked() == true)
    {
        lRet = MyActProgType.Close();
    }
    else
    {
        lRet = MyActUtlType.Close();
    }
    ui->listWidget->addItem(QString("0x%1").arg(int(lRet), 8, 16, QLatin1Char('0')));
}

void Widget::on_BTN_GetValue_clicked()
{
    long lRet;
    int lValue;
    if (ui->radioButton_ActProgType->isChecked() == true)
    {
        lRet = MyActProgType.GetDevice(ui->lineEdit_DeviceName->text().trimmed(), lValue);
    }
    else
    {
        lRet = MyActUtlType.GetDevice(ui->lineEdit_DeviceName->text().trimmed(), lValue);
    }
    if(lRet == 0x00)
    {
        ui->listWidget->addItem(QString("0x%1").arg(int(lValue), 8, 16, QLatin1Char('0')));
    }
    ui->listWidget->addItem(QString("0x%1").arg(int(lRet), 8, 16, QLatin1Char('0')));
}

void Widget::on_BTN_SetValue_clicked()
{
    long lRet;
    if (ui->radioButton_ActProgType->isChecked() == true)
    {
        lRet = MyActProgType.SetDevice(ui->lineEdit_DeviceName->text().trimmed(), ui->lineEdit_DeviceValue->text().trimmed().toInt());
    }
    else
    {
        lRet = MyActUtlType.SetDevice(ui->lineEdit_DeviceName->text().trimmed(), ui->lineEdit_DeviceValue->text().trimmed().toInt());
    }
    ui->listWidget->addItem(QString("0x%1").arg(int(lRet), 8, 16, QLatin1Char('0')));
}

void Widget::on_BTN_ConnectPLC_clicked()
{
    client = new TS7Client();
    const char *ip = ui->lineEdit_IP->text().trimmed().toUtf8().data();
    client->ConnectTo(ip, 0, 1);
}

void Widget::on_BTN_GetValue_XiMenZi_clicked()
{
    QString Data;
    client->MBRead(ui->lineEdit_DeviceAdress_XiMenZi->text().trimmed().toInt(), 1, &Data);
    ui->listWidget->addItem(Data);
}

void Widget::on_BTN_ClosePLC_XiMenZi_clicked()
{
    client->Disconnect();
}

void Widget::on_BTN_SetValue_XiMenZi_clicked()
{
    QString Data = ui->lineEdit_DeviceValue_XiMenZi->text().trimmed();
    client->MBWrite(ui->lineEdit_DeviceAdress_XiMenZi->text().trimmed().toInt(), 1, &Data);
}



