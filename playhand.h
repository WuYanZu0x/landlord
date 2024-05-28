#ifndef PLAYHAND_H
#define PLAYHAND_H

#include "card.h"
#include "cards.h"


//playhand类的作用：类中定义枚举类，以表示，各种牌型，如：单张，对子，飞机，炸弹等
//处理逻辑为：传入一些卡牌(cards)，遍历cards，做一个堆排序（记录每个点数出现了几次）
//将这些点数分类放入，1张牌的集合，2张牌的集合，3张牌的集合，4张牌的集合
//最后，通过判断4个集合中的元素个数，来判断牌型。例如：1张牌集合有一个元素，其他集合为空，说明出的是单张
class PlayHand
{
public:
    // 出牌组合或者方式
    enum HandType
    {
        Hand_Unknown,               // 未知
        Hand_Pass,                  // 过

        Hand_Single,                // 单
        Hand_Pair,                  // 对

        Hand_Triple,                // 三个
        Hand_Triple_Single,         // 三带一
        Hand_Triple_Pair,           // 三带二

        Hand_Plane,                 // 飞机，555_666
        Hand_Plane_Two_Single,      // 飞机带单，555_666_3_4
        Hand_Plane_Two_Pair,        // 飞机带双，555_666_33_44

        Hand_Seq_Pair,              // 连对，33_44_55(_66...)
        Hand_Seq_Single,            // 顺子，34567(8...)

        Hand_Bomb,                  // 炸弹
        Hand_Bomb_Single,           // 炸弹带一个
        Hand_Bomb_Pair,             // 炸弹带一对
        Hand_Bomb_Two_Single,       // 炸弹带两单

        Hand_Bomb_Jokers,           // 王炸
        Hand_Bomb_Jokers_Single,    // 王炸带一个
        Hand_Bomb_Jokers_Pair,      // 王炸带一对
        Hand_Bomb_Jokers_Two_Single	// 王炸带两单
    };

    PlayHand();

    //传递给类一组牌，通过类分析出牌型，点数，以及相关的附属信息（例如：顺子需要记录牌的数量）
    explicit PlayHand(Cards& cards);
    //给牌的类型，点数，和附属信息，初始化类
    PlayHand(HandType type, Card::CardPoint pt, int extra);

    //playhand类私有属性的get方法
    HandType getHandType();
    Card::CardPoint getCardPoint();
    int getExtra();

    //比较两个牌型大小，参数为其他人的牌，自己的大返回true，别人的大返回false
    bool canBeat(const PlayHand& other);

private:
    void classify(Cards& cards);//先对扑克牌进行分类，例如：1张，2张，3张，4张的各有多少种
    void judgeCardType();//给牌型分类，例如：对子，飞机
    bool isPass();
    bool isSingle();
    bool isPair();
    bool isTriple();
    bool isTripleSingle();
    bool isTriplePair();
    bool isPlane();
    bool isPlaneTwoSingle();
    bool isPlaneTwoPair();
    bool isSeqPair();
    bool isSeqSingle();
    bool isBomb();
    bool isBombSingle();
    bool isBombPair();
    bool isBombTwoSingle();
    bool isBombJokers();
    bool isBombJokersSingle();
    bool isBombJokersPair();
    bool isBombJokersTwoSingle();

private:
    HandType m_type;//牌的组合类型：对子，顺子，飞机
    Card::CardPoint m_pt;//点数
    int m_extra;//附属信息（例如：顺子需要记录牌的数量）
    //存放1张，2张，3张，4张的卡的容器
    QVector<Card::CardPoint> m_oneCard;
    QVector<Card::CardPoint> m_twoCard;
    QVector<Card::CardPoint> m_threeCard;
    QVector<Card::CardPoint> m_fourCard;
};

#endif // PLAYHAND_H
