#ifndef SHAFTPARAMETERWIDGET_H
#define SHAFTPARAMETERWIDGET_H

#include <QWidget>

namespace Ui {
class ShaftParameterWidget;
}

class ShaftParameterWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ShaftParameterWidget(QWidget *parent = nullptr);
    ~ShaftParameterWidget();

    QMap<QString, QString> getShaftParameter() const;
    void setShaftParameter(const QMap<QString, QString> &parameters);

    QString getText1() const;
    int8_t getText2() const;
    QString getText3() const;
    QString getText4() const;
    QString getText5() const;
    int8_t getText6() const;
    QString getText7() const;
    QString getText8() const;
    QString getText9() const;
    QString getText10() const;
    QString getText11() const;
    QString getText12() const;

    QString getHostGearName() const;
    QString getGuestGearName() const;

private slots:
    void on_okButton_clicked();

    void on_cancelButton_clicked();

signals:
    void accepted();
    void rejected();

private:
    Ui::ShaftParameterWidget *ui;
};

#endif // SHAFTPARAMETERWIDGET_H
