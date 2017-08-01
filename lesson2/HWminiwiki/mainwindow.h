#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QFileDialog>
#include<QImage>
#include<QString>
#include<QTextStream>
#include<QMessageBox>
#include"content.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void on_pushButton_go_clicked();

    void on_pushButton_clear_clicked();

private:
    Ui::MainWindow *ui;
    content *Content;


};

#endif // MAINWINDOW_H
