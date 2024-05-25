#ifndef CARDPANEL_H
#define CARDPANEL_H

#include <QWidget>
#include "card.h"
#include "player.h"

class CardPanel : public QWidget
{
    Q_OBJECT
public:
    explicit CardPanel(QWidget *parent = nullptr);

    //设置及获取窗口的图片
    void setImage(const QPixmap &front, const QPixmap &back);
    QPixmap getImage();

    //设置扑克显示哪一面
    void setFrontSide(bool flag);// 1为正面，0为背面
    bool isFrontSide();

    //记录窗口是否被选中了
    void setSeclected(bool flag);
    bool isSelected();

    //设置当前窗口的扑克牌的花色以及点数
    void setCard(const Card& card);
    Card getCard();

    //设置以及获取扑克牌的所有者
    void setOwner(Player* player);
    Player* getOwner();

    void clicked();

protected:
    void paintEvent(QPaintEvent *event);//绘制窗口
    void mousePressEvent(QMouseEvent* event);//处理鼠标点击事件

signals:
    void cardSelected(Qt::MouseButton button);

private:
    QPixmap m_front;//正面图片
    QPixmap m_back;//背面图片
    bool m_isfront = true;//正面为1，背面为0
    bool m_isSelect = false;//窗口是否被选中
    Card m_card;//窗口的卡的信息
    Player* m_owner = nullptr;//扑克牌的所有者
};
