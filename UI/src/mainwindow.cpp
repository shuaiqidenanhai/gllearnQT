#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include "gainian.h"
#include "newpage.h"
#include "one.h"
#include "dialog.h"
#include "nestedmainwindow.h"
#include "qdockwidget.h"
#include "nestedwidget.h"
#include "gear.h"
#include "one.h"
#include "two.h"
#include "three.h"
#include "four.h"
#include "five.h"
#include "six.h"
#include "seven.h"
#include "eight.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);

   // newPage = new NewPage(this);
   //ui->innerWidget->setMinimumSize(200,100);
    AddComponent = new addComponent();
    //AddComponent->setWindowTitle("属性");

    connect(ui->newAction, &QAction::triggered, this, &MainWindow::newActionSlot);  //不能转到槽函数 通过connect连接
    connect(ui->openAction, &QAction::triggered, this, &MainWindow::openActionSlot);
    connect(ui->saveAction, &QAction::triggered, this, &MainWindow::saveActionSlot);

    connect(ui->addAction, &QAction::triggered, this, &MainWindow::addActionSlot);
    connect(ui->detailedAction, &QAction::triggered, this, &MainWindow::detailedActionSlot);

    nestedWidget = new NestedWidget();
    //connect(nestedWidget, &NestedWidget::showGear, this, &MainWindow::addDrawNormal);

    connect(nestedWidget, &NestedWidget::addGearNodeSignal, this, &MainWindow::addGearNode1);
    connect(nestedWidget, &NestedWidget::addBearingNodeSignal, this, &MainWindow::addBearingNode1);
    connect(nestedWidget, &NestedWidget::addShaftNodeSignal, this, &MainWindow::addShaftNode1);
    connect(nestedWidget, SIGNAL(treeviewClickedSignal(QModelIndex)), this, SLOT(on_treeView_clicked1(QModelIndex)));
    showMaximized();

}

MainWindow::~MainWindow()
{
    delete ui;
    //delete newPage;
    //delete nestedWidget;
}

void MainWindow::addGearNode1()
{

    GearParameterWidget *widget1 = new GearParameterWidget();
    widget1->setWindowTitle("齿轮参数设置");

    //widget1->show();
    connect(widget1, &GearParameterWidget::accepted, [=]() {
        QString gearName = widget1->getGearName();
        qDebug() << "Shaft name: " << gearName;
        QStandardItem *newItem = new QStandardItem(gearName);
        //QStandardItem *newItem = new QStandardItem("齿轮");

        QIcon visibleIcon2(":/images/Resources/eye.jpg");  // 显示状态的小眼睛
        newItem->setIcon(visibleIcon2);

        newItem->setData("gear", Qt::UserRole + 1);

        QStandardItem *rootNode = nestedWidget->getModel()->item(0, 0);
        rootNode->appendRow(newItem);

        itemParameters[newItem] = widget1->getGearParameter();

        qDebug() << "itemParameters1" << itemParameters;

        QString text_1 = widget1->getText1();
        qDebug() << "text_1" << widget1->getText1();
        bool ok1;

        floats.m = text_1.toFloat(&ok1);

        floats.N = widget1->getText2();
        qDebug() << "N" << widget1->getText2();

        QString text_2 = widget1->getText3();
        bool ok2;
        floats.Angle = text_2.toFloat(&ok2);
        qDebug() << "text_2" << widget1->getText3();
        QString text_3 = widget1->getText4();
        bool ok3;
        floats.width = text_3.toFloat(&ok3);
        qDebug() << "text_3" << widget1->getText4();

        QString text_4 = widget1->getText5();
        bool ok4;
        floats.Cr = text_4.toFloat(&ok4);
        qDebug() << "text_4" << floats.Cr;
        widget1->close();

        // 假设 AddComponent 和 widget1 是已经定义的对象
        //AddComponent->setProperties(widget1->getGearParameter());

        // 使用 QTimer 设置延迟 1 秒后执行的操作
        drawNoraml *DrawNoraml = new drawNoraml(floats.m,floats.N,floats.Angle,floats.width,floats.Cr,0,0);
        QTimer::singleShot(5, [this, DrawNoraml]() {
            RenderThread* renderThread = new RenderThread(DrawNoraml);
            connect(renderThread, &QThread::finished, renderThread, &QObject::deleteLater);
            connect(renderThread, &QThread::finished, DrawNoraml, &QObject::deleteLater);
            renderThread->start();
        });

        // GLFWwindow *glfwContainer = DrawNoraml->showGear();

    });

    replaceAddComponentWidget(widget1);
    //widget1->show();
    //widget1->move(this->geometry().center() - widget1->rect().center());

}
void MainWindow::addBearingNode1()
{

    BearingParameterWidget *widget3 = new BearingParameterWidget();
    widget3->setWindowTitle("轴参数设置");

    connect(widget3, &BearingParameterWidget::accepted, [=]() {
        qDebug() << "Accepted signal received!";
        QString shaftName = widget3->getShaftName();
        qDebug() << "Shaft name: " << shaftName;
        QStandardItem *newItem = new QStandardItem(shaftName);

        //QStandardItem *newItem = new QStandardItem("轴");

        QIcon visibleIcon(":/images/Resources/eye.jpg");  // 显示状态的小眼睛
        newItem->setIcon(visibleIcon);

        newItem->setData("shaft", Qt::UserRole + 1);

        QStandardItem *rootNode = nestedWidget->getModel()->item(0, 0);

        rootNode->appendRow(newItem);


        //newItem->setData(widget3->getBearingParameter(), Qt::UserRole + 1);
        itemParameters[newItem] = widget3->getBearingParameter();
        //AddComponent->setProperties(widget3->getBearingParameter());
        qDebug() << "New item added: " << shaftName;
    });
    replaceAddComponentWidget(widget3);
    //widget3->show();
    //widget3->move(this->geometry().center() - widget3->rect().center());
}
void MainWindow::addShaftNode1()
{

    //qDebug() << "gbydashader";
    ShaftParameterWidget *widget2 = new ShaftParameterWidget();
    widget2->setWindowTitle("齿轮组参数设置");

    connect(widget2, &ShaftParameterWidget::accepted, [=]() {

    static bool added = false;//防止多次添加节点
    if(!added){
        qDebug() << "Shaft parameter accepted";

        QString hostGearName = widget2->getHostGearName();
        QStandardItem *newItem = new QStandardItem(hostGearName);

        QIcon visibleIcon1(":/images/Resources/eye.jpg");  // 显示状态的小眼睛
        newItem->setIcon(visibleIcon1);

        newItem->setData("bearing", Qt::UserRole + 1);

        QString guestGearName = widget2->getGuestGearName();
        QStandardItem *newItem1 = new QStandardItem(guestGearName);

        QIcon visibleIcon3(":/images/Resources/eye.jpg");  // 显示状态的小眼睛
        newItem1->setIcon(visibleIcon3);
        newItem1->setData("bearing", Qt::UserRole + 1);

        //QStandardItem *newItem = new QStandardItem("轴承");
        QStandardItem *rootNode = nestedWidget->getModel()->item(0, 0);
        rootNode->appendRow(newItem);
        rootNode->appendRow(newItem1);

        //newItem->setData(widget2->getShaftParameter(), Qt::UserRole + 1);
        itemParameters[newItem] = widget2->getShaftParameter();


        //AddComponent->setProperties(widget2->getShaftParameter());

        QString text_1 = widget2->getText1();
        qDebug() << "text_1" << widget2->getText1();
        bool ok1;
        floats.m = text_1.toFloat(&ok1);

        floats.N = widget2->getText2();
        qDebug() << "N" << widget2->getText2();

        QString text_2 = widget2->getText3();
        bool ok2;
        floats.Angle = text_2.toFloat(&ok2);
        qDebug() << "text_2" << widget2->getText3();

        QString text_3 = widget2->getText4();
        bool ok3;
        floats.width = text_3.toFloat(&ok3);
        qDebug() << "text_3" << widget2->getText4();

        QString text_4 = widget2->getText5();
        bool ok4;
        floats.Cr = text_4.toFloat(&ok4);
        qDebug() << "text_4" << floats.Cr;

        floats.sN = widget2->getText6();

        QString text_5 = widget2->getText7();
        bool ok5;
        floats.sCr = text_5.toFloat(&ok5);

        widget2->close();

        // 假设 AddComponent 和 widget1 是已经定义的对象



        //AddComponent->setProperties(widget2->getShaftParameter());

        // 使用 QTimer 设置延迟 1 秒后执行的操作
        drawNoraml *DrawNoraml = new drawNoraml(floats.m,floats.N,floats.Angle,floats.width,floats.Cr,floats.sN,floats.sCr);
        QTimer::singleShot(5, [this, DrawNoraml]() {
            RenderThread* renderThread = new RenderThread(DrawNoraml);
            connect(renderThread, &QThread::finished, renderThread, &QObject::deleteLater);
            connect(renderThread, &QThread::finished, DrawNoraml, &QObject::deleteLater);
            renderThread->start();
        });
    }
        // 打印 itemParameters 的内容
        qDebug() << "itemParameters: " << itemParameters;
        added = true;
    });

    replaceAddComponentWidget(widget2);
    //widget2->show();
    //widget2->move(this->geometry().center() - widget2->rect().center());

}

void MainWindow::gearPhoto()

{
    ShaftParameterWidget *widget2 = qobject_cast<ShaftParameterWidget *>(sender());
    if (!widget2)
        return;

    //ShaftParameterWidget *widget2 = new ShaftParameterWidget();
    QString text_1 = widget2->getText1();
    qDebug() << "text_1" << widget2->getText1();
    bool ok1;
    floats.m = text_1.toFloat(&ok1);

    floats.N = widget2->getText2();
    qDebug() << "N" << widget2->getText2();

    QString text_2 = widget2->getText3();
    bool ok2;
    floats.Angle = text_2.toFloat(&ok2);
    qDebug() << "text_2" << widget2->getText3();

    QString text_3 = widget2->getText4();
    bool ok3;
    floats.width = text_3.toFloat(&ok3);
    qDebug() << "text_3" << widget2->getText4();

    QString text_4 = widget2->getText5();
    bool ok4;
    floats.Cr = text_4.toFloat(&ok4);
    qDebug() << "text_4" << floats.Cr;

    floats.sN = widget2->getText6();

    QString text_5 = widget2->getText7();
    bool ok5;
    floats.sCr = text_5.toFloat(&ok5);

    widget2->close();

    // 假设 AddComponent 和 widget1 是已经定义的对象
    AddComponent->setProperties(widget2->getShaftParameter());

    // 使用 QTimer 设置延迟 1 秒后执行的操作
    drawNoraml *DrawNoraml = new drawNoraml(floats.m,floats.N,floats.Angle,floats.width,floats.Cr,floats.sN,floats.sCr);
    QTimer::singleShot(5, [this, DrawNoraml]() {
        RenderThread* renderThread = new RenderThread(DrawNoraml);
        connect(renderThread, &QThread::finished, renderThread, &QObject::deleteLater);
        connect(renderThread, &QThread::finished, DrawNoraml, &QObject::deleteLater);
        renderThread->start();
    });
}
void MainWindow::replaceAddComponentWidget(QWidget *newWidget)
{
    // 移除当前的 widget
    if (AddComponent->layout() != nullptr) {
        QLayoutItem *oldItem;
        while ((oldItem = AddComponent->layout()->takeAt(0)) != nullptr) {
            if (oldItem->widget()) {
                oldItem->widget()->deleteLater();  // 删除旧的 widget
            }
            delete oldItem;  // 删除布局项
        }
    }

    // 将新的 widget 添加到 addComponent
    AddComponent->layout()->addWidget(newWidget);
}


void MainWindow::on_treeView_clicked1(const QModelIndex &index)
{

    QTreeView* treeView = nestedWidget->getTreeView();
    if (!treeView) {
        qDebug() << "TreeView not available";
        return;
    }
    if (!treeView) {
        qDebug() << "TreeView is null!";
        return;
    }
    if (!index.isValid()) {
        qDebug() << "Index is invalid!";
        return;
    }
    QStandardItem *item = nestedWidget->getModel()->itemFromIndex(index);
    if (!item)
        return;
    QString nodeName = item->text();
    QString nodeType = item->data(Qt::UserRole + 1).toString();  // 获取节点类型
    QMap<QString, QString> parameters = itemParameters.value(item);

    // QWidget *newWidget = nullptr;
    //itemParameters[item] = parameter;
    //QString parameter = item->data(Qt::UserRole + 1).toString();

    //qDebug() << "Node clicked: " << nodeName << ", Parameter: " << parameters;

    qDebug() << "Node clicked: " << nodeName << ", Type: " << nodeType << ", Parameter: " << parameters;

    // 检查点击是否发生在node区域
    QRect nodeRect = treeView->visualRect(index);
    if (nodeRect.isNull()) {
        qDebug() << "Node rectangle is null!";
        return;
    }
    // 获取图标的区域
    QSize iconSize = item->icon().availableSizes().isEmpty() ? QSize(16, 16) : item->icon().availableSizes().first();
    if (iconSize.isEmpty()) {
        qDebug() << "Icon size is empty, using default size.";
        iconSize = QSize(16, 16);  // 默认图标大小
    }
    QRect iconRect = nodeRect;
    iconRect.setWidth(iconSize.width());  // 设置图标区域的宽度为图标的宽度
    //iconRect.setWidth(item->icon().availableSizes().first().width()); // 图标的宽度
    QPoint cursorPos = QCursor::pos();
    if (cursorPos.isNull()) {
        qDebug() << "Cursor position is null!";
        return;
    }
    cursorPos = treeView->viewport()->mapFromGlobal(cursorPos);
    //QPoint cursorPos = nestedWidget->treeView->viewport()->mapFromGlobal(QCursor::pos());
    qDebug() << "Cursor position in viewport: " << cursorPos;
    qDebug() << "Icon rectangle: " << iconRect;
    if (iconRect.contains(cursorPos)) {
        // 如果点击发生在图标部分，执行图标状态切换

        QIcon currentIcon = item->icon();
        if (item->icon().isNull()) {
            qDebug() << "The item icon is not set.";
        }
        qDebug() << "currentIcon"<<currentIcon.name();
        QPixmap currentPixmap = currentIcon.pixmap(16, 16); // 获取当前图标的图像
        QPixmap visiblePixmap(":/images/Resources/eye.jpg"); // 可见状态的图标
        QPixmap hiddenPixmap(":/images/Resources/eye_closed.jpg"); // 隐藏状态的图标
        //QPixmap scaledHiddenPixmap = hiddenPixmap.scaled(currentPixmap.size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
        QPixmap scaledHiddenPixmap = hiddenPixmap.scaled(currentPixmap.size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);

        qDebug() << "Current Pixmap Size:" << currentPixmap.size();
        qDebug() << "Hidden Pixmap Size:" << hiddenPixmap.size();
        qDebug() << "scaledhidden Pixmap Size:" << scaledHiddenPixmap.size();
        bool imagesAreEqual = (currentPixmap.toImage() == hiddenPixmap.toImage());
        qDebug() << "Images are equal:" << imagesAreEqual;

        if (currentPixmap.toImage() == scaledHiddenPixmap.toImage()) {
            // 当前图标是闭眼状态，切换到睁眼状态
            QIcon visibleIcon(":/images/Resources/eye.jpg");
            item->setIcon(visibleIcon);
            showComponent(nodeName);  // 显示组件
            qDebug() << "Icon updated to visible.";
        } else {
            // 当前图标是睁眼状态，切换到闭眼状态
            QIcon hiddenIcon(":/images/Resources/eye_closed.jpg");
            item->setIcon(hiddenIcon);
            hideComponent(nodeName);  // 隐藏组件
            qDebug() << "Icon updated to close.";
        }
    }
    else {
        QWidget *newWidget = nullptr;
        // 如果点击发生在非图标区域（如文本部分），执行节点选择或其他操作
        qDebug() << "Node clicked11: " << nodeName;
        if (nodeType == "gear")
        {
            GearParameterWidget *widget = new GearParameterWidget();
            qDebug() << "secondOk";
            widget->setWindowTitle("齿轮参数设置");
            widget->setGearParameter(parameters);
            //widget->show();
            //widget->move(this->geometry().center() - widget->rect().center());
            newWidget = widget;  // 使用 GearParameterWidget
        }

        else if (nodeType == "shaft")
        {
            BearingParameterWidget *widget = new BearingParameterWidget();
            widget->setWindowTitle("轴参数设置");
            widget->setBearingParameter(parameters);
            //     widget->show();
            //     widget->move(this->geometry().center() - widget->rect().center());
            newWidget = widget;  // 使用 GearParameterWidget

        }
        else if (nodeType == "bearing")
        {
            ShaftParameterWidget *widget2 = new ShaftParameterWidget();
            widget2->setWindowTitle("轴承参数设置");
            widget2->setShaftParameter(parameters);
            //widget2->show();
            //widget2->move(this->geometry().center() - widget2->rect().center());
            //connect(widget2, SIGNAL(accepted()), this, SLOT(gearPhoto()));
            newWidget = widget2;  // 使用 GearParameterWidget

        }
        if (newWidget) {
            QWidget *currentWidget = mdiWin2->widget();
            if (currentWidget) {
                mdiWin2->setWidget(nullptr);  // 移除当前的 widget
                currentWidget->deleteLater();  // 删除旧的 widget 防止内存泄漏
            }
            mdiWin2->setWidget(newWidget);  // 设置新 widget
            newWidget->show();

            qDebug() << "New widget set for mdiWin2: " << newWidget;
        }
    }



    // 检查是否点击了图标部分
    // if (treeView->visualRect(index).contains(treeView->viewport()->mapFromGlobal(QCursor::pos())))
    // {

    // }
}
void MainWindow::hideComponent(const QString &nodeName)
{
    if (nodeName == "齿轮") {
        // 隐藏齿轮组件
        // 比如：gearWidget->setVisible(false);
    } else if (nodeName == "轴") {
        // 隐藏轴组件
        // 比如：shaftWidget->setVisible(false);
    }
}

// 显示组件的函数
void MainWindow::showComponent(const QString &nodeName)
{
    if (nodeName == "齿轮") {
        // 显示齿轮组件
        // 比如：gearWidget->setVisible(true);
    } else if (nodeName == "轴") {
        // 显示轴组件
        // 比如：shaftWidget->setVisible(true);
    }
}
void MainWindow::addDrawNormal()
{
    // qDebug() << "receive";
    gear = new Gear();
    gear->setWindowTitle("齿轮参数");
    gear->move(650,250);
    gear->show();
    //splitter->replaceWidget(1, gear);
    //connect(gear, &Gear::parameters, this, &MainWindow::receiveParameters);

}

void MainWindow::receiveParameters()
{
    QString text_1 = gear->getText1();
    qDebug() << "text_1" << gear->getText1();
    bool ok1;

    floats.m = text_1.toFloat(&ok1);

    floats.N = gear->getText2();
    qDebug() << "N" << gear->getText2();

    QString text_2 = gear->getText3();
    bool ok2;
    floats.Angle = text_2.toFloat(&ok2);
    qDebug() << "text_2" << gear->getText3();
    QString text_3 = gear->getText4();
    bool ok3;
    floats.width = text_3.toFloat(&ok3);
    qDebug() << "text_3" << gear->getText4();

    QString text_4 = gear->getText5();
    bool ok4;
    floats.Cr = text_4.toFloat(&ok4);
    qDebug() << "text_4" << floats.Cr;
    gear->close();
    drawNoraml *DrawNoraml = new drawNoraml(floats.m,floats.N,floats.Angle,floats.width,floats.Cr,0,0);

    DrawNoraml->renderloop();
    // addDrawNormalToCentral(DrawNoraml);
}

void MainWindow::addDrawNormalToCentral(drawNoraml *DrawNoraml)
{
    qDebug() << "分割111111";
    GLFWwindow *window = DrawNoraml->showGear();
    DrawNoraml->renderloop();

}


void MainWindow::newActionSlot()
{
    newPage = new NewPage();
    //newPage->setParent(this);
    //链接新页面的信号与槽
    connect(newPage, SIGNAL(accepted()), this, SLOT(openNewPageSlot()));
    newPage->move(this->geometry().center() - newPage->rect().center());
    newPage->show();
}

void MainWindow::openActionSlot()
{

    QString fileName = QFileDialog::getOpenFileName(this, "选择一个项目", QCoreApplication::applicationFilePath(), "*.cpp"); //this 指的是mainwindow qcoreApplication::applicationFilePath 获取文件此时位置
    if (fileName.isEmpty())
    {
        QMessageBox::warning(this, "警告", "请选择一个项目");
    }
    else
    {
        //qDebug << fileName;
        QFile file(fileName);
        file.open(QIODevice::ReadWrite);
        QByteArray ba = file.readAll();
        //ui->textEdit->setText(QString(ba));
        file.close();
    }
}

void MainWindow::saveActionSlot()
{

    QString fileName = QFileDialog::getSaveFileName(this, "选择一个项目", QCoreApplication::applicationFilePath()); //不写"*.cpp" 就是全部类型
    if (fileName.isEmpty())
    {
        QMessageBox::warning(this, "警告", "请选择一个项目");
    }
    else
    {
        //qDebug << fileName;
        QFile file(fileName);
        file.open(QIODevice::ReadWrite);
        QByteArray ba;
        //ba.append(ui->textEdit->toPlainText());  //QString 转为 QByteArray
        file.write(ba);
        file.close();
    }
}

void MainWindow::openNewPageSlot()//dakai   left middle right
{

    splitter = new QSplitter(Qt::Horizontal, this);
    QMdiSubWindow *mdiWin1=new QMdiSubWindow;
    mdiWin1->setWidget(nestedWidget);
    mdiWin1->setWindowFlags(mdiWin1->windowFlags()&~Qt::WindowMinimizeButtonHint&~Qt::WindowMaximizeButtonHint);
    splitter->addWidget(mdiWin1);

    drawNoraml *DrawNoraml = new drawNoraml(0,0,0,0,0,0,0);
    QTimer::singleShot(5, [this, DrawNoraml]() {
        RenderThread* renderThread = new RenderThread(DrawNoraml);
        connect(renderThread, &QThread::finished, renderThread, &QObject::deleteLater);
        connect(renderThread, &QThread::finished, DrawNoraml, &QObject::deleteLater);
        renderThread->start();
    });

    emptyWidget= new QWidget();
    //QMdiSubWindow *mdiWin3=new QMdiSubWindow;
    splitter->addWidget(emptyWidget);

    mdiWin2 = new QMdiSubWindow;
    mdiWin2->setWindowFlags(mdiWin2->windowFlags()&~Qt::WindowMinimizeButtonHint&~Qt::WindowMaximizeButtonHint);
    //mdiWin2->setWidget(ui->leftDockWidget);
    mdiWin2->setWidget(AddComponent);
    splitter->addWidget(mdiWin2);

    QList<int> sizes;
    sizes << 400 << 800 << 400;  // 假设三个窗口初始大小分别为100, 200, 100
    splitter->setSizes(sizes);
    setCentralWidget(splitter);
}

void MainWindow::addActionSlot()
{
    GaiNian *gaiNian = new GaiNian();
    //ui->horizontalLayout->addWidget(gaiNian);
    //gaiNian->setGeometry(50, 50, 200, 200);
    gaiNian->move(250,250);
    // 将子窗口设为可拖动
    gaiNian->setMouseTracking(true);
    gaiNian->setWindowFlags( Qt::CustomizeWindowHint | Qt::WindowMinMaxButtonsHint | Qt::WindowCloseButtonHint);
    gaiNian->show();
}

void MainWindow::detailedActionSlot()
{
    one *One = new one();
    connect(One, SIGNAL(accepted_signal()), this, SLOT(openTwoPageSlot()));
    One->move(this->geometry().center() - One->rect().center());
    One->show();

}
void MainWindow::openTwoPageSlot()
{
    two *Two = new two();
    connect(Two, SIGNAL(accept2()), this, SLOT(openThreePageSlot()));
    Two->move(this->geometry().center() - Two->rect().center());
    Two->show();
}
void MainWindow::openThreePageSlot()
{
    three *Three = new three();
    connect(Three, SIGNAL(accept3()), this, SLOT(openFourPageSlot()));
    Three->move(this->geometry().center() - Three->rect().center());
    Three->show();
}
void MainWindow::openFourPageSlot()
{
    four *Four = new four();
    connect(Four, SIGNAL(accept4()), this, SLOT(openFivePageSlot()));
    Four->move(this->geometry().center() - Four->rect().center());
    Four->show();
}
void MainWindow::openFivePageSlot()
{
    five *Five = new five();
    connect(Five, SIGNAL(accept5()), this, SLOT(openSixPageSlot()));
    Five->move(this->geometry().center() - Five->rect().center());
    Five->show();
}
void MainWindow::openSixPageSlot()
{
    six *Six = new six();
    connect(Six, SIGNAL(accept6()), this, SLOT(openSevenPageSlot()));
    Six->move(this->geometry().center() - Six->rect().center());
    Six->show();
}
void MainWindow::openSevenPageSlot()
{
    seven *Seven = new seven();
    connect(Seven, SIGNAL(accept7()), this, SLOT(openEightPageSlot()));
    Seven->move(this->geometry().center() - Seven->rect().center());
    Seven->show();
}
void MainWindow::openEightPageSlot()
{
    eight *Eight = new eight();
    connect(Eight, SIGNAL(accept8()), this, SLOT(openNinePageSlot()));
    Eight->move(this->geometry().center() - Eight->rect().center());
    Eight->show();
}
void MainWindow::openNinePageSlot()
{
    this->close();
}










