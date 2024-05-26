#ifndef HP_RECTANGLE_H
#define HP_RECTANGLE_H

#include <QWidget>
#include "character.h"
#include "skill.h"
#include "battle.h"



class RectWidget : public QWidget
{
private:
    Character *player;
    int value;
public:
    RectWidget(QWidget *parent = nullptr) : QWidget(parent);
    void setValue();

protected:
    void paintEvent(QPaintEvent *event) override;



};






#endif // HP_RECTANGLE_H
