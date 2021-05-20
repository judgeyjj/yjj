#ifndef REGISTWIDGET_H
#define REGISTWIDGET_H

#include <QWidget>

namespace Ui {
class registWidget;
}

class registWidget : public QWidget
{
    Q_OBJECT

public:
    explicit registWidget(QWidget *parent = nullptr);
    ~registWidget();

private:
    Ui::registWidget *ui;
signals:
    void display(int number);
private slots:
    void on_returnButton_clicked();
};

#endif // REGISTWIDGET_H
