#include "geargroup.h"
#include "ui_geargroup.h"

#include "drawNoraml.h"

GearGroup::GearGroup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GearGroup)
{
    ui->setupUi(this);


}

GearGroup::~GearGroup()
{
    delete ui;
}

void GearGroup::on_confirmButton_clicked()
{
    QString text_11 = ui->lineEdit_11->text();
    bool ok11;
    float m = text_11.toFloat(&ok11);

    int N = ui->spinBox_3->value();

    QString text_7 = ui->lineEdit_7->text();
    bool ok7;
    float Angle = text_7.toFloat(&ok7);

    QString text_12 = ui->lineEdit_12->text();
    bool ok12;
    float width = text_12.toFloat(&ok12);


    QString text_8 = ui->lineEdit_8->text();
    bool ok8;
    float Cr = text_8.toFloat(&ok8);

    int sN = ui->spinBox_4->value();

    // QString text_5 = ui->lineEdit_6->text();
    // bool ok6;
    // float width = text_3.toFloat(&ok3);


    QString text_9 = ui->lineEdit_9->text();
    bool ok9;
    float sCr = text_9.toFloat(&ok9);
    drawNoraml *DrawNormal = new drawNoraml(m,N,Angle,width,Cr,sN,sCr);
    // drawNormal w1;
    //w1.show();
    DrawNormal->showGear();

    this->close();
    // QCoreApplication::exit(); // 终止 Qt 事件循环
}


void GearGroup::on_pushButton_2_clicked()
{
    this->close();
}

