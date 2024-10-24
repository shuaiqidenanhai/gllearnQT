/********************************************************************************
** Form generated from reading UI file 'addcomponent.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCOMPONENT_H
#define UI_ADDCOMPONENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addComponent
{
public:
    QHBoxLayout *horizontalLayout;
    QTextEdit *propertyTextEdit;

    void setupUi(QWidget *addComponent)
    {
        if (addComponent->objectName().isEmpty())
            addComponent->setObjectName(QString::fromUtf8("addComponent"));
        addComponent->resize(800, 400);
        horizontalLayout = new QHBoxLayout(addComponent);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        propertyTextEdit = new QTextEdit(addComponent);
        propertyTextEdit->setObjectName(QString::fromUtf8("propertyTextEdit"));
        QFont font;
        font.setPointSize(15);
        propertyTextEdit->setFont(font);

        horizontalLayout->addWidget(propertyTextEdit);


        retranslateUi(addComponent);

        QMetaObject::connectSlotsByName(addComponent);
    } // setupUi

    void retranslateUi(QWidget *addComponent)
    {
        addComponent->setWindowTitle(QCoreApplication::translate("addComponent", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addComponent: public Ui_addComponent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCOMPONENT_H
