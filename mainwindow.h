#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include <QStackedWidget>

#include <map>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_listWidget_itemClicked(QListWidgetItem *item);

private:
    void connectWidgets(const std::map<QString, size_t>&);
    std::map<QString, size_t> generateMenuAssocs();
    Ui::MainWindow *ui;

    std::map<QString, size_t> menuAssocs;
};
#endif // MAINWINDOW_H
