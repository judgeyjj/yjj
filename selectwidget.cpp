#include "selectwidget.h"
#include "ui_selectwidget.h"

selectWidget::selectWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::selectWidget)
{
    ui->setupUi(this);
}
void selectWidget::on_returnButton_clicked(){
    emit display(0);
}
selectWidget::~selectWidget()
{
    delete ui;
}
