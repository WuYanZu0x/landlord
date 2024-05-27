#ifndef ROBOT_H
#define ROBOT_H

#include "player.h"
#include <QObject>

class Robot : public Player
{
    Q_OBJECT
public:
    using Player::Player;//继承父类构造函数
    explicit Robot(QObject *parent = nullptr);

    void prepareCallLord() override;
    void preparePlayHand() override;

    void thinkCallLord() override;
    void thinkPlayHand() override;
};

#endif // ROBOT_H
