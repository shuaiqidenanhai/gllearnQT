#include "bearingparameterwidget.h"
#include "ui_bearingparameterwidget.h"

BearingParameterWidget::BearingParameterWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BearingParameterWidget)
{
    ui->setupUi(this);
}

BearingParameterWidget::~BearingParameterWidget()
{
    delete ui;
}
QMap<QString, QString> BearingParameterWidget::getBearingParameter() const
{
    QMap<QString, QString> parameters;
    parameters["轴名称"] = ui->lineEdit->text();
    parameters["长度"] = ui->lineEdit_2->text() + " (" + ui->comboBox->currentText() + ")";
    parameters["公称外径"] = ui->lineEdit_3->text() + " (" + ui->label_6->text() + ")";
    parameters["公称孔径"] = ui->lineEdit_4->text() + " (" + ui->label_7->text() + ")";
    parameters["描述"] = ui->textEdit->toPlainText();
    return parameters;

}
void BearingParameterWidget::setBearingParameter(const QMap<QString, QString> &parameters)
{
    QRegularExpression re("(\\d*\\.?\\d*) \\((.*)\\)");  // 匹配 "值 (单位)" 格式


    if (parameters.contains("轴名称")){
        QString value = parameters["轴名称"];
        ui->lineEdit->setText(value);
    }

    if (parameters.contains("长度")) {
        QString value = parameters["长度"];
        QRegularExpressionMatch match = re.match(value);
        if (match.hasMatch()) {
            ui->lineEdit_2->setText(match.captured(1));  // 设置值
            ui->comboBox->setCurrentText(match.captured(2));  // 设置单位
        } else {
            ui->lineEdit_2->setText(value);
        }
    }
    if (parameters.contains("公称外径")) {
        QString value = parameters["公称外径"];
        QRegularExpressionMatch match = re.match(value);
        if (match.hasMatch()) {
            ui->lineEdit_3->setText(match.captured(1));  // 设置值
            ui->label_6->setText(match.captured(2));  // 设置单位
        } else {
            ui->lineEdit_3->setText(value);
        }
    }
    if (parameters.contains("公称孔径")) {
        QString value = parameters["公称孔径"];
        QRegularExpressionMatch match = re.match(value);
        if (match.hasMatch()) {
            ui->lineEdit_4->setText(match.captured(1));  // 设置值
            ui->label_7->setText(match.captured(2));  // 设置单位
        } else {
            ui->lineEdit_4->setText(value);
        }
    }
    if (parameters.contains("描述")){
        QString value = parameters["描述"];
        ui->textEdit->setText(value);
    }
}


void BearingParameterWidget::on_cancelButton_clicked()
{
    emit rejected();
    close();
}

void BearingParameterWidget::on_confirmButton_clicked()
{
    emit accepted();
    close();
}

QString BearingParameterWidget::getShaftName() const
{
    return ui->lineEdit->text();
}
