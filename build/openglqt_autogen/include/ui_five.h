/********************************************************************************
** Form generated from reading UI file 'five.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIVE_H
#define UI_FIVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_five
{
public:
    QLabel *label;
    QLabel *label_2;
    QFrame *frame;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QFrame *frame_2;
    QRadioButton *radioButton_4;
    QComboBox *comboBox;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QLabel *label_4;
    QFrame *frame_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QComboBox *comboBox_3;
    QLabel *label_9;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *five)
    {
        if (five->objectName().isEmpty())
            five->setObjectName(QString::fromUtf8("five"));
        five->resize(882, 741);
        label = new QLabel(five);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 90, 72, 15));
        label_2 = new QLabel(five);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 270, 72, 15));
        frame = new QFrame(five);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(340, 80, 411, 131));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        radioButton = new QRadioButton(frame);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(20, 30, 171, 19));
        radioButton_2 = new QRadioButton(frame);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(20, 70, 131, 19));
        radioButton_3 = new QRadioButton(frame);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(20, 100, 151, 19));
        frame_2 = new QFrame(five);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(120, 300, 631, 80));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        radioButton_4 = new QRadioButton(frame_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(30, 10, 271, 19));
        comboBox = new QComboBox(frame_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(40, 50, 87, 22));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(280, 50, 72, 15));
        comboBox_2 = new QComboBox(frame_2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(410, 40, 87, 22));
        label_4 = new QLabel(five);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(120, 460, 72, 15));
        frame_3 = new QFrame(five);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(120, 500, 651, 101));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 20, 191, 16));
        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 70, 141, 16));
        label_7 = new QLabel(frame_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(310, 30, 72, 15));
        label_8 = new QLabel(frame_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(310, 70, 72, 15));
        comboBox_3 = new QComboBox(frame_3);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(460, 20, 87, 22));
        label_9 = new QLabel(frame_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(460, 70, 72, 15));
        pushButton = new QPushButton(five);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 650, 93, 28));
        pushButton_2 = new QPushButton(five);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 650, 93, 28));
        pushButton_3 = new QPushButton(five);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(430, 650, 93, 28));
        pushButton_4 = new QPushButton(five);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(610, 650, 93, 28));

        retranslateUi(five);

        QMetaObject::connectSlotsByName(five);
    } // setupUi

    void retranslateUi(QWidget *five)
    {
        five->setWindowTitle(QCoreApplication::translate("five", "Form", nullptr));
        label->setText(QCoreApplication::translate("five", "\350\264\250\351\207\217\346\240\207\345\207\206\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("five", "\347\262\276\345\272\246\347\255\211\347\272\247\357\274\232", nullptr));
        radioButton->setText(QCoreApplication::translate("five", "AGMA 2000-A88", nullptr));
        radioButton_2->setText(QCoreApplication::translate("five", "ISO 1328:1995", nullptr));
        radioButton_3->setText(QCoreApplication::translate("five", "JIS B 1702-1976", nullptr));
        radioButton_4->setText(QCoreApplication::translate("five", "\344\270\272\346\257\217\344\270\252\351\275\277\350\275\256\346\214\207\345\256\232\344\270\215\345\220\214\347\232\204\347\262\276\345\272\246\347\255\211\347\272\247", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("five", "\351\275\277\350\275\256\347\273\2041", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("five", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));

        label_3->setText(QCoreApplication::translate("five", "TextLabel", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("five", "0", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("five", "1", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("five", "2", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("five", "3", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("five", "4", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("five", "5", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("five", "6", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("five", "7", nullptr));
        comboBox_2->setItemText(8, QCoreApplication::translate("five", "8", nullptr));
        comboBox_2->setItemText(9, QCoreApplication::translate("five", "9", nullptr));
        comboBox_2->setItemText(10, QCoreApplication::translate("five", "10", nullptr));
        comboBox_2->setItemText(11, QCoreApplication::translate("five", "11", nullptr));
        comboBox_2->setItemText(12, QCoreApplication::translate("five", "12", nullptr));

        label_4->setText(QCoreApplication::translate("five", "\345\260\217\351\275\277\350\275\256\345\205\254\345\267\256\347\232\204\344\274\260\347\256\227\345\200\274\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("five", "\350\256\270\347\224\250\345\215\225\351\275\277\351\275\277\350\267\235\345\201\217\345\267\256\357\274\214f-pt\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("five", "\350\256\270\347\224\250\351\275\277\350\267\235\347\264\257\350\256\241\345\205\254\345\267\256\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("five", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("five", "TextLabel", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("five", "um", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("five", "cm", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("five", "m", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("five", "ft", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("five", "feet", nullptr));
        comboBox_3->setItemText(5, QCoreApplication::translate("five", "inch", nullptr));
        comboBox_3->setItemText(6, QCoreApplication::translate("five", "in", nullptr));
        comboBox_3->setItemText(7, QCoreApplication::translate("five", "mm", nullptr));

        label_9->setText(QCoreApplication::translate("five", "um", nullptr));
        pushButton->setText(QCoreApplication::translate("five", "\345\217\226\346\266\210", nullptr));
        pushButton_2->setText(QCoreApplication::translate("five", "\344\270\212\344\270\200\344\270\252", nullptr));
        pushButton_3->setText(QCoreApplication::translate("five", "\344\270\213\344\270\200\344\270\252", nullptr));
        pushButton_4->setText(QCoreApplication::translate("five", "\345\256\214\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class five: public Ui_five {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIVE_H
