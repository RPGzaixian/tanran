#ifndef T_F_H
#define T_F_H

#include <QDialog>

namespace Ui {
class T_F;
}

class T_F : public QDialog
{
    Q_OBJECT

public:
    explicit T_F(QWidget *parent = nullptr);
    ~T_F();

private slots:
    void on_pushButton_clicked();

private:
    Ui::T_F *ui;
};

#endif // T_F_H
