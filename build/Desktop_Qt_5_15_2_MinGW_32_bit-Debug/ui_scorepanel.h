/********************************************************************************
** Form generated from reading UI file 'scorepanel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCOREPANEL_H
#define UI_SCOREPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScorePanel
{
public:
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *right_robot_score;
    QLabel *left_robot_scroe;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *myscore;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label;
    QLabel *label_12;
    QLabel *label_2;
    QLabel *label_10;

    void setupUi(QWidget *ScorePanel)
    {
        if (ScorePanel->objectName().isEmpty())
            ScorePanel->setObjectName(QString::fromUtf8("ScorePanel"));
        ScorePanel->resize(495, 331);
        ScorePanel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        gridLayout = new QGridLayout(ScorePanel);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(ScorePanel);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 2, 2, 1, 1);

        right_robot_score = new QLabel(ScorePanel);
        right_robot_score->setObjectName(QString::fromUtf8("right_robot_score"));
        right_robot_score->setFont(font);
        right_robot_score->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(right_robot_score, 4, 1, 1, 1);

        left_robot_scroe = new QLabel(ScorePanel);
        left_robot_scroe->setObjectName(QString::fromUtf8("left_robot_scroe"));
        left_robot_scroe->setFont(font);
        left_robot_scroe->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(left_robot_scroe, 2, 1, 1, 1);

        label_4 = new QLabel(ScorePanel);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        label_6 = new QLabel(ScorePanel);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        myscore = new QLabel(ScorePanel);
        myscore->setObjectName(QString::fromUtf8("myscore"));
        myscore->setFont(font);
        myscore->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(myscore, 0, 1, 1, 1);

        label_8 = new QLabel(ScorePanel);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 3, 2, 1, 1);

        label_9 = new QLabel(ScorePanel);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);
        label_9->setFrameShape(QFrame::Panel);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_9, 4, 2, 1, 1);

        label = new QLabel(ScorePanel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_12 = new QLabel(ScorePanel);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_12, 5, 1, 1, 1);

        label_2 = new QLabel(ScorePanel);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        label_10 = new QLabel(ScorePanel);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_10, 4, 0, 1, 1);


        retranslateUi(ScorePanel);

        QMetaObject::connectSlotsByName(ScorePanel);
    } // setupUi

    void retranslateUi(QWidget *ScorePanel)
    {
        ScorePanel->setWindowTitle(QCoreApplication::translate("ScorePanel", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("ScorePanel", "\345\210\206", nullptr));
        right_robot_score->setText(QCoreApplication::translate("ScorePanel", "\345\210\206\346\225\260", nullptr));
        left_robot_scroe->setText(QCoreApplication::translate("ScorePanel", "\345\210\206\346\225\260", nullptr));
        label_4->setText(QCoreApplication::translate("ScorePanel", "\345\210\206", nullptr));
        label_6->setText(QCoreApplication::translate("ScorePanel", "\345\267\246\344\276\247\346\234\272\345\231\250\344\272\272", nullptr));
        myscore->setText(QCoreApplication::translate("ScorePanel", "\345\210\206\346\225\260", nullptr));
        label_8->setText(QString());
        label_9->setText(QCoreApplication::translate("ScorePanel", "\345\210\206", nullptr));
        label->setText(QCoreApplication::translate("ScorePanel", "\346\210\221", nullptr));
        label_12->setText(QString());
        label_2->setText(QString());
        label_10->setText(QCoreApplication::translate("ScorePanel", "\345\217\263\344\276\247\346\234\272\345\231\250\344\272\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScorePanel: public Ui_ScorePanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCOREPANEL_H
