/********************************************************************************
** Form generated from reading UI file 'bearingparameterwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEARINGPARAMETERWIDGET_H
#define UI_BEARINGPARAMETERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BearingParameterWidget
{
public:
    QLabel *label_2;
    QLabel *label_5;
    QPushButton *confirmButton;
    QLabel *label_7;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_4;
    QComboBox *comboBox;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QTextEdit *textEdit;
    QPushButton *cancelButton;

    void setupUi(QWidget *BearingParameterWidget)
    {
        if (BearingParameterWidget->objectName().isEmpty())
            BearingParameterWidget->setObjectName(QString::fromUtf8("BearingParameterWidget"));
        BearingParameterWidget->resize(484, 458);
        label_2 = new QLabel(BearingParameterWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 90, 72, 15));
        label_5 = new QLabel(BearingParameterWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 240, 72, 15));
        confirmButton = new QPushButton(BearingParameterWidget);
        confirmButton->setObjectName(QString::fromUtf8("confirmButton"));
        confirmButton->setGeometry(QRect(190, 360, 93, 28));
        label_7 = new QLabel(BearingParameterWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(330, 190, 72, 15));
        label = new QLabel(BearingParameterWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 40, 111, 16));
        lineEdit_2 = new QLineEdit(BearingParameterWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(190, 90, 113, 21));
        lineEdit = new QLineEdit(BearingParameterWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(190, 40, 231, 21));
        lineEdit_4 = new QLineEdit(BearingParameterWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(190, 190, 113, 21));
        comboBox = new QComboBox(BearingParameterWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(330, 90, 87, 22));
        label_6 = new QLabel(BearingParameterWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(330, 140, 72, 15));
        label_3 = new QLabel(BearingParameterWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 140, 101, 16));
        label_4 = new QLabel(BearingParameterWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 190, 101, 16));
        lineEdit_3 = new QLineEdit(BearingParameterWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(190, 140, 113, 21));
        textEdit = new QTextEdit(BearingParameterWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(190, 240, 211, 87));
        cancelButton = new QPushButton(BearingParameterWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(310, 360, 93, 28));

        retranslateUi(BearingParameterWidget);

        QMetaObject::connectSlotsByName(BearingParameterWidget);
    } // setupUi

    void retranslateUi(QWidget *BearingParameterWidget)
    {
        BearingParameterWidget->setWindowTitle(QCoreApplication::translate("BearingParameterWidget", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("BearingParameterWidget", "\351\225\277\345\272\246\357\274\232(L)", nullptr));
        label_5->setText(QCoreApplication::translate("BearingParameterWidget", "\346\217\217\350\277\260\357\274\232(P)", nullptr));
        confirmButton->setText(QCoreApplication::translate("BearingParameterWidget", "\347\241\256\345\256\232", nullptr));
        label_7->setText(QCoreApplication::translate("BearingParameterWidget", "mm", nullptr));
        label->setText(QCoreApplication::translate("BearingParameterWidget", "\350\275\264\345\220\215\347\247\260\357\274\232(N)", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("BearingParameterWidget", "mm", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("BearingParameterWidget", "dm", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("BearingParameterWidget", "cm", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("BearingParameterWidget", "in", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("BearingParameterWidget", "inch", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("BearingParameterWidget", "m", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("BearingParameterWidget", "metre", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("BearingParameterWidget", "yd", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("BearingParameterWidget", "feet", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("BearingParameterWidget", "ft", nullptr));

        label_6->setText(QCoreApplication::translate("BearingParameterWidget", "mm", nullptr));
        label_3->setText(QCoreApplication::translate("BearingParameterWidget", "\345\205\254\347\247\260\345\244\226\345\276\204\357\274\232(D)", nullptr));
        label_4->setText(QCoreApplication::translate("BearingParameterWidget", "\345\205\254\347\247\260\345\255\224\345\276\204\357\274\232(B)", nullptr));
        cancelButton->setText(QCoreApplication::translate("BearingParameterWidget", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BearingParameterWidget: public Ui_BearingParameterWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEARINGPARAMETERWIDGET_H
