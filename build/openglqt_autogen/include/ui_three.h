/********************************************************************************
** Form generated from reading UI file 'three.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THREE_H
#define UI_THREE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_three
{
public:
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QCheckBox *checkBox;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;

    void setupUi(QWidget *three)
    {
        if (three->objectName().isEmpty())
            three->setObjectName(QString::fromUtf8("three"));
        three->resize(929, 749);
        frame = new QFrame(three);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(70, 130, 751, 401));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 50, 72, 15));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(370, 50, 72, 15));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(200, 120, 72, 15));
        checkBox = new QCheckBox(frame);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(60, 180, 91, 19));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 250, 72, 15));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(160, 250, 113, 21));
        comboBox = new QComboBox(frame);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(300, 250, 87, 22));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(520, 50, 93, 28));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(520, 130, 93, 28));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(520, 220, 93, 28));
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(50, 310, 93, 28));
        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(210, 310, 93, 28));
        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(420, 310, 93, 28));
        pushButton_7 = new QPushButton(frame);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(540, 310, 93, 28));
        comboBox_2 = new QComboBox(frame);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(60, 120, 87, 22));
        comboBox_3 = new QComboBox(frame);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(330, 120, 87, 22));

        retranslateUi(three);

        QMetaObject::connectSlotsByName(three);
    } // setupUi

    void retranslateUi(QWidget *three)
    {
        three->setWindowTitle(QCoreApplication::translate("three", "Form", nullptr));
        label->setText(QCoreApplication::translate("three", "\351\275\277\350\275\2561", nullptr));
        label_2->setText(QCoreApplication::translate("three", "\351\275\277\350\275\2562", nullptr));
        label_3->setText(QCoreApplication::translate("three", "-->", nullptr));
        checkBox->setText(QCoreApplication::translate("three", "CheckBox", nullptr));
        label_4->setText(QCoreApplication::translate("three", "\345\225\256\345\220\210\344\270\255\345\277\203\350\267\235", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("three", "mm", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("three", "m", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("three", "cm", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("three", "dm", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("three", "inch", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("three", "in", nullptr));

        pushButton->setText(QCoreApplication::translate("three", "\346\267\273\345\212\240", nullptr));
        pushButton_2->setText(QCoreApplication::translate("three", "\346\233\277\346\215\242", nullptr));
        pushButton_3->setText(QCoreApplication::translate("three", "\345\210\240\351\231\244", nullptr));
        pushButton_4->setText(QCoreApplication::translate("three", "\345\217\226\346\266\210", nullptr));
        pushButton_5->setText(QCoreApplication::translate("three", "\345\220\216\351\200\200", nullptr));
        pushButton_6->setText(QCoreApplication::translate("three", "\344\270\213\344\270\200\344\270\252", nullptr));
        pushButton_7->setText(QCoreApplication::translate("three", "\345\256\214\346\210\220", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("three", "\345\260\217\351\275\277\350\275\256", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("three", "\345\244\247\351\275\277\350\275\256", nullptr));

        comboBox_3->setItemText(0, QCoreApplication::translate("three", "\345\244\247\351\275\277\350\275\256", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("three", "\345\260\217\351\275\277\350\275\256", nullptr));

    } // retranslateUi

};

namespace Ui {
    class three: public Ui_three {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THREE_H
