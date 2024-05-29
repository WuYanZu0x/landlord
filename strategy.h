#ifndef STRATEGY_H
#define STRATEGY_H

#include "player.h"
#include "playhand.h"



class Strategy
{
public:
    //策略服务的是某个机器人玩家怎么出牌。因此参数需要一个玩家对象和玩家的卡牌
    Strategy(Player* player, const Cards& cards);//这里玩家也可以为定义robot类型，因为只有机器人会使用strategy

    //1，指定出牌策略
    Cards makeStrategy();
    //2，第一个出牌
    Cards firstPlay();
    //3，获取能压过对方的合适的牌，对方可能是队友，也可能是对手，针对不同情况需采取不同的出牌策略
    Cards getGreaterCards(PlayHand type);
    //4，能大过指定的牌时，判断出牌还是放行
    bool whetherToBeat(Cards& cs);

    //找到指定数量(count)的指定点数的牌，返回cards
    Cards findSamePointCards(Card::CardPoint point, int count);
    //找出数量为count的牌(可能会有多个点数数量都为count，因此返回的是一个数组)
    QVector<Cards> findCardsByCount(int count);
    //获取某个点数范围内的所有牌
    Cards getRangeCards(Card::CardPoint begin, Card::CardPoint end);
    //按牌型找牌，并且指定要找更大的牌或者更小的牌，playhand有牌型和点数两个属性，可以利用
    QVector<Cards> findCardType(PlayHand hand, bool beat);
    //从cards对象中挑选出顺子
    void pickSeqSingles(QVector<QVector<Cards>> &allSeqRecord, const QVector<Cards> &seqSingle, const Cards& cards);
    //最优的顺子集合筛选函数，根据筛选后剩下单牌的数量，判断是顺子的优劣
    QVector<Cards> pickOptimalSeqSingles();

private:
    using function = Cards (Strategy::*)(Card::CardPoint point);
    struct CardInfo
    {
        Card::CardPoint begin;
        Card::CardPoint end;
        int extra;
        bool beat;
        int number;
        int base;
        function getSeq;
    };
    //找从点数point开始的所有 有number张的牌，例如要找3张的大于3点的牌，如果有4张4，3张5等待，则会返将3张5加入到数组中，以及后面有3张的牌
    QVector<Cards> getCards(Card::CardPoint point, int number);
    QVector<Cards> getTripleSingleOrPair(Card::CardPoint begin, PlayHand::HandType type);
    QVector<Cards> getPlane(Card::CardPoint begin);
    QVector<Cards> getPlane2SingleOr2Pair(Card::CardPoint begin, PlayHand::HandType type);
    QVector<Cards> getSepPairOrSeqSingle(CardInfo &info);
    Cards getBaseSeqPair(Card::CardPoint point);
    Cards getBaseSeqSingle(Card::CardPoint point);
    QVector<Cards> getBomb(Card::CardPoint begin);

private:
    Player* m_player;
    Cards m_cards;
};

#endif // STRATEGY_H
