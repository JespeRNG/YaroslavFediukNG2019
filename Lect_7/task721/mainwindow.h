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

private:
    Ui::MainWindow *ui;

private slots:

    void on_pushButton_toenc_clicked();
    void toencrypt();
    void todecrypt();
    void on_pushButton_todec_clicked();
};

#endif // MAINWINDOW_H
