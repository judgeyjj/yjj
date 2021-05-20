#ifndef SORTWIDGET_H
#define SORTWIDGET_H

#include <QWidget>

namespace Ui {
class sortWidget;
}

class sortWidget : public QWidget
{
    Q_OBJECT

public:
    explicit sortWidget(QWidget *parent = nullptr);
    ~sortWidget();

private:
    Ui::sortWidget *ui;
signals:
    void display(int number);
private slots:
    void on_returnButton_clicked();
};

#endif // SORTWIDGET_H
