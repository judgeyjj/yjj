#ifndef MAINWIDGET_H
#define MAINWIDGET_H
#include "menuwidget.h"
#include "addownerwidget.h"
#include "selectwidget.h"
#include "modifyownerwidget.h"
#include "sortwidget.h"
#include "registwidget.h"
#include <QStackedLayout>
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class mainWidget; }
QT_END_NAMESPACE

class mainWidget : public QWidget
{
    Q_OBJECT

public:
    mainWidget(QWidget *parent = nullptr);
    ~mainWidget();

private:
    Ui::mainWidget *ui;
    menuWidget *menuwidget;        //菜单窗口
    addOwnerWidget *addownerwidget;   //添加住户窗口
    selectWidget *selectwidget;    //查询窗口
    modifyOwnerWidget *modifyownerwidget;    //修改窗口
    sortWidget *sortwidget;        //排序窗口
    registWidget *registwidget;
    QStackedLayout *stackLayout;   //QStackedLayout布局
};
#endif // MAINWIDGET_H
