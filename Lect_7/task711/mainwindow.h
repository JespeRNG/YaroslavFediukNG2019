#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QString new_res;

private:
    Ui::MainWindow *ui;
    double num_x, num_y;

private slots:
    void digits_numbers();
    void on_pushButton_dot_clicked();
    void actions();
    void on_pushButton_equals_clicked();
    void on_pushButton_AC_clicked();
};

#endif // MAINWINDOW_H
