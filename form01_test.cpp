#include "form01_test.h"
#include "ui_form01_test.h"
#include "scriptexecuter.h"

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

void form01_test::on_pushButton_released()
{
    (new ScriptExecuter())->ExecuteScriptByName();
}

