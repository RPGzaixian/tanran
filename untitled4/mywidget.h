#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include "character.h"
#include "skill.h"
#include "battle.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>


QT_BEGIN_NAMESPACE
namespace Ui {
class mywidget;
}
QT_END_NAMESPACE

class mywidget : public QWidget
{
    Q_OBJECT

public:
    mywidget(QWidget *parent = nullptr);
    ~mywidget();

private:
    Ui::mywidget *ui;
    Character *player;
    Character *enemy;
    Skill *skill1;
    Skill *skill2;
    Battle *battle;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

    void onTriggerButtonClicked();




};
#endif // MYWIDGET_H
