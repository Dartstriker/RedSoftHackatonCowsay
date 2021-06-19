#ifndef FORM01_TEST_H
#define FORM01_TEST_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Form; }
QT_END_NAMESPACE

class form01_test : public QWidget
{
    Q_OBJECT

public:
    form01_test(QWidget *parent = nullptr);
    ~form01_test();

private:
    Ui::Form *ui;
};

#endif // FORM01_TEST_H
