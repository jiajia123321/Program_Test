#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>
#include "actutltypelib.h"
#include "actprogtypelib.h"
#include "ActDefine.h"
#include "snap7.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_BTN_OpenPLC_clicked();

    void on_BTN_GetCPUType_clicked();

    void on_BTN_ClosePLC_clicked();

    void on_BTN_GetValue_clicked();

    void on_BTN_SetValue_clicked();

    void on_BTN_ConnectPLC_clicked();

    void on_BTN_GetValue_XiMenZi_clicked();

    void on_BTN_ClosePLC_XiMenZi_clicked();

    void on_BTN_SetValue_XiMenZi_clicked();

private:
    Ui::Widget *ui;
    ActUtlTypeLib::ActUtlType MyActUtlType;
    ActProgTypeLib::ActProgType MyActProgType;
    TS7Client *client;
};

#endif
