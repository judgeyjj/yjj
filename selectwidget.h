#ifndef SELECTWIDGET_H
#define SELECTWIDGET_H

#include <QWidget>

namespace Ui {
class selectWidget;
}

class selectWidget : public QWidget
{
    Q_OBJECT

public:
    explicit selectWidget(QWidget *parent = nullptr);
    ~selectWidget();

private:
    Ui::selectWidget *ui;
signals:
    void display(int number);
private slots:
    void on_returnButton_clicked();
};

#endif // SELECTWIDGET_H
