#include "addcomponent.h"
#include "ui_addcomponent.h"

addComponent::addComponent(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addComponent)
{
    ui->setupUi(this);
}

addComponent::~addComponent()
{
    delete ui;
}
void addComponent::setProperties(const QMap<QString, QString> &properties)
{
    // QString propertyText;
    // for (auto it = properties.begin(); it != properties.end(); ++it) {
    //     propertyText += it.key() + ": " + it.value() + "\n";
    // }

    // QString propertyText;
    // for (auto it = properties.begin(); it != properties.end(); ++it) {
    //     QString keyWithUnit = it.key();
    //     QString valueWithUnit = it.value();
    //     widget1 = new GearParameterWidget();

    //     // 特殊处理齿数，不添加单位
    //     if (it.key() == "齿数") {
    //         propertyText += keyWithUnit + ": " + valueWithUnit + "\n";
    //     } else {
    //         // 添加单位到键-值对
    //         if (it.key() == "模数") {
    //             keyWithUnit += " (" + widget1->getText6() + ")";
    //         } else if (it.key() == "压力角") {
    //             keyWithUnit += " (" + widget1->getText7() + ")";
    //         } else if (it.key() == "齿宽") {
    //             keyWithUnit += " (" + widget1->getText8() + ")";
    //         } else {
    //             keyWithUnit += " (" + widget1->getText9() + ")";
    //         }

    //         propertyText += keyWithUnit + ": " + valueWithUnit + "\n";
    //     }
    // }


    QString propertyText;
    for (auto it = properties.begin(); it != properties.end(); ++it) {
        QString keyWithUnit = it.key();
        QString valueWithUnit = it.value();

        // 特殊处理齿数，不添加单位
        if (it.key() == "齿数" || it.key() == "主齿轮齿数" || it.key() == "副齿轮齿数" || it.key() == "轴名称"|| it.key() == "描述"|| it.key() == "主齿轮名称"||it.key() == "副齿轮名称" || it.key() == "齿轮名称") {
            propertyText += keyWithUnit + ": " + valueWithUnit + "\n";
        } else {
            propertyText += keyWithUnit + ": " + valueWithUnit + "\n";
        }
    }


    ui->propertyTextEdit->setPlainText(propertyText); // Assume you have a QTextEdit in your UI to display properties
    QMetaObject::invokeMethod(ui->propertyTextEdit, "update", Qt::QueuedConnection);


}


