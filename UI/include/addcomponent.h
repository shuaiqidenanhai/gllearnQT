#ifndef ADDCOMPONENT_H
#define ADDCOMPONENT_H

#include <QWidget>
#include <QMap>
#include <QString>
#include <gearparameterwidget.h>

namespace Ui {
class addComponent;
}

class addComponent : public QWidget
{
    Q_OBJECT

public:
    explicit addComponent(QWidget *parent = nullptr);
    ~addComponent();
    void setProperties(const QMap<QString, QString> &properties);

private:
    Ui::addComponent *ui;
    GearParameterWidget *widget1;
};

#endif // ADDCOMPONENT_H
