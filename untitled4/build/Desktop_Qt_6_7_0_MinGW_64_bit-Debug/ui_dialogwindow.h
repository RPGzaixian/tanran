/********************************************************************************
** Form generated from reading UI file 'dialogwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGWINDOW_H
#define UI_DIALOGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialogwindow
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *dialogwindow)
    {
        if (dialogwindow->objectName().isEmpty())
            dialogwindow->setObjectName("dialogwindow");
        dialogwindow->resize(400, 300);
        label = new QLabel(dialogwindow);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 40, 271, 51));
        pushButton = new QPushButton(dialogwindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 137, 80, 21));

        retranslateUi(dialogwindow);

        QMetaObject::connectSlotsByName(dialogwindow);
    } // setupUi

    void retranslateUi(QWidget *dialogwindow)
    {
        dialogwindow->setWindowTitle(QCoreApplication::translate("dialogwindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("dialogwindow", "    You win! please return to the main screen!", nullptr));
        pushButton->setText(QCoreApplication::translate("dialogwindow", "click here!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dialogwindow: public Ui_dialogwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGWINDOW_H
