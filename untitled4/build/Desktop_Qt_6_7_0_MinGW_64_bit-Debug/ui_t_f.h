/********************************************************************************
** Form generated from reading UI file 't_f.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_T_F_H
#define UI_T_F_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_T_F
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *T_F)
    {
        if (T_F->objectName().isEmpty())
            T_F->setObjectName("T_F");
        T_F->resize(400, 300);
        label = new QLabel(T_F);
        label->setObjectName("label");
        label->setGeometry(QRect(79, 60, 291, 20));
        pushButton = new QPushButton(T_F);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 140, 80, 18));

        retranslateUi(T_F);

        QMetaObject::connectSlotsByName(T_F);
    } // setupUi

    void retranslateUi(QDialog *T_F)
    {
        T_F->setWindowTitle(QCoreApplication::translate("T_F", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("T_F", "You lose! please return to the main screen", nullptr));
        pushButton->setText(QCoreApplication::translate("T_F", "click here!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class T_F: public Ui_T_F {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_T_F_H
