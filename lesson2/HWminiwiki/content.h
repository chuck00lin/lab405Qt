#ifndef CONTENT_H
#define CONTENT_H

#include <QDialog>
#include<QFileDialog>
#include<QImage>
#include<QString>
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
namespace Ui {
class content;
}

class content : public QDialog
{
    Q_OBJECT

public:
    explicit content(QWidget *parent = 0);
    int findkeyword(QString skey);
    ~content();

private slots:


private:
    Ui::content *ui;
    QPixmap pixmap;
    QImage *Image;
};

#endif // CONTENT_H
