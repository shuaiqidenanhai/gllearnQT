#include "newpage.h"
#include "ui_newpage.h"
#include "nestedmainwindow.h"
#include <QDockWidget>


NewPage::NewPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NewPage)
{
    ui->setupUi(this);
}

NewPage::~NewPage()
{
    delete ui;
}

void NewPage::on_confirmButton_clicked()
{

    //ui->lineEdit_1->text();
    emit accepted();
    emit accepted_1();
    emit accepted_name();
    this->close();

}

void NewPage::on_cancelButton_clicked()
{
    this->close();
}

QString NewPage::getLabelText() const
{
    return ui->lineEdit_1->text();
}
