#include "content.h"
#include "ui_content.h"

content::content(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::content)
{
    ui->setupUi(this);
}

content::~content()
{
    delete ui;
}
int content::findkeyword(QString skey)
{

    QString filepath="C:/Users/Yang/Documents/build-HWminiwiki-Desktop_Qt_5_9_1_MinGW_32bit-Debug/debug/"+skey+".txt";
    QString Ifilepath="C:/Users/Yang/Documents/build-HWminiwiki-Desktop_Qt_5_9_1_MinGW_32bit-Debug/debug/"+skey+".png";
    Image= new QImage();
    Image->load(Ifilepath);
    pixmap= QPixmap::fromImage(*Image);
    ui->textBrowser->clear();
    ui->label->setText(skey);
    QFile input(filepath);
    if(input.exists()){
        if(input.open(QIODevice::ReadOnly)){
            QTextStream in(&input);
            while(!in.atEnd()){
                QString line=in.readLine();

                ui->textBrowser->append(line);
            }
        }
        input.close();
        ui->label_picture->setPixmap(pixmap.scaled(ui->label_picture->width(),ui->label_picture->height(),Qt::KeepAspectRatio));
        return 1;
    }
    else{
        QMessageBox::warning(0,0,"no fruit exists");
        return 0;
    }

}
