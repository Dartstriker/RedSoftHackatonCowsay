#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "form01_test.h"
#include "ui_form01_test.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("RedOS Settings Manager");

    menuAssocs = generateMenuAssocs();
    connectWidgets(menuAssocs);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::connectWidgets(const std::map<QString, size_t>& menuAssocs) {
    form01_test* test = new form01_test();
    ui->stackedWidget->insertWidget(menuAssocs.at("test2"), test);
}

std::map<QString, size_t> MainWindow::generateMenuAssocs() {
    std::map<QString, size_t> result;
    auto menuSize = ui->listWidget->count();

    for (auto i = 0; i < menuSize; i++)
        result.emplace(ui->listWidget->item(i)->text(), i);

    return result;
}

void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    ui->stackedWidget->setCurrentIndex(menuAssocs.at(item->text()));
}

