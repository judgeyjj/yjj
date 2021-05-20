#include "registwidget.h"
#include "ui_registwidget.h"

registWidget::registWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::registWidget)
{
    ui->setupUi(this);
}
void registWidget::on_returnButton_clicked(){
    emit display(0);
}
registWidget::~registWidget()
{
    delete ui;
}
