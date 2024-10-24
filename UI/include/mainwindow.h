#ifndef MAINWINDOW_H
#define MAINWINDOW_H
// Q_DECLARE_METATYPE(GLFWwindow)

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QKeyEvent>
#include <QMouseEvent>
#include <newpage.h>
#include <gainian.h>
#include <one.h>
#include <dialog.h>
#include <nestedwidget.h>
#include <QDockWidget>
#include <QSplitter>
#include <QMdiSubWindow>
#include <thread>
#include <gear.h>
#include <QPushButton>
#include <QLabel>
#include <QOpenGLContext>
#include <QSurfaceFormat>
#include <addcomponent.h>
#include <QThread>
#include <shaftparameterwidget.h>
#include <QTreeView>
struct MultipleFloats
{
    float m;
    int N;
    float Cr;
    float width;
    float Angle;
    float sN;
    float sCr;
};
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class RenderThread : public QThread {
    Q_OBJECT
public:
    RenderThread(drawNoraml* drawNormalObj) : drawNormalObj(drawNormalObj) {}

    void run() override {
        drawNormalObj->renderloop();
        emit finished();
    }
signals:
    void finished();

private:
    drawNoraml* drawNormalObj;


};


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void newActionSlot();
    void openActionSlot();
    void saveActionSlot();
    void openNewPageSlot();

    void addActionSlot();
    void detailedActionSlot();
    //void generateWindow();
    //void openGear();
    //void onDockLocationChanged(Qt::DockWidgetArea area);

//    void openDialog();

//    void on_newPageButton_clicked();
    void addDrawNormalToCentral(drawNoraml* DrawNormal);
    void addDrawNormal();
    void receiveParameters();
    void addGearNode1();
    void addBearingNode1();
    void addShaftNode1();
    void on_treeView_clicked1(const QModelIndex &index);
    void gearPhoto();

    void openTwoPageSlot();
    void openThreePageSlot();
    void openFourPageSlot();
    void openFivePageSlot();
    void openSixPageSlot();
    void openSevenPageSlot();
    void openEightPageSlot();
    void openNinePageSlot();
    void replaceAddComponentWidget(QWidget *newWidget);
    void hideComponent(const QString &nodeName);
    void showComponent(const QString &nodeName);

private:
    Ui::MainWindow *ui;
  //  NewPage *newPage;
//    Dialog *dialog;
    QSplitter *splitter;
    NestedWidget *nestedWidget;
    NewPage *newPage;
    QWidget *emptyWidget;
    QWindow* createWindowFromGLFW(GLFWwindow* glfwWindow);
    Gear *gear;
    MultipleFloats floats;
    addComponent *AddComponent;
    //ShaftParameterWidget *widget2;
    QMdiSubWindow *mdiWin2;

    QMap<QStandardItem*, QMap<QString, QString>> itemParameters;


};
#endif // MAINWINDOW_H
