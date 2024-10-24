#ifndef NESTEDMAINWINDOW_H
#define NESTEDMAINWINDOW_H

#include <QMainWindow>
#include <gear.h>
#include <geargroup.h>


namespace Ui {
class NestedMainWindow;
}

class NestedMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit NestedMainWindow(QWidget *parent = nullptr);
    ~NestedMainWindow();




private slots:
    void showSlot(const QPoint &pos);
    void actionOneTriggered();
    void actionTwoTriggered();

    void on_gearGroupButton_customContextMenuRequested(const QPoint &pos);
    void actionThreeTriggered();
    void actionFourTriggered();

    void on_gearButton_clicked();

    void on_gearGroupButton_clicked();


private:
    Ui::NestedMainWindow *ui;


};

#endif // NESTEDMAINWINDOW_H
