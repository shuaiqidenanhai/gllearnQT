#ifndef NESTEDWIDGET_H
#define NESTEDWIDGET_H

#include <QWidget>
#include <QDockWidget>
#include <newpage.h>
#include <QDebug>
#include <gear.h>
#include <QStandardItemModel>
#include <QMenu>
#include <QMessageBox>
#include <QAction>
#include <QDebug>
#include "gearparameterwidget.h"
#include "shaftparameterwidget.h"
#include "bearingparameterwidget.h"
#include <QTreeView>


namespace Ui {
class NestedWidget;
}

class NestedWidget : public QWidget
{
    Q_OBJECT

public:
    explicit NestedWidget(QWidget *parent = nullptr);
    ~NestedWidget();
    void on_getTextButton_clicked();
    void setLabelText(const QString &l);

    QStandardItemModel* getModel() const {return model;}
    QTreeView* getTreeView() const {
        return treeView;  // 假设你的 treeView 是一个类成员
    }

private slots:
    void showSlot(const QPoint &pos);
    void actionOneTriggered();
    void actionTwoTriggered();

    void on_gearGroupButton_customContextMenuRequested(const QPoint &pos);
    void actionThreeTriggered();
    void actionFourTriggered();

    void on_gearButton_clicked();

    void on_gearGroupButton_clicked();
    void openA();

    void showRight(const QPoint &pos);
    void addGearNode();
    void addShaftNode();
    void addBearingNode();
    //void addDriveShaftNodeSignal();
    void on_treeView_clicked11(const QModelIndex &index);

    void on_shaftButton_clicked();

    void on_driveShaftButton_clicked();

signals:
    void showGear();
    void addGearNodeSignal();
    void addShaftNodeSignal();
    void addBearingNodeSignal();
    void treeviewClickedSignal(const QModelIndex &index);
private:
    Ui::NestedWidget *ui;
    NewPage *newPage;
    Gear *gear;
    //MultipleFloats floats;
    QStandardItemModel *model;
    QStandardItem *rootItem;


    // QAction *gearAction;
    // QAction *shaftAction;
    // QAction *bearingAction;

    QMap<QStandardItem*, QString> itemParameters;
    QTreeView *treeView;


};

#endif // NESTEDWIDGET_H
