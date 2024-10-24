/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *newAction;
    QAction *openAction;
    QAction *saveAction;
    QAction *action_E;
    QAction *action_D;
    QAction *action;
    QAction *action_2;
    QAction *addAction;
    QAction *action_E_2;
    QAction *action_O_2;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QAction *action_8;
    QAction *action_9;
    QAction *action_10;
    QAction *detailedAction;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QMenuBar *menubar;
    QMenu *menu_E;
    QMenu *menu_P;
    QMenu *menu_R;
    QMenu *menu_V;
    QMenu *menu_N;
    QMenu *menu_W;
    QMenu *menu_H;
    QMenu *menu_F;
    QMenu *menu_A;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(972, 955);
        newAction = new QAction(MainWindow);
        newAction->setObjectName(QString::fromUtf8("newAction"));
        openAction = new QAction(MainWindow);
        openAction->setObjectName(QString::fromUtf8("openAction"));
        saveAction = new QAction(MainWindow);
        saveAction->setObjectName(QString::fromUtf8("saveAction"));
        action_E = new QAction(MainWindow);
        action_E->setObjectName(QString::fromUtf8("action_E"));
        action_D = new QAction(MainWindow);
        action_D->setObjectName(QString::fromUtf8("action_D"));
        action_D->setVisible(true);
        action_D->setIconVisibleInMenu(true);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        addAction = new QAction(MainWindow);
        addAction->setObjectName(QString::fromUtf8("addAction"));
        action_E_2 = new QAction(MainWindow);
        action_E_2->setObjectName(QString::fromUtf8("action_E_2"));
        action_O_2 = new QAction(MainWindow);
        action_O_2->setObjectName(QString::fromUtf8("action_O_2"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QString::fromUtf8("action_6"));
        action_7 = new QAction(MainWindow);
        action_7->setObjectName(QString::fromUtf8("action_7"));
        action_8 = new QAction(MainWindow);
        action_8->setObjectName(QString::fromUtf8("action_8"));
        action_9 = new QAction(MainWindow);
        action_9->setObjectName(QString::fromUtf8("action_9"));
        action_10 = new QAction(MainWindow);
        action_10->setObjectName(QString::fromUtf8("action_10"));
        detailedAction = new QAction(MainWindow);
        detailedAction->setObjectName(QString::fromUtf8("detailedAction"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));

        horizontalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 972, 23));
        menu_E = new QMenu(menubar);
        menu_E->setObjectName(QString::fromUtf8("menu_E"));
        menu_E->setEnabled(false);
        menu_E->setToolTipsVisible(true);
        menu_P = new QMenu(menubar);
        menu_P->setObjectName(QString::fromUtf8("menu_P"));
        menu_P->setEnabled(true);
        menu_P->setToolTipsVisible(true);
        menu_R = new QMenu(menubar);
        menu_R->setObjectName(QString::fromUtf8("menu_R"));
        menu_R->setEnabled(false);
        menu_R->setToolTipsVisible(true);
        menu_V = new QMenu(menubar);
        menu_V->setObjectName(QString::fromUtf8("menu_V"));
        menu_V->setEnabled(false);
        menu_V->setToolTipsVisible(true);
        menu_N = new QMenu(menubar);
        menu_N->setObjectName(QString::fromUtf8("menu_N"));
        menu_N->setEnabled(false);
        menu_N->setToolTipsVisible(true);
        menu_W = new QMenu(menubar);
        menu_W->setObjectName(QString::fromUtf8("menu_W"));
        menu_W->setEnabled(false);
        menu_W->setToolTipsVisible(true);
        menu_H = new QMenu(menubar);
        menu_H->setObjectName(QString::fromUtf8("menu_H"));
        menu_H->setEnabled(false);
        menu_H->setTearOffEnabled(false);
        menu_H->setToolTipsVisible(true);
        menu_F = new QMenu(menubar);
        menu_F->setObjectName(QString::fromUtf8("menu_F"));
        menu_F->setEnabled(true);
        menu_A = new QMenu(menubar);
        menu_A->setObjectName(QString::fromUtf8("menu_A"));
        menu_A->setEnabled(false);
        menu_A->setToolTipsVisible(true);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_F->menuAction());
        menubar->addAction(menu_P->menuAction());
        menubar->addAction(menu_E->menuAction());
        menubar->addAction(menu_A->menuAction());
        menubar->addAction(menu_R->menuAction());
        menubar->addAction(menu_V->menuAction());
        menubar->addAction(menu_N->menuAction());
        menubar->addAction(menu_W->menuAction());
        menubar->addAction(menu_H->menuAction());
        menu_E->addAction(action_D);
        menu_E->addAction(action);
        menu_E->addAction(action_2);
        menu_P->addAction(addAction);
        menu_P->addAction(action_E_2);
        menu_P->addAction(action_O_2);
        menu_P->addAction(detailedAction);
        menu_R->addAction(action_6);
        menu_V->addAction(action_5);
        menu_V->addAction(action_7);
        menu_V->addAction(action_8);
        menu_V->addAction(action_9);
        menu_N->addAction(action_10);
        menu_F->addAction(newAction);
        menu_F->addAction(openAction);
        menu_F->addAction(saveAction);
        menu_F->addAction(action_E);
        menu_A->addAction(action_4);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        newAction->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272(&N)", nullptr));
        openAction->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200(&O)", nullptr));
        saveAction->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(&S)", nullptr));
        action_E->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272(&E)", nullptr));
        action_D->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        addAction->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\260\350\243\205\351\205\215\344\273\266/\351\203\250\344\273\266(&A)", nullptr));
        action_E_2->setText(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221\345\261\236\346\200\247\350\241\250(&E)", nullptr));
        action_O_2->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\345\267\245\344\275\234\350\241\250(&O)", nullptr));
        action_4->setText(QCoreApplication::translate("MainWindow", "\345\210\206\346\236\220\350\256\276\347\275\256", nullptr));
        action_5->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260\345\210\227\350\241\250", nullptr));
        action_6->setText(QCoreApplication::translate("MainWindow", "\350\256\276\350\256\241\346\200\273\347\273\223", nullptr));
        action_7->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\346\211\200\346\234\211\350\247\206\345\233\276", nullptr));
        action_8->setText(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213\347\261\273\345\236\213", nullptr));
        action_9->setText(QCoreApplication::translate("MainWindow", "\346\216\222\345\210\227\347\252\227\345\217\243", nullptr));
        action_10->setText(QCoreApplication::translate("MainWindow", "\345\205\250\345\261\200\350\256\276\347\275\256", nullptr));
        detailedAction->setText(QCoreApplication::translate("MainWindow", "\350\257\246\347\273\206\351\275\277\350\275\256\347\273\204(&D)", nullptr));
        menu_E->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", nullptr));
        menu_P->setTitle(QCoreApplication::translate("MainWindow", "\351\203\250\344\273\266(&P)", nullptr));
        menu_R->setTitle(QCoreApplication::translate("MainWindow", "\346\212\245\345\221\212(&R)", nullptr));
        menu_V->setTitle(QCoreApplication::translate("MainWindow", "\350\247\206\345\233\276(&V)", nullptr));
        menu_N->setTitle(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256(&N)", nullptr));
        menu_W->setTitle(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243(&W)", nullptr));
        menu_H->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", nullptr));
        menu_F->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", nullptr));
        menu_A->setTitle(QCoreApplication::translate("MainWindow", "\345\210\206\346\236\220(&A)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
