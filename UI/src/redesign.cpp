#include "redesign.h"
#include "ui_redesign.h"

ReDesign::ReDesign(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ReDesign)
{
    ui->setupUi(this);
}

ReDesign::~ReDesign()
{
    delete ui;
}

void ReDesign::on_confirmButton_clicked()
{
    this->close();
}

void ReDesign::on_cancelButton_clicked()
{
    this->close();
}
