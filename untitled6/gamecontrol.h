#ifndef GAMECONTROL_H
#define GAMECONTROL_H

#include <QObject>
#include "robot.h"
#include "userplayer.h"
#include "cards.h"

struct BetRecord
{
    BetRecord()
    {
        reset();
    }
    void reset()
    {
        player = nullptr;
        bet = 0;
        times = 0;
    }
    Player* player;
    int bet;
    int times;
};

class GameControl : public QObject
{
    Q_OBJECT
public:
    //游戏状态
    enum GameStatus
    {
        DispatchCard,//发牌阶段
        CallingLord,//叫地主阶段
        PlayingHand//出牌阶段
    };
    //玩家状态
    enum PlayerStatus
    {
        ThinkingForCallLord,//考虑叫地主
        ThinkingForPlayHand,//考虑出牌
        Winning//胜利
    };

    explicit GameControl(QObject *parent = nullptr);//构造函数

    void playerInit();//初始化玩家

    //获取玩家的实例对象
    Robot* getLeftRobot();
    Robot* getRightRobot();
    UserPlayer* getUserPlayer();

    //设置/获取获取当前玩家的实例对象，由于可能是机器人也可能是人类，因此使用基类player
    void setCurrentPlayer(Player* player);
    Player* getCurrentPlayer();

    //获取上一个出牌的玩家
    Player* getPendPlayer();
    //获取上一个出牌的玩家打出的牌，数量为n张，因此使用cards数据类型
    Cards getPendCards();

    //初始化一副牌
    void initAllCards();
    //发一张牌
    Card takeOneCard();
    //获取三张底牌
    Cards getSurplusCards();
    //重置所有的牌，在重新开始一局时调用
    void resetCardData();

    //准备叫地主
    void startLordCard();
    //成为地址
    void becomeLord(Player *player, int bet);
    //清空所有玩家分数
    void clearPlayerScore();
    int getPlayerMaxBet();

    void onGrabBet(Player* player, int bet);

    void onPlayHand(Player *player, const Cards &card);

signals:
    void playerStatusChanged(Player* player, PlayerStatus status);
    void notifyGrabLordBet(Player* player, int bet, bool flag);
    void gameStatusChanged(GameStatus status);
    void notifyPlayHand(Player* player, const Cards& card);
    void pendingInfo(Player* player, const Cards& card);

private:
    //两个机器人玩家
    Robot* m_robotLeft = nullptr;
    Robot* m_robotRight = nullptr;
    //一个人类玩家
    UserPlayer* m_user = nullptr;

    //当前玩家，由于可能是机器人也可能是人类，因此使用基类player
    Player* m_currPlayer = nullptr;
    //上一个出牌的玩家
    Player* m_pendPlayer = nullptr;
    //上一个出牌的玩家打出的牌
    Cards m_pendCards;
    //
    Cards m_allCards;
    BetRecord m_betRecord;
    int m_curBet = 0;

};

#endif // GAMECONTROL_H
