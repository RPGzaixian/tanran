#include "mywidget.h"
#include "ui_mywidget.h"
#include <QPushButton>
#include "HP_rectangle.cpp"
#include "true_false.h"
#include "t_f.h"
#include <thread>
mywidget::mywidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::mywidget)
{
    player = new Character("Player", 100, 10,200);
    enemy = new Character("Enemy", 80, 8,200);
    skill1 = new Skill("Skill1", 20,50);
    skill2 = new Skill("Skill2", 30,60);

    battle = new Battle(player, enemy);

    // playerHP = new RectWidget(parent);

    ui->setupUi(this);
    this->ui->pushButton_4->setStyleSheet("background-color: red; color: white;");
    this->ui->pushButton_4->setFixedSize(270*player->HP_percent(),20);

    this->ui->pushButton_5->setStyleSheet("background-color: red; color: white;");
    this->ui->pushButton_5->setFixedSize(270*enemy->HP_percent(),20);

    this->ui->pushButton_6->setStyleSheet("background-color: blue; color: white;");
    this->ui->pushButton_6->setFixedSize(270*player->MP_percent(),20);

    this->ui->pushButton_7->setStyleSheet("background-color: blue; color: white;");
    this->ui->pushButton_7->setFixedSize(270*enemy->MP_percent(),20);

    this->ui->label_5->setText(QString::number(this->battle->player->health));
    this->ui->label_6->setText(QString::number(this->battle->enemy->health));

    this->ui->label_7->setText(QString::number(this->battle->player->MP));
    this->ui->label_8->setText(QString::number(this->battle->player->MP));


}

mywidget::~mywidget()
{
    delete ui;
}

void mywidget::on_pushButton_clicked()
{
    battle->useSkill(skill1);
    this->ui->pushButton_5->setFixedSize(270*enemy->HP_percent(),20);
    this->ui->label_6->setText(QString::number(this->battle->enemy->health));
    battle->player->MP_recovery();
    this->ui->label_7->setText(QString::number(this->battle->player->MP));
    this->ui->pushButton_6->setFixedSize(270*player->MP_percent(),20);

    if(this->battle->gameover())
    {
        if(this->battle->enemy->health == 0)
        {
            true_false *dialog = new true_false(this); // 创建 DialogWindow 实例
            dialog->show(); // 显示弹出窗口
        }

        else if(this->battle->player->health == 0)
        {
            T_F *dia = new T_F(this);
            dia->show();
        }
    }
    battle->enemy->attack(player);

    this->onTriggerButtonClicked();
    if(this->battle->player->health == 0)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    }

    if(this->battle->gameover())
    {
        if(this->battle->enemy->health == 0)
        {
            true_false *dialog = new true_false(this); // 创建 DialogWindow 实例
            dialog->show(); // 显示弹出窗口
        }

        else if(this->battle->player->health == 0)
        {
            T_F *dia = new T_F(this);
            dia->show();
        }
    }
}


void mywidget::on_pushButton_2_clicked()
{
    battle->useSkill(skill2);
    this->ui->pushButton_5->setFixedSize(270*enemy->HP_percent(),20);
    this->ui->label_6->setText(QString::number(this->battle->enemy->health));
    battle->player->MP_recovery();
    this->ui->label_7->setText(QString::number(this->battle->player->MP));
    this->ui->pushButton_6->setFixedSize(270*player->MP_percent(),20);

    if(this->battle->gameover())
    {
        if(this->battle->enemy->health == 0)
        {
            true_false *dialog = new true_false(this); // 创建 DialogWindow 实例
            dialog->show(); // 显示弹出窗口
        }

        else if(this->battle->player->health == 0)
        {
            T_F *dia = new T_F(this);
            dia->show();
        }
    }
     battle->enemy->attack(player);

    this->onTriggerButtonClicked();
     if(this->battle->player->health == 0)
     {
         std::this_thread::sleep_for(std::chrono::milliseconds(3000));
     }

     if(this->battle->gameover())
     {
         if(this->battle->enemy->health == 0)
         {
             true_false *dialog = new true_false(this); // 创建 DialogWindow 实例
             dialog->show(); // 显示弹出窗口
         }

         else if(this->battle->player->health == 0)
         {
             T_F *dia = new T_F(this);
             dia->show();
         }
     }
}


void mywidget::on_pushButton_3_clicked()
{
    battle->player->attack(enemy);
    this->ui->pushButton_5->setFixedSize(270*enemy->HP_percent(),20);
    this->ui->label_6->setText(QString::number(this->battle->enemy->health));
    battle->player->MP_recovery();
    this->ui->label_7->setText(QString::number(this->battle->player->MP));
    this->ui->pushButton_6->setFixedSize(270*player->MP_percent(),20);

    if(this->battle->gameover())
    {
        if(this->battle->enemy->health == 0)
        {
            true_false *dialog = new true_false(this); // 创建 DialogWindow 实例
            dialog->show(); // 显示弹出窗口
        }

        else if(this->battle->player->health == 0)
        {
            T_F *dia = new T_F(this);
            dia->show();
        }
    }
    battle->enemy->attack(player);

    this->onTriggerButtonClicked();
    if(this->battle->player->health == 0)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(3000));
    }
    if(this->battle->gameover())
    {
        if(this->battle->enemy->health == 0)
        {
            true_false *dialog = new true_false(this); // 创建 DialogWindow 实例
            dialog->show(); // 显示弹出窗口
        }

        else if(this->battle->player->health == 0)
        {
            T_F *dia = new T_F(this);
            dia->show();
        }
    }
}


void mywidget::on_pushButton_4_clicked()
{

}


void mywidget::on_pushButton_5_clicked()
{

}


void mywidget::on_pushButton_7_clicked()
{

}


void mywidget::on_pushButton_6_clicked()
{

}

void mywidget::onTriggerButtonClicked()
{
    // 禁用所有按钮，防止在三秒内按任何键
    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);

    // 设置定时器，三秒后执行缩短蓝色按钮的操作
    QTimer::singleShot(3000, this, [this]() {

        ui->pushButton_4->setFixedSize(270*player->HP_percent(),20);
        this->ui->label_5->setText(QString::number(this->battle->player->health));
        ui->pushButton->setEnabled(true);
        ui->pushButton_2->setEnabled(true);
        ui->pushButton_3->setEnabled(true);
    });
}
