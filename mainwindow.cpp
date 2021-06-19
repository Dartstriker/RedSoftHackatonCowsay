#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::connectWidgets() {

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
    static const std::map<QString, size_t> menuAssocs = generateMenuAssocs();
    ui->stackedWidget->setCurrentIndex(menuAssocs.at(item->text()));
}

