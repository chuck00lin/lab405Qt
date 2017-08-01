/********************************************************************************
** Form generated from reading UI file 'content.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTENT_H
#define UI_CONTENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_content
{
public:
    QLabel *label;
    QTextBrowser *textBrowser;
    QLabel *label_picture;

    void setupUi(QDialog *content)
    {
        if (content->objectName().isEmpty())
            content->setObjectName(QStringLiteral("content"));
        content->resize(400, 300);
        label = new QLabel(content);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 101, 71));
        textBrowser = new QTextBrowser(content);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(120, 60, 256, 192));
        label_picture = new QLabel(content);
        label_picture->setObjectName(QStringLiteral("label_picture"));
        label_picture->setGeometry(QRect(20, 140, 91, 101));

        retranslateUi(content);

        QMetaObject::connectSlotsByName(content);
    } // setupUi

    void retranslateUi(QDialog *content)
    {
        content->setWindowTitle(QApplication::translate("content", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_picture->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class content: public Ui_content {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTENT_H
