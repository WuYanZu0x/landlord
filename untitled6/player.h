#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include "cards.h"

class Player : public QObject
{
    Q_OBJECT
public:
    enum Role{Lord, Farmer};    // 角色
    enum Sex{Man, Woman};       // 性别
    enum Direction{Left, Right};    // 头像的显示方位
    enum Type{Robot, User, UnKnow}; // 玩家的类型
    explicit Player(QObject *parent = nullptr);
    explicit Player(QString name, QObject *parent = nullptr);

    //设置/获取名字
    void setName(QString name);
    QString getName();

    //设置/获取角色
    void setRole(Role role);
    Role getRole();

    //设置/获取性别
    void setSex(Sex sex);
    Sex getSex();

    ////设置/获取头像显示方位
    void setDirection(Direction direction);
    Direction getDirection();

    //设置/获取玩家类型（机器人or人类玩家）
    void setType(Type type);
    Type getType();

    //设置/获取分数
    void setScore(int score);
    int getScore();

    //设置/获取输赢状态
    void setWin(bool flag);
    bool isWin();

    //每个玩家需要知道他的上家和下家是谁
    //设置/获取上家和下家
    void setPrevPlayer(Player* player);
    void setNextPlayer(Player* player);
    Player* getPrevPlayer();
    Player* getNextPlayer();

    //抢地主，并下注//设置/获取名字
    void grabLordBet(int point);

    //存储手牌，用于一张一张的发牌
    void storeDispatchCard(const Card& card);
    //存储多张手牌，用于将底牌给地主
    void storeDispatchCard(const Cards& cards);

    //获取所有的牌
    Cards getCards();

    //清空所有牌，在一局游戏结束后，需要将玩家手牌清空
    void clearCards();

    //出牌，参数为cards，可出一张牌或多张牌
    void playHand(const Cards& cards);

    //处理桌面上待处理的牌
    //先将待处理的牌以及其所属的玩家，存储到玩家的Cards m_pendCards;//桌面上待处理的牌
    void storePendingInfo(Player* player, const Cards& cards);
    //获取待处理的牌的所有者
    Player* getPendPlayer();
    //获取待处理的牌
    Cards getPendCards();

    //叫地主，抢地主，出牌的函数
    virtual void prepareCallLord();
    virtual void preparePlayHand();
    virtual void thinkCallLord();
    virtual void thinkPlayHand();
    //由于机器人玩家和人类玩家对叫地主，抢地主和出牌的动作形式不一样
    //机器人自动进行，人类玩家通过传撒鼠标信号进行，因此需要使用不同的函数实现
    //所以采用多态处理



signals:
    void notifyGrabLordBet(Player* player, int bet);
    void notifyPlayHand(Player* player, const Cards& card);
    void notifyPickCards(Player* player, const Cards& cards);

protected:
    int m_score = 0;//分数
    QString m_name;//名字,需要初始化
    Role m_role;//角色，地主or农民
    Sex m_sex;//性别，需要初始化
    Direction m_direction;//头像方向，需要初始化
    Type m_type;//玩家类型，机器人or人类，需要初始化
    bool m_isWin = false;//输赢状态
    Player* m_prev = nullptr;//当前玩家的上家
    Player* m_next = nullptr;//当前玩家的下家
    Cards m_cards;//存储玩家的手牌
    Cards m_pendCards;//桌面上待处理的牌，
    Player* m_pendPlayer = nullptr;//待处理的牌的所有者，也就是谁打出的这幅牌
};

#endif // PLAYER_H
