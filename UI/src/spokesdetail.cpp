#include "spokesdetail.h"
#include "ui_spokesdetail.h"

SpokesDetail::SpokesDetail(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SpokesDetail)
{
    ui->setupUi(this);
}

SpokesDetail::~SpokesDetail()
{
    delete ui;
}

void SpokesDetail::on_confirmButton_clicked()
{
    this->close();
}

void SpokesDetail::on_cancelButton_clicked()
{
    this->close();
}
