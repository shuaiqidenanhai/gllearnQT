/********************************************************************************
** Form generated from reading UI file 'gearparameterwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEARPARAMETERWIDGET_H
#define UI_GEARPARAMETERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GearParameterWidget
{
public:
    QPushButton *cancelButton;
    QPushButton *okButton;
    QLineEdit *lineEdit_7;
    QComboBox *comboBox_7;
    QLabel *label_8;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QComboBox *comboBox_5;
    QLabel *label_10;
    QSpinBox *spinBox_2;
    QComboBox *comboBox_8;
    QLabel *label_9;
    QLineEdit *lineEdit_8;
    QLabel *label_7;
    QComboBox *comboBox_6;
    QLineEdit *lineEdit_6;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWidget *GearParameterWidget)
    {
        if (GearParameterWidget->objectName().isEmpty())
            GearParameterWidget->setObjectName(QString::fromUtf8("GearParameterWidget"));
        GearParameterWidget->resize(492, 472);
        cancelButton = new QPushButton(GearParameterWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(260, 360, 93, 28));
        okButton = new QPushButton(GearParameterWidget);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(150, 360, 93, 28));
        lineEdit_7 = new QLineEdit(GearParameterWidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(150, 100, 108, 25));
        comboBox_7 = new QComboBox(GearParameterWidget);
        comboBox_7->addItem(QString());
        comboBox_7->addItem(QString());
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));
        comboBox_7->setGeometry(QRect(290, 100, 66, 26));
        label_8 = new QLabel(GearParameterWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(61, 100, 24, 18));
        label_6 = new QLabel(GearParameterWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(61, 150, 36, 18));
        lineEdit_5 = new QLineEdit(GearParameterWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(150, 150, 108, 25));
        comboBox_5 = new QComboBox(GearParameterWidget);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setGeometry(QRect(290, 150, 51, 26));
        label_10 = new QLabel(GearParameterWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(61, 200, 24, 18));
        spinBox_2 = new QSpinBox(GearParameterWidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(150, 200, 40, 26));
        spinBox_2->setFocusPolicy(Qt::WheelFocus);
        comboBox_8 = new QComboBox(GearParameterWidget);
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->setObjectName(QString::fromUtf8("comboBox_8"));
        comboBox_8->setGeometry(QRect(290, 250, 54, 26));
        label_9 = new QLabel(GearParameterWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(61, 250, 24, 18));
        lineEdit_8 = new QLineEdit(GearParameterWidget);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(150, 250, 108, 25));
        label_7 = new QLabel(GearParameterWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(61, 300, 48, 18));
        comboBox_6 = new QComboBox(GearParameterWidget);
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
        comboBox_6->setGeometry(QRect(290, 300, 54, 26));
        lineEdit_6 = new QLineEdit(GearParameterWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(150, 300, 108, 25));
        label = new QLabel(GearParameterWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(61, 50, 55, 18));
        lineEdit = new QLineEdit(GearParameterWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 50, 201, 25));

        retranslateUi(GearParameterWidget);

        QMetaObject::connectSlotsByName(GearParameterWidget);
    } // setupUi

    void retranslateUi(QWidget *GearParameterWidget)
    {
        GearParameterWidget->setWindowTitle(QCoreApplication::translate("GearParameterWidget", "Form", nullptr));
        cancelButton->setText(QCoreApplication::translate("GearParameterWidget", "\345\217\226\346\266\210", nullptr));
        okButton->setText(QCoreApplication::translate("GearParameterWidget", "\347\241\256\345\256\232", nullptr));
        comboBox_7->setItemText(0, QCoreApplication::translate("GearParameterWidget", "mm", nullptr));
        comboBox_7->setItemText(1, QCoreApplication::translate("GearParameterWidget", "inch-1", nullptr));

        label_8->setText(QCoreApplication::translate("GearParameterWidget", "\346\250\241\346\225\260", nullptr));
        label_6->setText(QCoreApplication::translate("GearParameterWidget", "\345\216\213\345\212\233\350\247\222", nullptr));
        comboBox_5->setItemText(0, QCoreApplication::translate("GearParameterWidget", "deg", nullptr));
        comboBox_5->setItemText(1, QCoreApplication::translate("GearParameterWidget", "rev", nullptr));
        comboBox_5->setItemText(2, QCoreApplication::translate("GearParameterWidget", "rad", nullptr));

        label_10->setText(QCoreApplication::translate("GearParameterWidget", "\351\275\277\346\225\260", nullptr));
        comboBox_8->setItemText(0, QCoreApplication::translate("GearParameterWidget", "mm", nullptr));
        comboBox_8->setItemText(1, QCoreApplication::translate("GearParameterWidget", "cm", nullptr));
        comboBox_8->setItemText(2, QCoreApplication::translate("GearParameterWidget", "dm", nullptr));
        comboBox_8->setItemText(3, QCoreApplication::translate("GearParameterWidget", "ft", nullptr));
        comboBox_8->setItemText(4, QCoreApplication::translate("GearParameterWidget", "inch", nullptr));

        label_9->setText(QCoreApplication::translate("GearParameterWidget", "\351\275\277\345\256\275", nullptr));
        label_7->setText(QCoreApplication::translate("GearParameterWidget", "\344\270\255\345\277\203\345\215\212\345\276\204", nullptr));
        comboBox_6->setItemText(0, QCoreApplication::translate("GearParameterWidget", "mm", nullptr));
        comboBox_6->setItemText(1, QCoreApplication::translate("GearParameterWidget", "cm", nullptr));
        comboBox_6->setItemText(2, QCoreApplication::translate("GearParameterWidget", "dm", nullptr));
        comboBox_6->setItemText(3, QCoreApplication::translate("GearParameterWidget", "inch", nullptr));
        comboBox_6->setItemText(4, QCoreApplication::translate("GearParameterWidget", "ft", nullptr));

        label->setText(QCoreApplication::translate("GearParameterWidget", "\351\275\277\350\275\256\345\220\215\347\247\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GearParameterWidget: public Ui_GearParameterWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEARPARAMETERWIDGET_H
