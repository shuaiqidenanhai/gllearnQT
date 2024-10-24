/********************************************************************************
** Form generated from reading UI file 'nestedwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NESTEDWIDGET_H
#define UI_NESTEDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NestedWidget
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *gearButton;
    QPushButton *gearGroupButton;
    QPushButton *shaftButton;
    QPushButton *driveShaftButton;

    void setupUi(QWidget *NestedWidget)
    {
        if (NestedWidget->objectName().isEmpty())
            NestedWidget->setObjectName(QString::fromUtf8("NestedWidget"));
        NestedWidget->resize(400, 400);
        widget = new QWidget(NestedWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        gearButton = new QPushButton(widget);
        gearButton->setObjectName(QString::fromUtf8("gearButton"));

        horizontalLayout->addWidget(gearButton);

        gearGroupButton = new QPushButton(widget);
        gearGroupButton->setObjectName(QString::fromUtf8("gearGroupButton"));

        horizontalLayout->addWidget(gearGroupButton);

        shaftButton = new QPushButton(widget);
        shaftButton->setObjectName(QString::fromUtf8("shaftButton"));

        horizontalLayout->addWidget(shaftButton);

        driveShaftButton = new QPushButton(widget);
        driveShaftButton->setObjectName(QString::fromUtf8("driveShaftButton"));

        horizontalLayout->addWidget(driveShaftButton);


        retranslateUi(NestedWidget);

        QMetaObject::connectSlotsByName(NestedWidget);
    } // setupUi

    void retranslateUi(QWidget *NestedWidget)
    {
        NestedWidget->setWindowTitle(QCoreApplication::translate("NestedWidget", "Form", nullptr));
        gearButton->setText(QCoreApplication::translate("NestedWidget", "\351\275\277\350\275\256", nullptr));
        gearGroupButton->setText(QCoreApplication::translate("NestedWidget", "\351\275\277\350\275\256\347\273\204", nullptr));
        shaftButton->setText(QCoreApplication::translate("NestedWidget", "\350\275\264", nullptr));
        driveShaftButton->setText(QCoreApplication::translate("NestedWidget", "\344\274\240\345\212\250\350\275\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NestedWidget: public Ui_NestedWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NESTEDWIDGET_H
