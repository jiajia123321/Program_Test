/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout;
    QPushButton *BTN_OpenPLC;
    QGridLayout *gridLayout1;
    QLabel *label1;
    QLineEdit *lineEdit_DeviceName;
    QPushButton *BTN_GetValue;
    QLabel *label2;
    QLineEdit *lineEdit_DeviceValue;
    QPushButton *BTN_SetValue;
    QListWidget *listWidget;
    QPushButton *BTN_GetCPUType;
    QGridLayout *gridLayout2;
    QRadioButton *radioButton_ActProgType;
    QRadioButton *radioButton_ActUtlType;
    QPushButton *BTN_ClosePLC;
    QGroupBox *groupBox2;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout3;
    QPushButton *BTN_ConnectPLC;
    QLabel *label3;
    QLineEdit *lineEdit_IP;
    QLineEdit *lineEdit_DeviceValue_XiMenZi;
    QLabel *label4;
    QPushButton *BTN_SetValue_XiMenZi;
    QPushButton *BTN_GetValue_XiMenZi;
    QLabel *label5;
    QLineEdit *lineEdit_DeviceAdress_XiMenZi;
    QPushButton *BTN_ClosePLC_XiMenZi;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(667, 595);
        gridLayout_3 = new QGridLayout(Widget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox1 = new QGroupBox(Widget);
        groupBox1->setObjectName(QStringLiteral("groupBox1"));
        gridLayout = new QGridLayout(groupBox1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        BTN_OpenPLC = new QPushButton(groupBox1);
        BTN_OpenPLC->setObjectName(QStringLiteral("BTN_OpenPLC"));

        gridLayout->addWidget(BTN_OpenPLC, 2, 0, 1, 1);

        gridLayout1 = new QGridLayout();
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        label1 = new QLabel(groupBox1);
        label1->setObjectName(QStringLiteral("label1"));

        gridLayout1->addWidget(label1, 0, 0, 1, 1);

        lineEdit_DeviceName = new QLineEdit(groupBox1);
        lineEdit_DeviceName->setObjectName(QStringLiteral("lineEdit_DeviceName"));

        gridLayout1->addWidget(lineEdit_DeviceName, 0, 1, 1, 1);

        BTN_GetValue = new QPushButton(groupBox1);
        BTN_GetValue->setObjectName(QStringLiteral("BTN_GetValue"));

        gridLayout1->addWidget(BTN_GetValue, 0, 2, 1, 1);

        label2 = new QLabel(groupBox1);
        label2->setObjectName(QStringLiteral("label2"));

        gridLayout1->addWidget(label2, 1, 0, 1, 1);

        lineEdit_DeviceValue = new QLineEdit(groupBox1);
        lineEdit_DeviceValue->setObjectName(QStringLiteral("lineEdit_DeviceValue"));

        gridLayout1->addWidget(lineEdit_DeviceValue, 1, 1, 1, 1);

        BTN_SetValue = new QPushButton(groupBox1);
        BTN_SetValue->setObjectName(QStringLiteral("BTN_SetValue"));

        gridLayout1->addWidget(BTN_SetValue, 1, 2, 1, 1);


        gridLayout->addLayout(gridLayout1, 1, 0, 1, 3);

        listWidget = new QListWidget(groupBox1);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout->addWidget(listWidget, 3, 0, 1, 3);

        BTN_GetCPUType = new QPushButton(groupBox1);
        BTN_GetCPUType->setObjectName(QStringLiteral("BTN_GetCPUType"));

        gridLayout->addWidget(BTN_GetCPUType, 2, 1, 1, 1);

        gridLayout2 = new QGridLayout();
        gridLayout2->setSpacing(6);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        radioButton_ActProgType = new QRadioButton(groupBox1);
        radioButton_ActProgType->setObjectName(QStringLiteral("radioButton_ActProgType"));

        gridLayout2->addWidget(radioButton_ActProgType, 0, 0, 1, 1);

        radioButton_ActUtlType = new QRadioButton(groupBox1);
        radioButton_ActUtlType->setObjectName(QStringLiteral("radioButton_ActUtlType"));

        gridLayout2->addWidget(radioButton_ActUtlType, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout2, 0, 0, 1, 3);

        BTN_ClosePLC = new QPushButton(groupBox1);
        BTN_ClosePLC->setObjectName(QStringLiteral("BTN_ClosePLC"));

        gridLayout->addWidget(BTN_ClosePLC, 2, 2, 1, 1);


        gridLayout_3->addWidget(groupBox1, 0, 0, 1, 1);

        groupBox2 = new QGroupBox(Widget);
        groupBox2->setObjectName(QStringLiteral("groupBox2"));
        groupBox2->setMinimumSize(QSize(0, 300));
        gridLayout_4 = new QGridLayout(groupBox2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout3 = new QGridLayout();
        gridLayout3->setSpacing(6);
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        BTN_ConnectPLC = new QPushButton(groupBox2);
        BTN_ConnectPLC->setObjectName(QStringLiteral("BTN_ConnectPLC"));

        gridLayout3->addWidget(BTN_ConnectPLC, 0, 2, 1, 1);

        label3 = new QLabel(groupBox2);
        label3->setObjectName(QStringLiteral("label3"));

        gridLayout3->addWidget(label3, 0, 0, 1, 1);

        lineEdit_IP = new QLineEdit(groupBox2);
        lineEdit_IP->setObjectName(QStringLiteral("lineEdit_IP"));

        gridLayout3->addWidget(lineEdit_IP, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout3, 0, 0, 1, 3);

        lineEdit_DeviceValue_XiMenZi = new QLineEdit(groupBox2);
        lineEdit_DeviceValue_XiMenZi->setObjectName(QStringLiteral("lineEdit_DeviceValue_XiMenZi"));

        gridLayout_4->addWidget(lineEdit_DeviceValue_XiMenZi, 2, 1, 1, 1);

        label4 = new QLabel(groupBox2);
        label4->setObjectName(QStringLiteral("label4"));

        gridLayout_4->addWidget(label4, 1, 0, 1, 1);

        BTN_SetValue_XiMenZi = new QPushButton(groupBox2);
        BTN_SetValue_XiMenZi->setObjectName(QStringLiteral("BTN_SetValue_XiMenZi"));

        gridLayout_4->addWidget(BTN_SetValue_XiMenZi, 2, 2, 1, 1);

        BTN_GetValue_XiMenZi = new QPushButton(groupBox2);
        BTN_GetValue_XiMenZi->setObjectName(QStringLiteral("BTN_GetValue_XiMenZi"));

        gridLayout_4->addWidget(BTN_GetValue_XiMenZi, 1, 2, 1, 1);

        label5 = new QLabel(groupBox2);
        label5->setObjectName(QStringLiteral("label5"));

        gridLayout_4->addWidget(label5, 2, 0, 1, 1);

        lineEdit_DeviceAdress_XiMenZi = new QLineEdit(groupBox2);
        lineEdit_DeviceAdress_XiMenZi->setObjectName(QStringLiteral("lineEdit_DeviceAdress_XiMenZi"));

        gridLayout_4->addWidget(lineEdit_DeviceAdress_XiMenZi, 1, 1, 1, 1);

        BTN_ClosePLC_XiMenZi = new QPushButton(groupBox2);
        BTN_ClosePLC_XiMenZi->setObjectName(QStringLiteral("BTN_ClosePLC_XiMenZi"));

        gridLayout_4->addWidget(BTN_ClosePLC_XiMenZi, 3, 2, 1, 1);


        gridLayout_3->addWidget(groupBox2, 1, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        groupBox1->setTitle(QApplication::translate("Widget", "\344\270\211\350\217\261PLC", Q_NULLPTR));
        BTN_OpenPLC->setText(QApplication::translate("Widget", "\346\211\223\345\274\200PLC", Q_NULLPTR));
        label1->setText(QApplication::translate("Widget", "\350\256\276\345\244\207\345\220\215\347\247\260:", Q_NULLPTR));
        lineEdit_DeviceName->setText(QApplication::translate("Widget", "D1324", Q_NULLPTR));
        BTN_GetValue->setText(QApplication::translate("Widget", "\350\216\267\345\217\226\346\225\260\345\200\274", Q_NULLPTR));
        label2->setText(QApplication::translate("Widget", "\350\256\276\345\244\207\346\225\260\345\200\274:", Q_NULLPTR));
        lineEdit_DeviceValue->setText(QApplication::translate("Widget", "2", Q_NULLPTR));
        BTN_SetValue->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\346\225\260\345\200\274", Q_NULLPTR));
        BTN_GetCPUType->setText(QApplication::translate("Widget", "\350\216\267\345\217\226CPU\347\261\273\345\236\213", Q_NULLPTR));
        radioButton_ActProgType->setText(QApplication::translate("Widget", "ActProgType", Q_NULLPTR));
        radioButton_ActUtlType->setText(QApplication::translate("Widget", "ActUtlType", Q_NULLPTR));
        BTN_ClosePLC->setText(QApplication::translate("Widget", "\345\205\263\351\227\255PLC", Q_NULLPTR));
        groupBox2->setTitle(QApplication::translate("Widget", "\350\245\277\351\227\250\345\255\220PLC", Q_NULLPTR));
        BTN_ConnectPLC->setText(QApplication::translate("Widget", "\350\277\236\346\216\245PLC", Q_NULLPTR));
        label3->setText(QApplication::translate("Widget", "PLC\345\234\260\345\235\200:", Q_NULLPTR));
        lineEdit_IP->setText(QApplication::translate("Widget", "192.168.1.120", Q_NULLPTR));
        lineEdit_DeviceValue_XiMenZi->setText(QApplication::translate("Widget", "2", Q_NULLPTR));
        label4->setText(QApplication::translate("Widget", "\350\256\276\345\244\207\345\234\260\345\235\200:", Q_NULLPTR));
        BTN_SetValue_XiMenZi->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\346\225\260\345\200\274", Q_NULLPTR));
        BTN_GetValue_XiMenZi->setText(QApplication::translate("Widget", "\350\216\267\345\217\226\346\225\260\345\200\274", Q_NULLPTR));
        label5->setText(QApplication::translate("Widget", "\350\256\276\345\244\207\346\225\260\345\200\274:", Q_NULLPTR));
        lineEdit_DeviceAdress_XiMenZi->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        BTN_ClosePLC_XiMenZi->setText(QApplication::translate("Widget", "\345\205\263\351\227\255PLC", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
