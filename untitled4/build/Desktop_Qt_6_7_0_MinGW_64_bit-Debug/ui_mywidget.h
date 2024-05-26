/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mywidget
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QWidget *mywidget)
    {
        if (mywidget->objectName().isEmpty())
            mywidget->setObjectName("mywidget");
        mywidget->resize(800, 600);
        pushButton = new QPushButton(mywidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 480, 111, 51));
        pushButton_2 = new QPushButton(mywidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(210, 480, 111, 51));
        pushButton_3 = new QPushButton(mywidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(370, 480, 101, 51));
        label = new QLabel(mywidget);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 40, 171, 21));
        label_2 = new QLabel(mywidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(410, 35, 201, 31));
        pushButton_4 = new QPushButton(mywidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(120, 40, 231, 18));
        pushButton_5 = new QPushButton(mywidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(500, 40, 231, 18));
        label_3 = new QLabel(mywidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 90, 141, 21));
        label_4 = new QLabel(mywidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(410, 90, 211, 16));
        pushButton_6 = new QPushButton(mywidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(120, 90, 231, 18));
        pushButton_7 = new QPushButton(mywidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(500, 90, 231, 18));
        label_5 = new QLabel(mywidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(120, 20, 40, 12));
        label_6 = new QLabel(mywidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(500, 20, 40, 12));
        label_7 = new QLabel(mywidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(120, 70, 40, 16));
        label_8 = new QLabel(mywidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(500, 70, 40, 16));

        retranslateUi(mywidget);

        QMetaObject::connectSlotsByName(mywidget);
    } // setupUi

    void retranslateUi(QWidget *mywidget)
    {
        mywidget->setWindowTitle(QCoreApplication::translate("mywidget", "mywidget", nullptr));
        pushButton->setText(QCoreApplication::translate("mywidget", "skill1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("mywidget", "skill2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("mywidget", "attack", nullptr));
        label->setText(QCoreApplication::translate("mywidget", "player's HP", nullptr));
        label_2->setText(QCoreApplication::translate("mywidget", "enemy's HP", nullptr));
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        label_3->setText(QCoreApplication::translate("mywidget", "player's MP", nullptr));
        label_4->setText(QCoreApplication::translate("mywidget", "enemy's MP", nullptr));
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        label_5->setText(QCoreApplication::translate("mywidget", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("mywidget", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("mywidget", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("mywidget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mywidget: public Ui_mywidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
