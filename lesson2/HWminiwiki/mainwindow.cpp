#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("mini wiki"));
    Content = new content(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete Content;
}

void MainWindow::on_pushButton_go_clicked()
{
    QString keyword = ui->lineEdit_keyword->text();//read textbar
    //if(keywords matched)
        if(Content->findkeyword(keyword)>0)
        Content->show();
}

void MainWindow::on_pushButton_clear_clicked()
{
   ui->lineEdit_keyword->clear();
}
