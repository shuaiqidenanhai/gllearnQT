#include "shaftparameterwidget.h"
#include "ui_shaftparameterwidget.h"

ShaftParameterWidget::ShaftParameterWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShaftParameterWidget)
{
    ui->setupUi(this);
    connect(ui->okButton, &QPushButton::clicked, this, &ShaftParameterWidget::on_okButton_clicked);
    connect(ui->cancelButton, &QPushButton::clicked, this, &ShaftParameterWidget::on_cancelButton_clicked);
}

ShaftParameterWidget::~ShaftParameterWidget()
{
    delete ui;
}
// QMap<QString, QString> ShaftParameterWidget::getShaftParameter() const
// {
//     QMap<QString, QString> parameters;
//     parameters["param1"] = ui->lineEdit->text();
//     parameters["param2"] = ui->lineEdit_2->text();
//     return parameters;
// }
// void ShaftParameterWidget::setShaftParameter(const QMap<QString, QString> &parameters)
// {
//     if (parameters.contains("param1")) ui->lineEdit->setText(parameters["param1"]);
//     if (parameters.contains("param2")) ui->lineEdit_2->setText(parameters["param2"]);
// }
void ShaftParameterWidget::on_okButton_clicked()
{
    emit accepted();
    close();
}

void ShaftParameterWidget::on_cancelButton_clicked()
{
    emit rejected();
    close();
}
QMap<QString, QString> ShaftParameterWidget::getShaftParameter() const
{

    QMap<QString, QString> parameters;
    parameters["模数"] = ui->lineEdit_15->text() + " (" + ui->comboBox_15->currentText() + ")";
    parameters["压力角"] = ui->lineEdit_16->text() + " (" + ui->comboBox_16->currentText() + ")";
    parameters["主齿轮名称"] = ui->lineEdit_20->text();
    parameters["主齿轮齿数"] = QString::number(ui->spinBox_6->value());
    parameters["主齿轮齿宽"] = ui->lineEdit_14->text() + " (" + ui->comboBox_14->currentText() + ")";
    parameters["主齿轮中心半径"] = ui->lineEdit_13->text() + " (" + ui->comboBox_13->currentText() + ")";
    parameters["副齿轮名称"] = ui->lineEdit_21->text();
    parameters["副齿轮齿数"] = QString::number(ui->spinBox_5->value());
    parameters["副齿轮齿宽"] = ui->lineEdit_17->text() + " (" + ui->comboBox_17->currentText() + ")";
    //parameters["副齿轮中心半径"] = ui->lineEdit_19->text();

    return parameters;


}


void ShaftParameterWidget::setShaftParameter(const QMap<QString, QString> &parameters)
{
    // if (parameters.contains("模数")) ui->lineEdit_15->setText(parameters["模数"]);
    // if (parameters.contains("压力角")) ui->lineEdit_16->setText(parameters["压力角"]);
    // if (parameters.contains("主齿轮齿数")) ui->spinBox_6->setValue(parameters["主齿轮齿数"].toInt());
    // if (parameters.contains("主齿轮齿宽")) ui->lineEdit_14->setText(parameters["主齿轮齿宽"]);
    // if (parameters.contains("主齿轮中心半径")) ui->lineEdit_13->setText(parameters["主齿轮中心半径"]);
    // if (parameters.contains("副齿轮齿数")) ui->spinBox_6->setValue(parameters["副齿轮齿数"].toInt());
    // if (parameters.contains("副齿轮齿宽")) ui->lineEdit_14->setText(parameters["副齿轮齿宽"]);
    //if (parameters.contains("副齿轮中心半径")) ui->lineEdit_13->setText(parameters["副齿轮中心半径"]);

    QRegularExpression re("(\\d*\\.?\\d*) \\((.*)\\)");  // 匹配 "值 (单位)" 格式

    if (parameters.contains("模数")) {
        QString value = parameters["模数"];
        QRegularExpressionMatch match = re.match(value);
        if (match.hasMatch()) {
            ui->lineEdit_15->setText(match.captured(1));  // 设置值
            ui->comboBox_15->setCurrentText(match.captured(2));  // 设置单位
        } else {
            ui->lineEdit_15->setText(value);
        }
    }

    if (parameters.contains("压力角")) {
        QString value = parameters["压力角"];
        QRegularExpressionMatch match = re.match(value);
        if (match.hasMatch()) {
            ui->lineEdit_16->setText(match.captured(1));  // 设置值
            ui->comboBox_16->setCurrentText(match.captured(2));  // 设置单位
        } else {
            ui->lineEdit_16->setText(value);
        }
    }

    if (parameters.contains("主齿轮齿数")) {
        ui->spinBox_6->setValue(parameters["主齿轮齿数"].toInt());
    }

    if (parameters.contains("主齿轮名称")){
        QString value = parameters["主齿轮名称"];
        ui->lineEdit_20->setText(value);
    }
    if (parameters.contains("主齿轮齿宽")) {
        QString value = parameters["主齿轮齿宽"];
        QRegularExpressionMatch match = re.match(value);
        if (match.hasMatch()) {
            ui->lineEdit_14->setText(match.captured(1));  // 设置值
            ui->comboBox_14->setCurrentText(match.captured(2));  // 设置单位
        } else {
            ui->lineEdit_14->setText(value);
        }
    }

    if (parameters.contains("主齿轮中心半径")) {
        QString value = parameters["主齿轮中心半径"];
        QRegularExpressionMatch match = re.match(value);
        if (match.hasMatch()) {
            ui->lineEdit_13->setText(match.captured(1));  // 设置值
            ui->comboBox_13->setCurrentText(match.captured(2));  // 设置单位
        } else {
            ui->lineEdit_13->setText(value);
        }
    }

    if (parameters.contains("副齿轮名称")){
        QString value = parameters["副齿轮名称"];
        ui->lineEdit_21->setText(value);
    }
    if (parameters.contains("副齿轮齿数")) {
        ui->spinBox_5->setValue(parameters["副齿轮齿数"].toInt());
    }

    if (parameters.contains("副齿轮齿宽")) {
        QString value = parameters["副齿轮齿宽"];
        QRegularExpressionMatch match = re.match(value);
        if (match.hasMatch()) {
            ui->lineEdit_17->setText(match.captured(1));  // 设置值
            ui->comboBox_17->setCurrentText(match.captured(2));  // 设置单位
        } else {
            ui->lineEdit_17->setText(value);
        }
    }

}



QString ShaftParameterWidget::getText1() const
{
    // ui->lineEdit_7->setFocus();
    // ui->lineEdit_7->setCursorPosition(0);
    // ui->lineEdit_7->setFocusPolicy(Qt::StrongFocus);
    return ui->lineEdit_15->text();
}
int8_t ShaftParameterWidget::getText2() const
{
    return ui->spinBox_6->value();
}
QString ShaftParameterWidget::getText3() const
{
    return ui->lineEdit_16->text();
}
QString ShaftParameterWidget::getText4() const
{
    return ui->lineEdit_14->text();;
}
QString ShaftParameterWidget::getText5() const
{
    return ui->lineEdit_13->text();
}
int8_t ShaftParameterWidget::getText6() const
{
    return ui->spinBox_5->value();
}
QString ShaftParameterWidget::getText7() const
{
    return ui->lineEdit_17->text();;
}
QString ShaftParameterWidget::getText8() const
{
    return ui->comboBox_15->currentText();
}
QString ShaftParameterWidget::getText9() const
{
    return ui->comboBox_16->currentText();
}
QString ShaftParameterWidget::getText10() const
{
    return ui->comboBox_14->currentText();
}
QString ShaftParameterWidget::getText11() const
{
    return ui->comboBox_13->currentText();
}
QString ShaftParameterWidget::getText12() const
{
    return ui->comboBox_17->currentText();
}



QString ShaftParameterWidget::getHostGearName() const
{
    return ui->lineEdit_20->text();
}
QString ShaftParameterWidget::getGuestGearName() const
{
    return ui->lineEdit_21->text();
}

// QString ShaftParameterWidget::getText8() const
// {
//     return ui->lineEdit_19->text();
// }

