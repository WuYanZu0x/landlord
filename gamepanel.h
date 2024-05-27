#ifndef GAMEPANEL_H
#define GAMEPANEL_H

#include <QLabel>
#include <QMainWindow>
#include <QMap>
#include "cardpanel.h"
#include "gamecontrol.h"
#include "animationwindow.h"
#include "player.h"
#include "countdown.h"
#include "bgmcontrol.h"

QT_BEGIN_NAMESPACE
namespace Ui { class GamePanel; }
QT_END_NAMESPACE

class GamePanel : public QMainWindow
{
    Q_OBJECT

public:
    GamePanel(QWidget *parent = nullptr);
    ~GamePanel();
    enum AnimationType{ShunZi, LianDui, Plane, JokerBomb, Bomb, Bet};
    //初始化
    void gameControlInit();
    //更新玩家分数
    void updatePlayerScore();
    //初始化卡牌(初始化card类，并为其添加上和cardpanel的映射关系)
    void initCardMap();
    //裁剪扑克牌的图片
    void cropImage(QPixmap& pix, int x, int y, Card& c);
    //初始化游戏按钮组
    void initButtonsGroup();
    //初始化玩家上下文
    void initPlayerContext();
    void initGameScene();
    void gameStatusPrecess(GameControl::GameStatus status);
    void startDispatchCard();
    void cardMoveStep(Player* player, int curPos);
    void disposeCard(Player* player, const Cards& cards);
    void updatePlayerCards(Player* player);
    QPixmap loadRoleImage(Player::Sex sex, Player::Direction direct, Player::Role role);

    void onDispatchCard();
    void onPlayerStatusChanged(Player* player, GameControl::PlayerStatus status);
    void onGrabLordBet(Player* player, int bet, bool flag);
    void onDisposePlayHand(Player* player, const Cards& cards);
    void onCardSelected(Qt::MouseButton button);
    void onUserPlayHand();
    void onUserPass();

    void showAnimation(AnimationType type, int bet = 0);
    void hidePlayerDropCards(Player* player);
    void showEndingScorePanel();
    void initCountDown();

protected:
    void paintEvent(QPaintEvent* ev);
    void mouseMoveEvent(QMouseEvent* ev);


private:
    enum CardAlign{Horizontal, Vertical};
    //定义一个结构体，存放玩家的一些信息
    struct PlayerContext
    {
        QRect cardRect;//玩家手牌的显示区域
        QRect playHandRect;//出牌的区域
        CardAlign align;//手牌对齐方式，为枚举类型，有水平和垂直两种方式，人类玩家为水平对齐，机器人为垂直对齐
        bool isFrontSide;//手牌显示正面还是背面
        QLabel* info;//提升信息，比如：不出
        QLabel* roleImg;//玩家的头像
        Cards lastCards;//玩家刚打出的牌
    };

    Ui::GamePanel *ui;
    QPixmap m_bkImage;//背景图
    GameControl* m_gameCtl;
    QVector<Player*> m_playerList;//存放三个玩家的数组
    QMap<Card, CardPanel*> m_cardMap;//关联型数据结构，用来存放卡牌和卡牌窗口的对应关系，在分割卡牌的图像后，将卡牌和卡牌窗口的图像关联起来
    QSize m_cardSize;//图片的大小
    QPixmap m_cardBackImg;//牌的背面图片
    QMap<Player*, PlayerContext> m_contextMap;//关联型数据结构，用来存放玩家对象和玩家上下文信息的对应关系
    CardPanel* m_baseCard;//发牌区的牌
    CardPanel* m_moveCard;//移动中的牌
    QVector<CardPanel*> m_last3Card;//三张地主牌
    QPoint m_baseCardPos;
    GameControl::GameStatus m_gameStatus;
    QTimer* m_timer;
    AnimationWindow* m_animation;
    CardPanel* m_curSelCard;
    QSet<CardPanel*> m_selectCards;
    QRect m_cardsRect;
    QHash<CardPanel*, QRect> m_userCards;
    CountDown* m_countDown;
    BGMControl* m_bgm;
};
#endif // GAMEPANEL_H
