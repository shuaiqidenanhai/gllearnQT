#ifndef BEARINGPARAMETERWIDGET_H
#define BEARINGPARAMETERWIDGET_H

#include <QWidget>

namespace Ui {
class BearingParameterWidget;
}

class BearingParameterWidget : public QWidget
{
    Q_OBJECT

public:
    explicit BearingParameterWidget(QWidget *parent = nullptr);
    ~BearingParameterWidget();

    QMap<QString, QString> getBearingParameter() const;
    void setBearingParameter(const QMap<QString, QString> &parameters);

    QString getShaftName() const;

private slots:
    void on_cancelButton_clicked();
    void on_confirmButton_clicked();

signals:
    void accepted();
    void rejected();

private:
    Ui::BearingParameterWidget *ui;
};

#endif // BEARINGPARAMETERWIDGET_H
