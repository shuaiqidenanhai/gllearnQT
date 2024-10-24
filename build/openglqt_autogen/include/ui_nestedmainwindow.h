/********************************************************************************
** Form generated from reading UI file 'nestedmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NESTEDMAINWINDOW_H
#define UI_NESTEDMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NestedMainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *gearButton;
    QPushButton *gearGroupButton;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QMenuBar *menuBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents_2;

    void setupUi(QMainWindow *NestedMainWindow)
    {
        if (NestedMainWindow->objectName().isEmpty())
            NestedMainWindow->setObjectName(QString::fromUtf8("NestedMainWindow"));
        NestedMainWindow->resize(611, 636);
        centralwidget = new QWidget(NestedMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 150, 72, 15));
        gearButton = new QPushButton(centralwidget);
        gearButton->setObjectName(QString::fromUtf8("gearButton"));
        gearButton->setGeometry(QRect(100, 220, 93, 28));
        gearGroupButton = new QPushButton(centralwidget);
        gearGroupButton->setObjectName(QString::fromUtf8("gearGroupButton"));
        gearGroupButton->setGeometry(QRect(100, 300, 93, 28));
        NestedMainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(NestedMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        NestedMainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(NestedMainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        NestedMainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        menuBar = new QMenuBar(NestedMainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 611, 23));
        NestedMainWindow->setMenuBar(menuBar);
        dockWidget = new QDockWidget(NestedMainWindow);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        dockWidget->setWidget(dockWidgetContents_2);
        NestedMainWindow->addDockWidget(Qt::TopDockWidgetArea, dockWidget);

        retranslateUi(NestedMainWindow);

        QMetaObject::connectSlotsByName(NestedMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *NestedMainWindow)
    {
        NestedMainWindow->setWindowTitle(QCoreApplication::translate("NestedMainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("NestedMainWindow", "\346\226\260\350\256\276\350\256\241", nullptr));
        gearButton->setText(QCoreApplication::translate("NestedMainWindow", "\347\224\273\351\275\277\350\275\2561", nullptr));
        gearGroupButton->setText(QCoreApplication::translate("NestedMainWindow", "\347\224\273\351\275\277\350\275\256\347\273\2042", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("NestedMainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NestedMainWindow: public Ui_NestedMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NESTEDMAINWINDOW_H
