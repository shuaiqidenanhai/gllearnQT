#include "shaft.h"
#include "ui_shaft.h"

shaft::shaft(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::shaft)
{
    ui->setupUi(this);
}

shaft::~shaft()
{
    delete ui;
}

void shaft::on_confirmButton_clicked()
{
    this->close();
}

void shaft::on_cancelButton_clicked()
{
    this->close();
}
