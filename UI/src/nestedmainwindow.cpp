#include "nestedmainwindow.h"
#include "ui_nestedmainwindow.h"

#include <QMenu>
#include <QAction>
#include "gear.h"
#include "geargroup.h"

NestedMainWindow::NestedMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NestedMainWindow)
{
    ui->setupUi(this);
    connect(ui->gearButton, &QPushButton::customContextMenuRequested, this, &NestedMainWindow::showSlot);


    //添加右键菜单策略，以相应customContextMenuPolicy()信号
    ui->gearButton->setContextMenuPolicy(Qt::CustomContextMenu);

    //connect(ui->gearGroupButton, &QPushButton::customContextMenuRequested, this, &NestedMainWindow::on_gearGroupButton_customContextMenuRequested);
    ui->gearGroupButton->setContextMenuPolicy(Qt::CustomContextMenu);
}

NestedMainWindow::~NestedMainWindow()
{
    delete ui;
}

void NestedMainWindow::showSlot(const QPoint &pos)
{
    QMenu contextMenu(tr("右键菜单"), this);

    QAction actionOne(tr("编辑"), this);
    connect(&actionOne, &QAction::triggered, this, &NestedMainWindow::actionOneTriggered);

    QAction actionTwo(tr("导出"), this);
    connect(&actionTwo, &QAction::triggered, this, &NestedMainWindow::actionTwoTriggered);

    contextMenu.addAction(&actionOne);
    contextMenu.addAction(&actionTwo);
    //使得菜单位置在按钮附近
    contextMenu.exec(QCursor::pos());
}
void NestedMainWindow::actionOneTriggered()
{
    Gear *gear = new Gear();
    gear->setWindowTitle("齿轮参数设置");
    gear->show();
}

void NestedMainWindow::actionTwoTriggered()
{
    // 处理daochu的操作
}

void NestedMainWindow::on_gearGroupButton_customContextMenuRequested(const QPoint &pos)
{
    QMenu contextMenu(tr("右键菜单"), this);

    QAction actionThree(tr("编辑"), this);
    connect(&actionThree, &QAction::triggered, this, &NestedMainWindow::actionThreeTriggered);

    QAction actionFour(tr("导出"), this);
    connect(&actionFour, &QAction::triggered, this, &NestedMainWindow::actionFourTriggered);

    contextMenu.addAction(&actionThree);
    contextMenu.addAction(&actionFour);

    contextMenu.exec(QCursor::pos());
}
void NestedMainWindow::actionThreeTriggered()
{
    GearGroup *gearGroup = new GearGroup();
    gearGroup->show();

}

void NestedMainWindow::actionFourTriggered()
{
    // 处理选项二的操作
}

void NestedMainWindow::on_gearButton_clicked()
{
    Gear *gear = new Gear();
    gear->show();
}


void NestedMainWindow::on_gearGroupButton_clicked()
{
    GearGroup *gearGroup = new GearGroup();
    gearGroup->show();
}

