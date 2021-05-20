#include "sortwidget.h"
#include "ui_sortwidget.h"

sortWidget::sortWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sortWidget)
{
    ui->setupUi(this);
}
void sortWidget::on_returnButton_clicked(){
    emit display(0);
}
sortWidget::~sortWidget()
{
    delete ui;
}
