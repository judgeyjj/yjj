#include "menuwidget.h"
#include "ui_menuwidget.h"

menuWidget::menuWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menuWidget)
{
    ui->setupUi(this);
}

menuWidget::~menuWidget()
{
    delete ui;
}
void menuWidget::on_addButton_clicked(){
    emit display(1);
}
void menuWidget::on_modifyOwnerButton_clicked(){
    emit display(2);
}
void menuWidget::on_modifyMyButton_clicked(){
    emit display(3);
}
void menuWidget::on_exitButton_clicked(){
    QApplication::exit();
}
