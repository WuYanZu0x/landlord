/********************************************************************************
** Form generated from reading UI file 'buttongroup.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTONGROUP_H
#define UI_BUTTONGROUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include <myButton.h>

QT_BEGIN_NAMESPACE

class Ui_ButtonGroup
{
public:
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *startpage;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    MyButton *start;
    QSpacerItem *horizontalSpacer_2;
    QWidget *play_card_page;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    MyButton *playCard;
    QSpacerItem *horizontalSpacer_4;
    QWidget *PlayOrPassPage;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    MyButton *pass;
    QSpacerItem *horizontalSpacer_6;
    MyButton *playCard1;
    QSpacerItem *horizontalSpacer_7;
    QWidget *Call_Lord_Page;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_8;
    MyButton *giveup;
    QSpacerItem *horizontalSpacer_10;
    MyButton *oneScore;
    QSpacerItem *horizontalSpacer_11;
    MyButton *twoScore;
    QSpacerItem *horizontalSpacer_12;
    MyButton *threeScore;
    QSpacerItem *horizontalSpacer_9;
    QWidget *page;

    void setupUi(QWidget *ButtonGroup)
    {
        if (ButtonGroup->objectName().isEmpty())
            ButtonGroup->setObjectName(QString::fromUtf8("ButtonGroup"));
        ButtonGroup->resize(739, 468);
        horizontalLayout = new QHBoxLayout(ButtonGroup);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(ButtonGroup);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        startpage = new QWidget();
        startpage->setObjectName(QString::fromUtf8("startpage"));
        horizontalLayout_2 = new QHBoxLayout(startpage);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(122, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        start = new MyButton(startpage);
        start->setObjectName(QString::fromUtf8("start"));

        horizontalLayout_2->addWidget(start);

        horizontalSpacer_2 = new QSpacerItem(302, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        stackedWidget->addWidget(startpage);
        play_card_page = new QWidget();
        play_card_page->setObjectName(QString::fromUtf8("play_card_page"));
        horizontalLayout_3 = new QHBoxLayout(play_card_page);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(302, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        playCard = new MyButton(play_card_page);
        playCard->setObjectName(QString::fromUtf8("playCard"));

        horizontalLayout_3->addWidget(playCard);

        horizontalSpacer_4 = new QSpacerItem(302, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        stackedWidget->addWidget(play_card_page);
        PlayOrPassPage = new QWidget();
        PlayOrPassPage->setObjectName(QString::fromUtf8("PlayOrPassPage"));
        horizontalLayout_4 = new QHBoxLayout(PlayOrPassPage);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(46, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        pass = new MyButton(PlayOrPassPage);
        pass->setObjectName(QString::fromUtf8("pass"));

        horizontalLayout_4->addWidget(pass);

        horizontalSpacer_6 = new QSpacerItem(40, 15, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        playCard1 = new MyButton(PlayOrPassPage);
        playCard1->setObjectName(QString::fromUtf8("playCard1"));

        horizontalLayout_4->addWidget(playCard1);

        horizontalSpacer_7 = new QSpacerItem(227, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        stackedWidget->addWidget(PlayOrPassPage);
        Call_Lord_Page = new QWidget();
        Call_Lord_Page->setObjectName(QString::fromUtf8("Call_Lord_Page"));
        horizontalLayout_5 = new QHBoxLayout(Call_Lord_Page);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_8 = new QSpacerItem(55, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);

        giveup = new MyButton(Call_Lord_Page);
        giveup->setObjectName(QString::fromUtf8("giveup"));

        horizontalLayout_5->addWidget(giveup);

        horizontalSpacer_10 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);

        oneScore = new MyButton(Call_Lord_Page);
        oneScore->setObjectName(QString::fromUtf8("oneScore"));

        horizontalLayout_5->addWidget(oneScore);

        horizontalSpacer_11 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_11);

        twoScore = new MyButton(Call_Lord_Page);
        twoScore->setObjectName(QString::fromUtf8("twoScore"));

        horizontalLayout_5->addWidget(twoScore);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_12);

        threeScore = new MyButton(Call_Lord_Page);
        threeScore->setObjectName(QString::fromUtf8("threeScore"));

        horizontalLayout_5->addWidget(threeScore);

        horizontalSpacer_9 = new QSpacerItem(55, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        stackedWidget->addWidget(Call_Lord_Page);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(ButtonGroup);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ButtonGroup);
    } // setupUi

    void retranslateUi(QWidget *ButtonGroup)
    {
        ButtonGroup->setWindowTitle(QCoreApplication::translate("ButtonGroup", "Form", nullptr));
        start->setText(QCoreApplication::translate("ButtonGroup", "PushButton", nullptr));
        playCard->setText(QCoreApplication::translate("ButtonGroup", "PushButton", nullptr));
        pass->setText(QCoreApplication::translate("ButtonGroup", "PushButton", nullptr));
        playCard1->setText(QCoreApplication::translate("ButtonGroup", "PushButton", nullptr));
        giveup->setText(QCoreApplication::translate("ButtonGroup", "PushButton", nullptr));
        oneScore->setText(QCoreApplication::translate("ButtonGroup", "ScoreOne", nullptr));
        twoScore->setText(QCoreApplication::translate("ButtonGroup", "ScoreTwo", nullptr));
        threeScore->setText(QCoreApplication::translate("ButtonGroup", "ScoreThree", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ButtonGroup: public Ui_ButtonGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTONGROUP_H
