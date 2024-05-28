#ifndef CARDS_H
#define CARDS_H
#include "card.h"

#include <QSet>

class Cards
{
public:
    enum SortType{Asc, Desc, NoSort};
    Cards();
    explicit Cards(const Card& card);

    //添加扑克牌
    void add(const Card& card);
    void add(const Cards& cards);
    void add(const QVector<Cards>& cards);

    //一次性插入多个数据，重载<<运算符
    Cards& operator <<(const Card& card);
    Cards& operator <<(const Cards& cards);

    //从cards中删除一些牌
    void remove(const Card& card);
    void remove(const Cards& cards);
    void remove(const QVector<Cards>& cards);

    //扑克牌的数量
    int cardCount();
    //判断是否为空
    bool isEmpty();
    bool isEmpty() const;
    //清空
    void clear();

    //获取最大/最小点数，引用Card类中的Card_Point枚举
    Card::CardPoint maxPoint();
    Card::CardPoint minPoint();
    //获取指定点数的牌的数量
    int pointCount(Card::CardPoint point);
    //某张牌或某几张牌是否在集合中
    bool contains(const Card& card);
    bool contains(const Cards& cards);

    //随机抽牌
    Card takeRandomCard();

    //类型转换
    CardList toCardList(SortType type = Desc);

    //打印所有的牌
    void printAllCardInfo();

private:
    //存放牌的底层容器
    QSet<Card> m_cards;
};

#endif // CARDS_H
