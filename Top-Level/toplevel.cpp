#include "toplevel.h"
#include "ui_toplevel.h"

TopLevel::TopLevel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TopLevel)
{
    ui->setupUi(this);
}

TopLevel::~TopLevel()
{
    delete ui;
}
