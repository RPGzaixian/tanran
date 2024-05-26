/********************************************************************************
** Form generated from reading UI file 'true_false.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRUE_FALSE_H
#define UI_TRUE_FALSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_true_false
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *true_false)
    {
        if (true_false->objectName().isEmpty())
            true_false->setObjectName("true_false");
        true_false->resize(400, 300);
        pushButton = new QPushButton(true_false);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 180, 80, 18));
        label = new QLabel(true_false);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 70, 301, 61));

        retranslateUi(true_false);

        QMetaObject::connectSlotsByName(true_false);
    } // setupUi

    void retranslateUi(QDialog *true_false)
    {
        true_false->setWindowTitle(QCoreApplication::translate("true_false", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("true_false", "click here!", nullptr));
        label->setText(QCoreApplication::translate("true_false", "You win! please return to the main screen!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class true_false: public Ui_true_false {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRUE_FALSE_H
