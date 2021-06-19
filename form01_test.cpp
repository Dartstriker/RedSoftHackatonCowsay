#include "form01_test.h"
#include "ui_form01_test.h"

form01_test::form01_test(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form)
{
    ui->setupUi(this);
}

form01_test::~form01_test()
{
    delete ui;
}
