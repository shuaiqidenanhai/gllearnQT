#include "gearparameterwidget.h"
#include "ui_gearparameterwidget.h"

GearParameterWidget::GearParameterWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GearParameterWidget)
{
    ui->setupUi(this);

}

GearParameterWidget::~GearParameterWidget()
{
    delete ui;
}
QMap<QString, QString> GearParameterWidget::getGearParameter() const
{

    // QMap<QString, QString> parameters;
    // parameters["模数"] = ui->lineEdit_7->text();
    // parameters["压力角"] = ui->lineEdit_5->text();
    // parameters["齿数"] = QString::number(ui->spinBox_2->value());
    // parameters["齿宽"] = ui->lineEdit_8->text();
    // parameters["中心半径"] = ui->lineEdit_6->text();
    // return parameters;
    QMap<QString, QString> parameters;
    parameters["齿轮名称"] = ui->lineEdit->text();
    parameters["模数"] = ui->lineEdit_7->text() + " (" + ui->comboBox_7->currentText() + ")";
    parameters["压力角"] = ui->lineEdit_5->text() + " (" + ui->comboBox_5->currentText() + ")";
    parameters["主齿轮齿数"] = QString::number(ui->spinBox_2->value());
    parameters["主齿轮齿宽"] = ui->lineEdit_8->text() + " (" + ui->comboBox_8->currentText() + ")";
    parameters["主齿轮中心半径"] = ui->lineEdit_6->text() + " (" + ui->comboBox_6->currentText() + ")";
    return parameters;
}


void GearParameterWidget::setGearParameter(const QMap<QString, QString> &parameters)
{
    // if (parameters.contains("模数")) ui->lineEdit_7->setText(parameters["模数"]);
    // if (parameters.contains("压力角")) ui->lineEdit_5->setText(parameters["压力角"]);
    // if (parameters.contains("齿数")) ui->spinBox_2->setValue(parameters["齿数"].toInt());
    // if (parameters.contains("齿宽")) ui->lineEdit_8->setText(parameters["齿宽"]);
    // if (parameters.contains("中心半径")) ui->lineEdit_6->setText(parameters["中心半径"]);
    QRegularExpression re("(\\d*\\.?\\d*) \\((.*)\\)");  // 匹配 "值 (单位)" 格式

    if (parameters.contains("齿轮名称")){
        QString value = parameters["齿轮名称"];
        ui->lineEdit->setText(value);
    }

    if (parameters.contains("模数")) {
        QString value = parameters["模数"];
        QRegularExpressionMatch match = re.match(value);
        if (match.hasMatch()) {
            ui->lineEdit_7->setText(match.captured(1));  // 设置值
            ui->comboBox_7->setCurrentText(match.captured(2));  // 设置单位
        } else {
            ui->lineEdit_7->setText(value);
        }
    }

    if (parameters.contains("压力角")) {
        QString value = parameters["压力角"];
        QRegularExpressionMatch match = re.match(value);
        if (match.hasMatch()) {
            ui->lineEdit_5->setText(match.captured(1));  // 设置值
            ui->comboBox_5->setCurrentText(match.captured(2));  // 设置单位
        } else {
            ui->lineEdit_5->setText(value);
        }
    }

    if (parameters.contains("主齿轮齿数")) {
        ui->spinBox_2->setValue(parameters["主齿轮齿数"].toInt());
    }

    if (parameters.contains("主齿轮齿宽")) {
        QString value = parameters["主齿轮齿宽"];
        QRegularExpressionMatch match = re.match(value);
        if (match.hasMatch()) {
            ui->lineEdit_8->setText(match.captured(1));  // 设置值
            ui->comboBox_8->setCurrentText(match.captured(2));  // 设置单位
        } else {
            ui->lineEdit_8->setText(value);
        }
    }

    if (parameters.contains("主齿轮中心半径")) {
        QString value = parameters["主齿轮中心半径"];
        QRegularExpressionMatch match = re.match(value);
        if (match.hasMatch()) {
            ui->lineEdit_6->setText(match.captured(1));  // 设置值
            ui->comboBox_6->setCurrentText(match.captured(2));  // 设置单位
        } else {
            ui->lineEdit_6->setText(value);
        }
    }
}


void GearParameterWidget::on_okButton_clicked()
{
    emit accepted();
    close();
}

void GearParameterWidget::on_cancelButton_clicked()
{
    emit rejected();
    close();
}
QString GearParameterWidget::getText1() const
{
    // ui->lineEdit_7->setFocus();
    // ui->lineEdit_7->setCursorPosition(0);
    // ui->lineEdit_7->setFocusPolicy(Qt::StrongFocus);
    return ui->lineEdit_7->text();
}
int8_t GearParameterWidget::getText2() const
{
    return ui->spinBox_2->value();
}
QString GearParameterWidget::getText3() const
{
    return ui->lineEdit_5->text();
}
QString GearParameterWidget::getText4() const
{
    return ui->lineEdit_8->text();;
}
QString GearParameterWidget::getText5() const
{
    return ui->lineEdit_6->text();
}


QString GearParameterWidget::getText6() const
{
    return ui->comboBox_7->currentText();
}
QString GearParameterWidget::getText7() const
{
    return ui->comboBox_5->currentText();
}
QString GearParameterWidget::getText8() const
{
    return ui->comboBox_8->currentText();
}
QString GearParameterWidget::getText9() const
{
    return ui->comboBox_6->currentText();
}

QString GearParameterWidget::getGearName() const
{
    return ui->lineEdit->text();

}
