#include "addownerwidget.h"
#include "ui_addownerwidget.h"

addOwnerWidget::addOwnerWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addOwnerWidget)
{
    ui->setupUi(this);

}
void addOwnerWidget::on_returnButton_clicked(){
    emit display(0);
}
addOwnerWidget::~addOwnerWidget()
{
    delete ui;
}
