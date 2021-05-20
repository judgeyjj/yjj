#include "mainwidget.h"
#include "ui_mainwidget.h"

mainWidget::mainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::mainWidget)
{
    ui->setupUi(this);


    menuwidget = new menuWidget;
    addownerwidget = new addOwnerWidget;
    selectwidget = new selectWidget;
    modifyownerwidget = new modifyOwnerWidget;
    sortwidget = new sortWidget;
    registwidget = new registWidget;
    stackLayout = new QStackedLayout;


    stackLayout->addWidget(menuwidget);
    stackLayout->addWidget(addownerwidget);
    stackLayout->addWidget(selectwidget);
    stackLayout->addWidget(modifyownerwidget);
    stackLayout->addWidget(sortwidget);
    stackLayout->addWidget(registwidget);

    setLayout(stackLayout);


}

mainWidget::~mainWidget()
{
    delete ui;
}

