#ifndef ADDOWNERWIDGET_H
#define ADDOWNERWIDGET_H

#include <QWidget>

namespace Ui {
class addOwnerWidget;
}

class addOwnerWidget : public QWidget
{
    Q_OBJECT

public:
    explicit addOwnerWidget(QWidget *parent = nullptr);
    ~addOwnerWidget();

private:
    Ui::addOwnerWidget *ui;
signals:
    void display(int number);
private slots:
    void on_returnButton_clicked();
};

#endif // ADDOWNERWIDGET_H
