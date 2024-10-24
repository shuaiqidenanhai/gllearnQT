/********************************************************************************
** Form generated from reading UI file 'redesign.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REDESIGN_H
#define UI_REDESIGN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReDesign
{
public:
    QLabel *label;
    QPushButton *confirmButton;
    QPushButton *cancelButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_2;
    QComboBox *comboBox;
    QLineEdit *lineEdit_2;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_3;

    void setupUi(QWidget *ReDesign)
    {
        if (ReDesign->objectName().isEmpty())
            ReDesign->setObjectName(QString::fromUtf8("ReDesign"));
        ReDesign->resize(430, 380);
        label = new QLabel(ReDesign);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 161, 16));
        confirmButton = new QPushButton(ReDesign);
        confirmButton->setObjectName(QString::fromUtf8("confirmButton"));
        confirmButton->setGeometry(QRect(170, 310, 93, 28));
        cancelButton = new QPushButton(ReDesign);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(280, 310, 93, 28));
        widget = new QWidget(ReDesign);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 100, 361, 23));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(widget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout->addWidget(checkBox);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        widget1 = new QWidget(ReDesign);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 160, 361, 23));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        checkBox_2 = new QCheckBox(widget1);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        horizontalLayout_2->addWidget(checkBox_2);

        comboBox = new QComboBox(widget1);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        lineEdit_2 = new QLineEdit(widget1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        widget2 = new QWidget(ReDesign);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(20, 220, 361, 23));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit_3 = new QLineEdit(widget2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);


        retranslateUi(ReDesign);

        QMetaObject::connectSlotsByName(ReDesign);
    } // setupUi

    void retranslateUi(QWidget *ReDesign)
    {
        ReDesign->setWindowTitle(QCoreApplication::translate("ReDesign", "Form", nullptr));
        label->setText(QCoreApplication::translate("ReDesign", "\351\207\215\350\256\276\350\256\241\346\246\202\345\277\265\346\226\234\351\275\277\350\275\256\347\273\204", nullptr));
        confirmButton->setText(QCoreApplication::translate("ReDesign", "\347\241\256\345\256\232", nullptr));
        cancelButton->setText(QCoreApplication::translate("ReDesign", "\345\217\226\346\266\210", nullptr));
        checkBox->setText(QCoreApplication::translate("ReDesign", "\346\263\225\345\220\221\346\250\241\346\225\260\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("ReDesign", "mm", nullptr));
        checkBox_2->setText(QCoreApplication::translate("ReDesign", "\351\275\277\346\225\260\357\274\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("ReDesign", "\345\260\217\351\275\277\350\275\2561", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("ReDesign", "\345\244\247\351\275\277\350\275\2561", nullptr));

        label_2->setText(QCoreApplication::translate("ReDesign", "\344\274\240\345\212\250\346\257\224\357\274\210\345\244\247\351\275\277\350\275\256/\345\260\217\351\275\277\350\275\256\357\274\211\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReDesign: public Ui_ReDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REDESIGN_H
