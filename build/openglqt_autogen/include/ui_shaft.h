/********************************************************************************
** Form generated from reading UI file 'shaft.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHAFT_H
#define UI_SHAFT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_shaft
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QTextEdit *textEdit;
    QPushButton *confirmButton;
    QPushButton *cancelButton;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *comboBox;

    void setupUi(QWidget *shaft)
    {
        if (shaft->objectName().isEmpty())
            shaft->setObjectName(QString::fromUtf8("shaft"));
        shaft->resize(526, 556);
        label = new QLabel(shaft);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 70, 111, 16));
        label_2 = new QLabel(shaft);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 120, 72, 15));
        label_3 = new QLabel(shaft);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 170, 101, 16));
        label_4 = new QLabel(shaft);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 220, 101, 16));
        label_5 = new QLabel(shaft);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 270, 72, 15));
        lineEdit = new QLineEdit(shaft);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(190, 70, 231, 21));
        lineEdit_2 = new QLineEdit(shaft);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(190, 120, 113, 21));
        lineEdit_3 = new QLineEdit(shaft);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(190, 170, 113, 21));
        lineEdit_4 = new QLineEdit(shaft);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(190, 220, 113, 21));
        textEdit = new QTextEdit(shaft);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(190, 270, 211, 87));
        confirmButton = new QPushButton(shaft);
        confirmButton->setObjectName(QString::fromUtf8("confirmButton"));
        confirmButton->setGeometry(QRect(190, 390, 93, 28));
        cancelButton = new QPushButton(shaft);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(310, 390, 93, 28));
        label_6 = new QLabel(shaft);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(330, 170, 72, 15));
        label_7 = new QLabel(shaft);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(330, 220, 72, 15));
        comboBox = new QComboBox(shaft);
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
        comboBox->setGeometry(QRect(330, 120, 87, 22));

        retranslateUi(shaft);

        QMetaObject::connectSlotsByName(shaft);
    } // setupUi

    void retranslateUi(QWidget *shaft)
    {
        shaft->setWindowTitle(QCoreApplication::translate("shaft", "Form", nullptr));
        label->setText(QCoreApplication::translate("shaft", "\350\275\264\345\220\215\347\247\260\357\274\232(N)", nullptr));
        label_2->setText(QCoreApplication::translate("shaft", "\351\225\277\345\272\246\357\274\232(L)", nullptr));
        label_3->setText(QCoreApplication::translate("shaft", "\345\205\254\347\247\260\345\244\226\345\276\204\357\274\232(D)", nullptr));
        label_4->setText(QCoreApplication::translate("shaft", "\345\205\254\347\247\260\345\255\224\345\276\204\357\274\232(B)", nullptr));
        label_5->setText(QCoreApplication::translate("shaft", "\346\217\217\350\277\260\357\274\232(P)", nullptr));
        confirmButton->setText(QCoreApplication::translate("shaft", "\347\241\256\345\256\232", nullptr));
        cancelButton->setText(QCoreApplication::translate("shaft", "\345\217\226\346\266\210", nullptr));
        label_6->setText(QCoreApplication::translate("shaft", "mm", nullptr));
        label_7->setText(QCoreApplication::translate("shaft", "mm", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("shaft", "mm", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("shaft", "dm", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("shaft", "cm", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("shaft", "in", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("shaft", "inch", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("shaft", "m", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("shaft", "metre", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("shaft", "yd", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("shaft", "feet", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("shaft", "ft", nullptr));

    } // retranslateUi

};

namespace Ui {
    class shaft: public Ui_shaft {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHAFT_H
