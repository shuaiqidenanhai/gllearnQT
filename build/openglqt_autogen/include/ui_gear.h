/********************************************************************************
** Form generated from reading UI file 'gear.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEAR_H
#define UI_GEAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gear
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QSpinBox *spinBox;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *lineEdit_4;
    QComboBox *comboBox_4;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox_3;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QPushButton *confirmButton;

    void setupUi(QWidget *Gear)
    {
        if (Gear->objectName().isEmpty())
            Gear->setObjectName(QString::fromUtf8("Gear"));
        Gear->resize(585, 453);
        layoutWidget = new QWidget(Gear);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(130, 100, 301, 28));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        comboBox_2 = new QComboBox(layoutWidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_2->addWidget(comboBox_2);

        layoutWidget_2 = new QWidget(Gear);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(130, 150, 241, 28));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        spinBox = new QSpinBox(layoutWidget_2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout_5->addWidget(spinBox);

        layoutWidget_3 = new QWidget(Gear);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(130, 260, 301, 28));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        lineEdit_4 = new QLineEdit(layoutWidget_3);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_4->addWidget(lineEdit_4);

        comboBox_4 = new QComboBox(layoutWidget_3);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        horizontalLayout_4->addWidget(comboBox_4);

        layoutWidget_4 = new QWidget(Gear);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(130, 200, 302, 28));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        lineEdit_3 = new QLineEdit(layoutWidget_4);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);

        comboBox_3 = new QComboBox(layoutWidget_4);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        horizontalLayout_3->addWidget(comboBox_3);

        layoutWidget_5 = new QWidget(Gear);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(130, 50, 302, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget_5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_5);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        lineEdit = new QLineEdit(layoutWidget_5);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        comboBox = new QComboBox(layoutWidget_5);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        pushButton_2 = new QPushButton(Gear);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 340, 93, 28));
        confirmButton = new QPushButton(Gear);
        confirmButton->setObjectName(QString::fromUtf8("confirmButton"));
        confirmButton->setGeometry(QRect(160, 340, 93, 28));

        retranslateUi(Gear);

        QMetaObject::connectSlotsByName(Gear);
    } // setupUi

    void retranslateUi(QWidget *Gear)
    {
        Gear->setWindowTitle(QCoreApplication::translate("Gear", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("Gear", "\345\216\213\345\212\233\350\247\222", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("Gear", "deg", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Gear", "rev", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("Gear", "rad", nullptr));

        label_3->setText(QCoreApplication::translate("Gear", "\344\270\273\351\275\277\350\275\256\351\275\277\346\225\260", nullptr));
        label_5->setText(QCoreApplication::translate("Gear", "\344\270\273\351\275\277\350\275\256\344\270\255\345\277\203\345\215\212\345\276\204", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("Gear", "mm", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("Gear", "cm", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("Gear", "dm", nullptr));
        comboBox_4->setItemText(3, QCoreApplication::translate("Gear", "inch", nullptr));
        comboBox_4->setItemText(4, QCoreApplication::translate("Gear", "ft", nullptr));

        label_4->setText(QCoreApplication::translate("Gear", "\344\270\273\351\275\277\350\275\256\351\275\277\345\256\275", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("Gear", "mm", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("Gear", "cm", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("Gear", "dm", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("Gear", "ft", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("Gear", "inch", nullptr));

        label->setText(QCoreApplication::translate("Gear", "\346\250\241\346\225\260", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Gear", "mm", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Gear", "inch-1", nullptr));

        pushButton_2->setText(QCoreApplication::translate("Gear", "\345\217\226\346\266\210", nullptr));
        confirmButton->setText(QCoreApplication::translate("Gear", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gear: public Ui_Gear {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEAR_H
