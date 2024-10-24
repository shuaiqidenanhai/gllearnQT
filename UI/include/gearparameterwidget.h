#ifndef GEARPARAMETERWIDGET_H
#define GEARPARAMETERWIDGET_H

#include <QWidget>
#include <QMap>
#include <QDialog>
namespace Ui {
class GearParameterWidget;
}

class GearParameterWidget : public QWidget
{
    Q_OBJECT

public:
    explicit GearParameterWidget(QWidget *parent = nullptr);
    ~GearParameterWidget();

    QMap<QString, QString> getGearParameter() const;
    void setGearParameter(const QMap<QString, QString> &parameters);
    QString getText1() const;
    int8_t getText2() const;
    QString getText3() const;
    QString getText4() const;
    QString getText5() const;
    QString getText6() const;
    QString getText7() const;
    QString getText8() const;
    QString getText9() const;
    QString getGearName() const;

// protected:
//     void focusInEvent(QFocusEvent *event) override {
//         if (event->gotFocus()) {
//             QLineEdit *focusedLineEdit = qobject_cast<QLineEdit *>(focusWidget());
//             if (focusedLineEdit) {
//                 focusedLineEdit->setFocus();
//             }
//         }
//         QDialog::focusInEvent(event);
//     }

private slots:
    void on_okButton_clicked();

    void on_cancelButton_clicked();

signals:
    void accepted();
    void rejected();

private:
    Ui::GearParameterWidget *ui;
};

#endif // GEARPARAMETERWIDGET_H
