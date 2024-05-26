#include "true_false.h"
#include "ui_true_false.h"

true_false::true_false(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::true_false)
{
    ui->setupUi(this);
}

true_false::~true_false()
{
    delete ui;
}

void true_false::on_pushButton_clicked()
{

}


void true_false::on_label_linkActivated(const QString &link)
{

}

