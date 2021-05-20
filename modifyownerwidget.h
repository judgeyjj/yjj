#ifndef MODIFYOWNERWIDGET_H
#define MODIFYOWNERWIDGET_H

#include <QWidget>

namespace Ui {
class modifyOwnerWidget;
}

class modifyOwnerWidget : public QWidget
{
    Q_OBJECT

public:
    explicit modifyOwnerWidget(QWidget *parent = nullptr);
    ~modifyOwnerWidget();

private:
    Ui::modifyOwnerWidget *ui;
signals:
    void display(int number);
private slots:
    void on_returnButton_clicked();
};

#endif // MODIFYOWNERWIDGET_H
