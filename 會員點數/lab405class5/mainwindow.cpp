#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QImage>
#include<QFileDialog>
#include<QTextStream>
#include<QStandardItemModel>
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("QT-5");
    QFont font("Monaco",20,QFont::Bold);
    QFont font1("Monaco",12,QFont::Bold);
    ui->pushButton_0->setFont(font);
    ui->pushButton_0->setStyleSheet("background-color:green;color:white;");
    ui->pushButton_1->setFont(font);
    ui->pushButton_1->setStyleSheet("background-color:green;color:white;");
    ui->pushButton_2->setFont(font);
    ui->pushButton_2->setStyleSheet("background-color:green;color:white;");
    ui->pushButton_3->setFont(font);
    ui->pushButton_3->setStyleSheet("background-color:green;color:white;");
    ui->pushButton_4->setFont(font);
    ui->pushButton_4->setStyleSheet("background-color:green;color:white;");
    ui->pushButton_5->setFont(font);
    ui->pushButton_5->setStyleSheet("background-color:green;color:white;");
    ui->pushButton_6->setFont(font);
    ui->pushButton_6->setStyleSheet("background-color:green;color:white;");
    ui->pushButton_7->setFont(font);
    ui->pushButton_7->setStyleSheet("background-color:green;color:white;");
    ui->pushButton_8->setFont(font);
    ui->pushButton_8->setStyleSheet("background-color:green;color:white;");
    ui->pushButton_9->setFont(font);
    ui->pushButton_9->setStyleSheet("background-color:green;color:white;");
    ui->pushButton_back->setFont(font);
    ui->pushButton_back->setStyleSheet("background-color:green;color:white;");
    ui->pushButton_OK->setFont(font);
    ui->pushButton_OK->setStyleSheet("background-color:green;color:white;");
    ui->label_phone->setFont(font1);
    ui->label_phone->setStyleSheet("background-color:green;color:blue;");
    ui->label_text->setFont(font1);
    ui->label_text->setStyleSheet("background-color:green;color:yellow;");


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_1_clicked()
{
    if(phonenum.length()<10)
    {
        phonenum+="1";
        ui->label_phone->setText(phonenum);
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    if(phonenum.length()<10)
    {
        phonenum+="2";
        ui->label_phone->setText(phonenum);
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    if(phonenum.length()<10)
    {
        phonenum+="3";
        ui->label_phone->setText(phonenum);
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    if(phonenum.length()<10)
    {
        phonenum+="4";
        ui->label_phone->setText(phonenum);
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    if(phonenum.length()<10)
    {
        phonenum+="5";
        ui->label_phone->setText(phonenum);
    }
}

void MainWindow::on_pushButton_6_clicked()
{
    if(phonenum.length()<10)
    {
        phonenum+="6";
        ui->label_phone->setText(phonenum);
    }
}

void MainWindow::on_pushButton_7_clicked()
{
    if(phonenum.length()<10)
    {
        phonenum+="7";
        ui->label_phone->setText(phonenum);
    }
}

void MainWindow::on_pushButton_8_clicked()
{
    if(phonenum.length()<10)
    {
        phonenum+="8";
        ui->label_phone->setText(phonenum);
    }
}

void MainWindow::on_pushButton_9_clicked()
{
    if(phonenum.length()<10)
    {
        phonenum+="9";
        ui->label_phone->setText(phonenum);
    }
}

void MainWindow::on_pushButton_back_clicked()
{
    if(phonenum.length()>2)
    {
        phonenum=phonenum.remove(phonenum.length()-2,phonenum.length()-1);
        ui->label_phone->setText(phonenum);
    }
    else
    {
        phonenum="";
        ui->label_phone->setText(" ");
    }
}

void MainWindow::on_pushButton_0_clicked()
{
    if(phonenum.length()<10)
    {
        phonenum+="0";
        ui->label_phone->setText(phonenum);
    }
}

void MainWindow::on_pushButton_OK_clicked()
{
    FILE *p_oldFile=NULL;
        p_oldFile = fopen( "C:/Users/Yang/Desktop/HW.txt","r" );
        if( NULL == p_oldFile )
        {
            QMessageBox::warning(0,0,"no member's file exists");
        }
        else
        {
            ui->label->clear();
            ui->label_2->clear();
            ui->label_3->clear();
            ui->label_4->clear();
            ui->label_5->clear();
            ui->label_6->clear();
            ui->label_7->clear();
            ui->label_8->clear();
            ui->label_9->clear();
            QPixmap icon("C:/Users/Yang/Documents/lab405class5/apple.png");
            int totalmember=0;
              fscanf(p_oldFile, "%i",&totalmember);
              //ui->textEdit->setPlainText( QString::number(totalmember));
            int **p_memberinfo=NULL;//new a array to store info
            p_memberinfo= new int *[totalmember];//depth =totalmember
            for(int i = 0; i < totalmember; i++)
                 p_memberinfo[i] = new int[2]; //width=2
              for(int i=0;i<totalmember;i++)
              {
                  int phone=0;
                  int point;
                  //fscanf(p_oldFile, "%i",&phone);//because the 0(i took out the 0 in text)
                  fscanf(p_oldFile, "%i",&phone);//912XXXXXX
                  fscanf(p_oldFile, "%i",&point);//number of points
                  p_memberinfo[i][0]=phone;
                  p_memberinfo[i][1]=point;
                  //char char_phone[9];
                  // sprintf(char_phone, "%d", phone);
                  QString finalpoint;
                  finalpoint=QString::number(phone);
                  finalpoint.replace(0,1,QString("09"));
                  if(finalpoint==phonenum)
                  {
                      int loop=1;
                      while(loop==1)
                      {
                          ui->textEdit->setPlainText(finalpoint);
                          int setlabel=0;
                          setlabel=p_memberinfo[i][1];
                          switch (setlabel) {
                          case 1:
                              ui->label->setPixmap(icon);
                              break;
                          case 2:
                              ui->label->setPixmap(icon);
                              ui->label_2->setPixmap(icon);
                              break;
                          case 3:
                              ui->label->setPixmap(icon);
                              ui->label_2->setPixmap(icon);
                              ui->label_3->setPixmap(icon);
                              break;
                          case 4:
                              ui->label->setPixmap(icon);
                              ui->label_2->setPixmap(icon);
                              ui->label_3->setPixmap(icon);
                              ui->label_4->setPixmap(icon);
                              break;
                          case 5:
                              ui->label->setPixmap(icon);
                              ui->label_2->setPixmap(icon);
                              ui->label_3->setPixmap(icon);
                              ui->label_4->setPixmap(icon);
                              ui->label_5->setPixmap(icon);
                              break;
                          case 6:
                              ui->label->setPixmap(icon);
                              ui->label_2->setPixmap(icon);
                              ui->label_3->setPixmap(icon);
                              ui->label_4->setPixmap(icon);
                              ui->label_5->setPixmap(icon);
                              ui->label_6->setPixmap(icon);
                              break;
                          case 7:
                              ui->label->setPixmap(icon);
                              ui->label_2->setPixmap(icon);
                              ui->label_3->setPixmap(icon);
                              ui->label_4->setPixmap(icon);
                              ui->label_5->setPixmap(icon);
                              ui->label_6->setPixmap(icon);
                              ui->label_7->setPixmap(icon);
                              break;
                          case 8:
                              ui->label->setPixmap(icon);
                              ui->label_2->setPixmap(icon);
                              ui->label_3->setPixmap(icon);
                              ui->label_4->setPixmap(icon);
                              ui->label_5->setPixmap(icon);
                              ui->label_6->setPixmap(icon);
                              ui->label_7->setPixmap(icon);
                              ui->label_8->setPixmap(icon);
                              break;
                          case 9:
                              ui->label->setPixmap(icon);
                              ui->label_2->setPixmap(icon);
                              ui->label_3->setPixmap(icon);
                              ui->label_4->setPixmap(icon);
                              ui->label_5->setPixmap(icon);
                              ui->label_6->setPixmap(icon);
                              ui->label_7->setPixmap(icon);
                              ui->label_8->setPixmap(icon);
                              ui->label_9->setPixmap(icon);
                              break;
                          default:
                              break;
                          }
                          QMessageBox::StandardButton reply;
                          reply=QMessageBox::question(this,"point","to add points press yes,when you done, press no",QMessageBox::Yes|QMessageBox::No);
                          if(reply==QMessageBox::Yes)
                          {
                              p_memberinfo[i][1]=setlabel+1;
                          }
                          if(reply==QMessageBox::No)
                          {
                              loop=0;
                          }
                      }
                  }
              }
              // ui->textEdit->setPlainText(QString::number(phone));
              for(int i = 0; i < totalmember; i++)
                  delete [] p_memberinfo[i];
              delete [] p_memberinfo;
              fclose(p_oldFile);

        }
}
