#ifndef MENUWIDGET_H
#define MENUWIDGET_H

#include <QWidget>

namespace Ui {
class menuWidget;
}

class menuWidget : public QWidget
{
    Q_OBJECT

public:
    explicit menuWidget(QWidget *parent = nullptr);
    ~menuWidget();

private:
    Ui::menuWidget *ui;
signals:
    void display(int number);
private slots:
    void on_addButton_clicked();
    void on_modifyOwnerButton_clicked();
    void on_modifyMyButton_clicked();
    void on_exitButton_clicked();

};

#endif // MENUWIDGET_H
