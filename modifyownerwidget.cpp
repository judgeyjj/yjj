#include "modifyownerwidget.h"
#include "ui_modifyownerwidget.h"

modifyOwnerWidget::modifyOwnerWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::modifyOwnerWidget)
{
    ui->setupUi(this);
}
void modifyOwnerWidget::on_returnButton_clicked(){
    emit display(0);
}
modifyOwnerWidget::~modifyOwnerWidget()
{
    delete ui;
}
