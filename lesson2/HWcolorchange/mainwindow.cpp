#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("gallery");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_open_clicked()
{
    image= new QImage();
    QString Filepath=QFileDialog::getOpenFileName(this,tr("open file"),"/",tr("images(*.png *.jpg)"));
    image->load(Filepath);
    pixmap= QPixmap::fromImage(*image);
    ui->label->setPixmap(pixmap.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio));
}

void MainWindow::on_pushButton_change_clicked()
{
    QImage test=*image;
    QRgb val;
    QColor oldcolor;
    for(int x=0; x<test.width();x++){
        for(int y=0;y<test.height();y++){
            oldcolor=QColor(test.pixel(x,y));
            int ave=(oldcolor.red()+oldcolor.green()+oldcolor.blue())/3;
            val=qRgb(ave,ave,ave);
            test.setPixel(x,y,val);
        }
    }
    *image=test;
    ui->label->setFixedSize(test.size());
    ui->label->setPixmap(QPixmap::fromImage(test));
    //statusBar()->showMessage(tr("gray scale is done"));
}
