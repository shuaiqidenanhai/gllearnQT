#ifndef GEARGROUP_H
#define GEARGROUP_H

#include <QWidget>

namespace Ui {
class GearGroup;
}

class GearGroup : public QWidget
{
    Q_OBJECT

public:
    explicit GearGroup(QWidget *parent = nullptr);
    ~GearGroup();

private slots:
    void on_confirmButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::GearGroup *ui;
};

#endif // GEARGROUP_H
