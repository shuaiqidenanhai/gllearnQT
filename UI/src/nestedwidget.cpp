#include "nestedwidget.h"
#include "ui_nestedwidget.h"



#include "gear.h"
#include "geargroup.h"
#include "newpage.h"
#include <QVBoxLayout>
#include <QHBoxLayout>

NestedWidget::NestedWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NestedWidget)
{
    ui->setupUi(this);
    connect(ui->gearButton, &QPushButton::customContextMenuRequested, this, &NestedWidget::showSlot);

    //添加右键菜单策略，以相应customContextMenuPolicy()信号
    ui->gearButton->setContextMenuPolicy(Qt::CustomContextMenu);
    ui->gearGroupButton->setContextMenuPolicy(Qt::CustomContextMenu);

    // 设置按钮的右键菜单策略

    //connect(ui->rightClickButton, &QPushButton::customContextMenuRequested, this, &NestedWidget::showRight);
    //ui->rightClickButton->setContextMenuPolicy(Qt::CustomContextMenu);

    model = new QStandardItemModel;
    rootItem = model->invisibleRootItem();

    //创建根节点
    newPage = new NewPage();
    //connect(newPage, &NewPage::accepted_name, [=]() {});
    QString projectName = newPage->getLabelText();
    QStandardItem *rootNode = new QStandardItem(projectName);
    rootItem->appendRow(rootNode);
    newPage->close();

    // 假设你已经有一个布局，比如 QVBoxLayout
    QVBoxLayout *layout = new QVBoxLayout(this);

    QHBoxLayout *layout1 = new QHBoxLayout();
    // 添加按钮
    layout1->addWidget(ui->gearButton);
    layout1->addWidget(ui->gearGroupButton);
    layout1->addWidget(ui->shaftButton);
    layout1->addWidget(ui->driveShaftButton);
    layout->addLayout(layout1);
    // 创建并添加 QTreeView
    treeView = new QTreeView();
    treeView->setObjectName("treeView");
    treeView->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    connect(treeView, &QTreeView::clicked, this, &NestedWidget::on_treeView_clicked11);
    layout->addWidget(treeView);

    // 设置布局
    this->setLayout(layout);
    //设置模型
    //treeView = new QTreeView(this);
    //QVBoxLayout *layout = new QVBoxLayout(this);
    //layout->addWidget(treeView);
    //setLayout(layout);
    treeView->setModel(model);
    treeView->expandAll();
    // ui->treeView->setModel(model);
    // ui->treeView->expandAll();

    //创建右键菜单
    // menu = new QMenu(this);
    // QAction *gearAction = new QAction("齿轮", this);
    // QAction *shaftAction = new QAction("轴", this);
    // QAction *bearingAction = new QAction("轴承", this);

    // menu->addAction(gearAction);
    // menu->addAction(shaftAction);
    // menu->addAction(bearingAction);

    // //menu->exec(QCursor::pos());
    // connect(gearAction, &QAction::triggered, this, &NestedWidget::addGearNode);
    // connect(shaftAction, &QAction::triggered, this, &NestedWidget::addShaftNode);
    // connect(bearingAction, &QAction::triggered, this, &NestedWidget::addBearingNode);



}

NestedWidget::~NestedWidget()
{
    delete ui;
}
void NestedWidget::addGearNode()
{
    //emit addGearNodeSignal();
    // GearParameterWidget *widget1 = new GearParameterWidget();
    // widget1->setWindowTitle("齿轮参数设置");

    // connect(widget1, &GearParameterWidget::accepted, [=]() {
    //     QStandardItem *newItem = new QStandardItem("齿轮");
    //     QStandardItem *rootNode = model->item(0, 0);
    //     rootNode->appendRow(newItem);

    //     //newItem->setData(widget1->getGearParameter(), Qt::UserRole + 1);
    //     itemParameters[newItem] = widget1->getGearParameter();
    // });

    // widget1->show();
}

void NestedWidget::addShaftNode()
{
    //emit addShaftNodeSignal();
    // qDebug() << "gbydashader";
    // ShaftParameterWidget *widget2 = new ShaftParameterWidget();
    // widget2->setWindowTitle("轴参数设置");

    // connect(widget2, &ShaftParameterWidget::accepted, [=]() {
    //     static bool added = false;//防止多次添加节点
    //     if(!added){
    //         qDebug() << "Shaft parameter accepted";


    //         QStandardItem *newItem = new QStandardItem("轴");
    //         QStandardItem *rootNode = model->item(0, 0);
    //         rootNode->appendRow(newItem);

    //         //newItem->setData(widget2->getShaftParameter(), Qt::UserRole + 1);
    //         itemParameters[newItem] = widget2->getShaftParameter();
    //         // 打印 itemParameters 的内容
    //         qDebug() << "itemParameters: " << itemParameters;
    //         added = true;
    //     }
    // });
    // widget2->show();

}

void NestedWidget::addBearingNode()
{
    //emit addBearingNodeSignal();
    // BearingParameterWidget *widget3 = new BearingParameterWidget();
    // widget3->setWindowTitle("轴承参数设置");

    // connect(widget3, &BearingParameterWidget::accepted, [=]() {
    //     QStandardItem *newItem = new QStandardItem("轴承");
    //     QStandardItem *rootNode = model->item(0, 0);
    //     rootNode->appendRow(newItem);

    //     //newItem->setData(widget3->getBearingParameter(), Qt::UserRole + 1);
    //     itemParameters[newItem] = widget3->getBearingParameter();
    // });

    // widget3->show();
}

void NestedWidget::on_treeView_clicked11(const QModelIndex &index)
{
    emit treeviewClickedSignal(index);
    // QStandardItem *item = model->itemFromIndex(index);
    // if (!item)
    //     return;
    // QString nodeName = item->text();
    // QString parameter = itemParameters[item];

    // //itemParameters[item] = parameter;
    // //QString parameter = item->data(Qt::UserRole + 1).toString();
    // qDebug() << "Node clicked: " << nodeName << ", Parameter: " << parameter;
    // if (nodeName == "齿轮")
    // {
    //     GearParameterWidget *widget = new GearParameterWidget();
    //     widget->setWindowTitle("齿轮参数设置");
    //     widget->setGearParameter(parameter);
    //     widget->show();
    // } else if (nodeName == "轴")
    // {
    //     ShaftParameterWidget *widget = new ShaftParameterWidget();
    //     widget->setWindowTitle("轴参数设置");
    //     widget->setShaftParameter(parameter);
    //     widget->show();
    // } else if (nodeName == "轴承")
    // {
    //     BearingParameterWidget *widget = new BearingParameterWidget();
    //     widget->setWindowTitle("轴承参数设置");
    //     widget->setBearingParameter(parameter);
    //     widget->show();
    // }

}

void NestedWidget::showRight(const QPoint &pos)
{
    //menu->exec(ui->rightClickButton->mapToGlobal(pos));
    //menu->exec(QCursor::pos());
    QMenu contextMenu(tr("menu"), this);
    QAction actionOne(tr("齿轮"), this);
    connect(&actionOne, &QAction::triggered, this, &NestedWidget::addGearNode);

    QAction actionTwo(tr("齿轮组"), this);
    connect(&actionTwo, &QAction::triggered, this, &NestedWidget::addShaftNode);

    QAction actionThree(tr("轴"), this);
    connect(&actionThree, &QAction::triggered, this, &NestedWidget::addBearingNode);

    contextMenu.addAction(&actionOne);
    contextMenu.addAction(&actionTwo);
    contextMenu.addAction(&actionThree);

    contextMenu.exec(QCursor::pos());
}



void NestedWidget::showSlot(const QPoint &pos)
{
    QMenu contextMenu(tr("右键菜单"), this);

    QAction actionOne(tr("编辑"), this);
    connect(&actionOne, &QAction::triggered, this, &NestedWidget::actionOneTriggered);

    QAction actionTwo(tr("导出"), this);
    connect(&actionTwo, &QAction::triggered, this, &NestedWidget::actionTwoTriggered);

    contextMenu.addAction(&actionOne);
    contextMenu.addAction(&actionTwo);
    //使得菜单位置在按钮附近
    contextMenu.exec(QCursor::pos());
}
void NestedWidget::actionOneTriggered()
{
    Gear *gear = new Gear();
    gear->setWindowTitle("齿轮参数");
    gear->move(650,250);
    gear->show();
}

void NestedWidget::actionTwoTriggered()
{
    // 处理选项二的操作
}

void NestedWidget::on_gearGroupButton_customContextMenuRequested(const QPoint &pos)
{
    QMenu contextMenu(tr("右键菜单"), this);

    QAction actionThree(tr("编辑"), this);
    connect(&actionThree, &QAction::triggered, this, &NestedWidget::actionThreeTriggered);

    QAction actionFour(tr("导出"), this);
    connect(&actionFour, &QAction::triggered, this, &NestedWidget::actionFourTriggered);

    contextMenu.addAction(&actionThree);
    contextMenu.addAction(&actionFour);

    contextMenu.exec(QCursor::pos());
}
void NestedWidget::actionThreeTriggered()
{
    GearGroup *gearGroup = new GearGroup();
    gearGroup->move(650,250);
    gearGroup->show();

}

void NestedWidget::actionFourTriggered()
{
    // 处理选项二的操作
}

void NestedWidget::on_gearButton_clicked()
{
    emit addGearNodeSignal();

}

void NestedWidget::openA()
{

}

void NestedWidget::on_gearGroupButton_clicked()
{
    emit addShaftNodeSignal();

}

// void NestedWidget::setLabelText(const QString &l)
// {
//     ui->label->setText(l);
// }


void NestedWidget::on_shaftButton_clicked()
{
    emit addBearingNodeSignal();
}


void NestedWidget::on_driveShaftButton_clicked()
{
    //emit addDriveShaftNodeSignal();
}

