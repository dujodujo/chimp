/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameMenu
{
public:
    QWidget *page;
    QGridLayout *gridLayout;
    QPushButton *bNew;
    QPushButton *bContinue;
    QPushButton *bOptions;
    QPushButton *bExit;
    QFrame *line_2;
    QLabel *label_10;
    QWidget *page_1;
    QGridLayout *gridLayout_9;
    QLabel *label;
    QPushButton *bOptGraphics;
    QPushButton *bOptSound;
    QPushButton *bOptProfile;
    QPushButton *bOptLevels;
    QPushButton *bOptLanguage;
    QPushButton *bOptBack;
    QFrame *line;
    QWidget *page_2;
    QGridLayout *gridLayout_13;
    QLabel *label_2;
    QPushButton *bPauseGraphics;
    QPushButton *bPauseSound;
    QPushButton *bPauseRestart;
    QPushButton *bPauseAbandon;
    QSpacerItem *spacerItem;
    QPushButton *bPauseBack;
    QWidget *page_3;
    QGridLayout *gridLayout1;
    QLabel *label_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout2;
    QListWidget *lwThemes;
    QHBoxLayout *hboxLayout;
    QPushButton *bGraphicsBack;
    QPushButton *bGraphicsOk;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QListWidget *lwVideoMode;
    QGridLayout *gridLayout_5;
    QCheckBox *cbFullscreenMode;
    QPushButton *pbRefreshGraphicModes;
    QCheckBox *cbAccel;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QSlider *cbVolumeSound;
    QCheckBox *cbMuteSound;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QSlider *cbVolumeMusic;
    QCheckBox *cbMuteMusic;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *_2;
    QPushButton *bAudioBack;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_3;
    QRadioButton *rbArcade;
    QRadioButton *rbPuzzle;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_2;
    QLabel *labelDiff;
    QSlider *sliDifficulty;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *bGameBack;
    QPushButton *bGameStart;
    QWidget *page_6;
    QGridLayout *gridLayout_6;
    QLabel *label_8;
    QGroupBox *gbPlayersList;
    QGridLayout *gridLayout_4;
    QListWidget *lwPlayersList;
    QPushButton *bProfileSelect;
    QPushButton *bProfileRename;
    QPushButton *bProfileDelete;
    QPushButton *bProfileBack;
    QWidget *page_7;
    QGridLayout *gridLayout_7;
    QLabel *label_9;
    QTableWidget *twHall;
    QPushButton *bHallBack;
    QWidget *page_8;
    QGridLayout *gridLayout_8;
    QLabel *label_11;
    QSpacerItem *verticalSpacer_3;
    QPushButton *bCreditsBack;
    QWidget *page_9;
    QGridLayout *gridLayout_11;
    QLabel *label_12;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_10;
    QListWidget *lwLevels;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *bLevelsBack;
    QPushButton *bLevelsOk;
    QWidget *page_10;
    QGridLayout *gridLayout_12;
    QLabel *label_13;
    QTextEdit *teHelp;
    QPushButton *bHelpBack;
    QWidget *page_11;
    QGridLayout *gridLayout_14;
    QLabel *label_14;
    QListWidget *lwLanguage;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *bLangBack;
    QPushButton *bLangOk;

    void setupUi(QStackedWidget *GameMenu)
    {
        if (GameMenu->objectName().isEmpty())
            GameMenu->setObjectName(QString::fromUtf8("GameMenu"));
        GameMenu->resize(350, 450);
        GameMenu->setMinimumSize(QSize(350, 450));
        GameMenu->setMaximumSize(QSize(350, 450));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        bNew = new QPushButton(page);
        bNew->setObjectName(QString::fromUtf8("bNew"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bNew->sizePolicy().hasHeightForWidth());
        bNew->setSizePolicy(sizePolicy);
        bNew->setMaximumSize(QSize(16777215, 65));
        bNew->setCursor(QCursor(Qt::PointingHandCursor));
        bNew->setMouseTracking(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icons/games.png"), QSize(), QIcon::Normal, QIcon::Off);
        bNew->setIcon(icon);
        bNew->setIconSize(QSize(32, 32));

        gridLayout->addWidget(bNew, 1, 0, 1, 1);

        bContinue = new QPushButton(page);
        bContinue->setObjectName(QString::fromUtf8("bContinue"));
        sizePolicy.setHeightForWidth(bContinue->sizePolicy().hasHeightForWidth());
        bContinue->setSizePolicy(sizePolicy);
        bContinue->setMaximumSize(QSize(16777215, 65));
        bContinue->setCursor(QCursor(Qt::PointingHandCursor));
        bContinue->setMouseTracking(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/icons/forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        bContinue->setIcon(icon1);
        bContinue->setIconSize(QSize(32, 32));

        gridLayout->addWidget(bContinue, 2, 0, 1, 1);

        bOptions = new QPushButton(page);
        bOptions->setObjectName(QString::fromUtf8("bOptions"));
        sizePolicy.setHeightForWidth(bOptions->sizePolicy().hasHeightForWidth());
        bOptions->setSizePolicy(sizePolicy);
        bOptions->setMaximumSize(QSize(16777215, 65));
        bOptions->setCursor(QCursor(Qt::PointingHandCursor));
        bOptions->setMouseTracking(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/icons/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        bOptions->setIcon(icon2);
        bOptions->setIconSize(QSize(32, 32));

        gridLayout->addWidget(bOptions, 3, 0, 1, 1);

        bExit = new QPushButton(page);
        bExit->setObjectName(QString::fromUtf8("bExit"));
        sizePolicy.setHeightForWidth(bExit->sizePolicy().hasHeightForWidth());
        bExit->setSizePolicy(sizePolicy);
        bExit->setMaximumSize(QSize(16777215, 48));
        bExit->setCursor(QCursor(Qt::PointingHandCursor));
        bExit->setMouseTracking(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/icons/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        bExit->setIcon(icon3);
        bExit->setIconSize(QSize(32, 32));

        gridLayout->addWidget(bExit, 4, 0, 1, 1);

        line_2 = new QFrame(page);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 6, 0, 1, 1);

        label_10 = new QLabel(page);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_10, 0, 0, 1, 1);

        GameMenu->addWidget(page);
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        gridLayout_9 = new QGridLayout(page_1);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label = new QLabel(page_1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label, 0, 0, 1, 1);

        bOptGraphics = new QPushButton(page_1);
        bOptGraphics->setObjectName(QString::fromUtf8("bOptGraphics"));
        sizePolicy.setHeightForWidth(bOptGraphics->sizePolicy().hasHeightForWidth());
        bOptGraphics->setSizePolicy(sizePolicy);
        bOptGraphics->setMaximumSize(QSize(16777215, 65));
        bOptGraphics->setCursor(QCursor(Qt::PointingHandCursor));
        bOptGraphics->setMouseTracking(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/icons/display.png"), QSize(), QIcon::Normal, QIcon::Off);
        bOptGraphics->setIcon(icon4);
        bOptGraphics->setIconSize(QSize(32, 32));

        gridLayout_9->addWidget(bOptGraphics, 1, 0, 1, 1);

        bOptSound = new QPushButton(page_1);
        bOptSound->setObjectName(QString::fromUtf8("bOptSound"));
        sizePolicy.setHeightForWidth(bOptSound->sizePolicy().hasHeightForWidth());
        bOptSound->setSizePolicy(sizePolicy);
        bOptSound->setMaximumSize(QSize(16777215, 65));
        bOptSound->setCursor(QCursor(Qt::PointingHandCursor));
        bOptSound->setMouseTracking(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/icons/sound.png"), QSize(), QIcon::Normal, QIcon::Off);
        bOptSound->setIcon(icon5);
        bOptSound->setIconSize(QSize(32, 32));

        gridLayout_9->addWidget(bOptSound, 2, 0, 1, 1);

        bOptProfile = new QPushButton(page_1);
        bOptProfile->setObjectName(QString::fromUtf8("bOptProfile"));
        sizePolicy.setHeightForWidth(bOptProfile->sizePolicy().hasHeightForWidth());
        bOptProfile->setSizePolicy(sizePolicy);
        bOptProfile->setMaximumSize(QSize(16777215, 65));
        bOptProfile->setCursor(QCursor(Qt::PointingHandCursor));
        bOptProfile->setMouseTracking(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/icons/users.png"), QSize(), QIcon::Normal, QIcon::Off);
        bOptProfile->setIcon(icon6);
        bOptProfile->setIconSize(QSize(32, 32));

        gridLayout_9->addWidget(bOptProfile, 3, 0, 1, 1);

        bOptLevels = new QPushButton(page_1);
        bOptLevels->setObjectName(QString::fromUtf8("bOptLevels"));
        sizePolicy.setHeightForWidth(bOptLevels->sizePolicy().hasHeightForWidth());
        bOptLevels->setSizePolicy(sizePolicy);
        bOptLevels->setMaximumSize(QSize(16777215, 65));
        bOptLevels->setCursor(QCursor(Qt::PointingHandCursor));
        bOptLevels->setMouseTracking(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/icons/pack.png"), QSize(), QIcon::Normal, QIcon::Off);
        bOptLevels->setIcon(icon7);
        bOptLevels->setIconSize(QSize(32, 32));

        gridLayout_9->addWidget(bOptLevels, 4, 0, 1, 1);

        bOptLanguage = new QPushButton(page_1);
        bOptLanguage->setObjectName(QString::fromUtf8("bOptLanguage"));
        sizePolicy.setHeightForWidth(bOptLanguage->sizePolicy().hasHeightForWidth());
        bOptLanguage->setSizePolicy(sizePolicy);
        bOptLanguage->setMaximumSize(QSize(16777215, 65));
        bOptLanguage->setCursor(QCursor(Qt::PointingHandCursor));
        bOptLanguage->setMouseTracking(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/icons/language.png"), QSize(), QIcon::Normal, QIcon::Off);
        bOptLanguage->setIcon(icon8);
        bOptLanguage->setIconSize(QSize(32, 32));

        gridLayout_9->addWidget(bOptLanguage, 5, 0, 1, 1);

        bOptBack = new QPushButton(page_1);
        bOptBack->setObjectName(QString::fromUtf8("bOptBack"));
        sizePolicy.setHeightForWidth(bOptBack->sizePolicy().hasHeightForWidth());
        bOptBack->setSizePolicy(sizePolicy);
        bOptBack->setMaximumSize(QSize(16777215, 48));
        bOptBack->setCursor(QCursor(Qt::PointingHandCursor));
        bOptBack->setMouseTracking(false);

        gridLayout_9->addWidget(bOptBack, 7, 0, 1, 1);

        line = new QFrame(page_1);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_9->addWidget(line, 6, 0, 1, 1);

        GameMenu->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_13 = new QGridLayout(page_2);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(label_2, 0, 0, 1, 1);

        bPauseGraphics = new QPushButton(page_2);
        bPauseGraphics->setObjectName(QString::fromUtf8("bPauseGraphics"));
        sizePolicy.setHeightForWidth(bPauseGraphics->sizePolicy().hasHeightForWidth());
        bPauseGraphics->setSizePolicy(sizePolicy);
        bPauseGraphics->setMaximumSize(QSize(16777215, 65));
        bPauseGraphics->setCursor(QCursor(Qt::PointingHandCursor));
        bPauseGraphics->setIcon(icon4);
        bPauseGraphics->setIconSize(QSize(32, 32));

        gridLayout_13->addWidget(bPauseGraphics, 1, 0, 1, 1);

        bPauseSound = new QPushButton(page_2);
        bPauseSound->setObjectName(QString::fromUtf8("bPauseSound"));
        sizePolicy.setHeightForWidth(bPauseSound->sizePolicy().hasHeightForWidth());
        bPauseSound->setSizePolicy(sizePolicy);
        bPauseSound->setMaximumSize(QSize(16777215, 65));
        bPauseSound->setCursor(QCursor(Qt::PointingHandCursor));
        bPauseSound->setIcon(icon5);
        bPauseSound->setIconSize(QSize(32, 32));

        gridLayout_13->addWidget(bPauseSound, 2, 0, 1, 1);

        bPauseRestart = new QPushButton(page_2);
        bPauseRestart->setObjectName(QString::fromUtf8("bPauseRestart"));
        sizePolicy.setHeightForWidth(bPauseRestart->sizePolicy().hasHeightForWidth());
        bPauseRestart->setSizePolicy(sizePolicy);
        bPauseRestart->setMaximumSize(QSize(16777215, 65));
        bPauseRestart->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/icons/reload.png"), QSize(), QIcon::Normal, QIcon::Off);
        bPauseRestart->setIcon(icon9);
        bPauseRestart->setIconSize(QSize(32, 32));

        gridLayout_13->addWidget(bPauseRestart, 3, 0, 1, 1);

        bPauseAbandon = new QPushButton(page_2);
        bPauseAbandon->setObjectName(QString::fromUtf8("bPauseAbandon"));
        sizePolicy.setHeightForWidth(bPauseAbandon->sizePolicy().hasHeightForWidth());
        bPauseAbandon->setSizePolicy(sizePolicy);
        bPauseAbandon->setMaximumSize(QSize(16777215, 65));
        bPauseAbandon->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/icons/button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        bPauseAbandon->setIcon(icon10);
        bPauseAbandon->setIconSize(QSize(32, 32));

        gridLayout_13->addWidget(bPauseAbandon, 4, 0, 1, 1);

        spacerItem = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_13->addItem(spacerItem, 5, 0, 1, 1);

        bPauseBack = new QPushButton(page_2);
        bPauseBack->setObjectName(QString::fromUtf8("bPauseBack"));
        sizePolicy.setHeightForWidth(bPauseBack->sizePolicy().hasHeightForWidth());
        bPauseBack->setSizePolicy(sizePolicy);
        bPauseBack->setMaximumSize(QSize(16777215, 48));
        bPauseBack->setCursor(QCursor(Qt::PointingHandCursor));
        bPauseBack->setIcon(icon);
        bPauseBack->setIconSize(QSize(32, 32));

        gridLayout_13->addWidget(bPauseBack, 6, 0, 1, 1);

        GameMenu->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout1 = new QGridLayout(page_3);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout1->addWidget(label_3, 0, 0, 1, 1);

        groupBox = new QGroupBox(page_3);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout2 = new QGridLayout(groupBox);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        lwThemes = new QListWidget(groupBox);
        lwThemes->setObjectName(QString::fromUtf8("lwThemes"));

        gridLayout2->addWidget(lwThemes, 0, 0, 1, 1);


        gridLayout1->addWidget(groupBox, 2, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        bGraphicsBack = new QPushButton(page_3);
        bGraphicsBack->setObjectName(QString::fromUtf8("bGraphicsBack"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bGraphicsBack->sizePolicy().hasHeightForWidth());
        bGraphicsBack->setSizePolicy(sizePolicy1);
        bGraphicsBack->setMinimumSize(QSize(0, 48));
        bGraphicsBack->setMaximumSize(QSize(16777215, 48));
        bGraphicsBack->setCursor(QCursor(Qt::PointingHandCursor));
        bGraphicsBack->setIconSize(QSize(32, 32));

        hboxLayout->addWidget(bGraphicsBack);

        bGraphicsOk = new QPushButton(page_3);
        bGraphicsOk->setObjectName(QString::fromUtf8("bGraphicsOk"));
        sizePolicy1.setHeightForWidth(bGraphicsOk->sizePolicy().hasHeightForWidth());
        bGraphicsOk->setSizePolicy(sizePolicy1);
        bGraphicsOk->setMinimumSize(QSize(0, 48));
        bGraphicsOk->setMaximumSize(QSize(16777215, 48));
        bGraphicsOk->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/icons/button_ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        bGraphicsOk->setIcon(icon11);
        bGraphicsOk->setIconSize(QSize(32, 32));

        hboxLayout->addWidget(bGraphicsOk);


        gridLayout1->addLayout(hboxLayout, 3, 0, 1, 1);

        groupBox_2 = new QGroupBox(page_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lwVideoMode = new QListWidget(groupBox_2);
        lwVideoMode->setObjectName(QString::fromUtf8("lwVideoMode"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lwVideoMode->sizePolicy().hasHeightForWidth());
        lwVideoMode->setSizePolicy(sizePolicy2);
        lwVideoMode->setMinimumSize(QSize(0, 0));
        lwVideoMode->setMaximumSize(QSize(16777215, 16777215));
        lwVideoMode->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lwVideoMode->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lwVideoMode->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout->addWidget(lwVideoMode);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        cbFullscreenMode = new QCheckBox(groupBox_2);
        cbFullscreenMode->setObjectName(QString::fromUtf8("cbFullscreenMode"));

        gridLayout_5->addWidget(cbFullscreenMode, 0, 0, 1, 1);

        pbRefreshGraphicModes = new QPushButton(groupBox_2);
        pbRefreshGraphicModes->setObjectName(QString::fromUtf8("pbRefreshGraphicModes"));
        pbRefreshGraphicModes->setIcon(icon9);

        gridLayout_5->addWidget(pbRefreshGraphicModes, 0, 1, 2, 1);

        cbAccel = new QCheckBox(groupBox_2);
        cbAccel->setObjectName(QString::fromUtf8("cbAccel"));

        gridLayout_5->addWidget(cbAccel, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_5);


        gridLayout1->addWidget(groupBox_2, 1, 0, 1, 1);

        GameMenu->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        verticalLayout_2 = new QVBoxLayout(page_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_4 = new QLabel(page_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        groupBox_3 = new QGroupBox(page_4);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout = new QHBoxLayout(groupBox_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        cbVolumeSound = new QSlider(groupBox_3);
        cbVolumeSound->setObjectName(QString::fromUtf8("cbVolumeSound"));
        cbVolumeSound->setMaximum(128);
        cbVolumeSound->setSingleStep(8);
        cbVolumeSound->setPageStep(16);
        cbVolumeSound->setTracking(false);
        cbVolumeSound->setOrientation(Qt::Horizontal);
        cbVolumeSound->setTickPosition(QSlider::TicksBelow);

        horizontalLayout->addWidget(cbVolumeSound);

        cbMuteSound = new QCheckBox(groupBox_3);
        cbMuteSound->setObjectName(QString::fromUtf8("cbMuteSound"));

        horizontalLayout->addWidget(cbMuteSound);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(page_4);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        cbVolumeMusic = new QSlider(groupBox_4);
        cbVolumeMusic->setObjectName(QString::fromUtf8("cbVolumeMusic"));
        cbVolumeMusic->setMaximum(128);
        cbVolumeMusic->setSingleStep(8);
        cbVolumeMusic->setPageStep(16);
        cbVolumeMusic->setTracking(false);
        cbVolumeMusic->setOrientation(Qt::Horizontal);
        cbVolumeMusic->setTickPosition(QSlider::TicksBelow);

        horizontalLayout_2->addWidget(cbVolumeMusic);

        cbMuteMusic = new QCheckBox(groupBox_4);
        cbMuteMusic->setObjectName(QString::fromUtf8("cbMuteMusic"));

        horizontalLayout_2->addWidget(cbMuteMusic);


        verticalLayout_2->addWidget(groupBox_4);

        verticalSpacer = new QSpacerItem(20, 238, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        _2 = new QHBoxLayout();
        _2->setObjectName(QString::fromUtf8("_2"));
        bAudioBack = new QPushButton(page_4);
        bAudioBack->setObjectName(QString::fromUtf8("bAudioBack"));
        sizePolicy1.setHeightForWidth(bAudioBack->sizePolicy().hasHeightForWidth());
        bAudioBack->setSizePolicy(sizePolicy1);
        bAudioBack->setMinimumSize(QSize(0, 48));
        bAudioBack->setMaximumSize(QSize(16777215, 48));
        bAudioBack->setCursor(QCursor(Qt::PointingHandCursor));

        _2->addWidget(bAudioBack);


        verticalLayout_2->addLayout(_2);

        GameMenu->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        verticalLayout_3 = new QVBoxLayout(page_5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_7 = new QLabel(page_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_7);

        groupBox_5 = new QGroupBox(page_5);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_3 = new QGridLayout(groupBox_5);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        rbArcade = new QRadioButton(groupBox_5);
        rbArcade->setObjectName(QString::fromUtf8("rbArcade"));
        rbArcade->setChecked(true);

        gridLayout_3->addWidget(rbArcade, 0, 0, 1, 1);

        rbPuzzle = new QRadioButton(groupBox_5);
        rbPuzzle->setObjectName(QString::fromUtf8("rbPuzzle"));

        gridLayout_3->addWidget(rbPuzzle, 1, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(page_5);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_2 = new QGridLayout(groupBox_6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        labelDiff = new QLabel(groupBox_6);
        labelDiff->setObjectName(QString::fromUtf8("labelDiff"));
        labelDiff->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelDiff, 0, 0, 1, 1);

        sliDifficulty = new QSlider(groupBox_6);
        sliDifficulty->setObjectName(QString::fromUtf8("sliDifficulty"));
        sliDifficulty->setMinimum(1);
        sliDifficulty->setMaximum(3);
        sliDifficulty->setPageStep(1);
        sliDifficulty->setValue(2);
        sliDifficulty->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sliDifficulty, 1, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_6);

        verticalSpacer_2 = new QSpacerItem(20, 188, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        bGameBack = new QPushButton(page_5);
        bGameBack->setObjectName(QString::fromUtf8("bGameBack"));
        sizePolicy1.setHeightForWidth(bGameBack->sizePolicy().hasHeightForWidth());
        bGameBack->setSizePolicy(sizePolicy1);
        bGameBack->setMinimumSize(QSize(0, 48));
        bGameBack->setMaximumSize(QSize(16777215, 48));
        bGameBack->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_5->addWidget(bGameBack);

        bGameStart = new QPushButton(page_5);
        bGameStart->setObjectName(QString::fromUtf8("bGameStart"));
        sizePolicy1.setHeightForWidth(bGameStart->sizePolicy().hasHeightForWidth());
        bGameStart->setSizePolicy(sizePolicy1);
        bGameStart->setMinimumSize(QSize(0, 48));
        bGameStart->setMaximumSize(QSize(16777215, 48));
        bGameStart->setCursor(QCursor(Qt::PointingHandCursor));
        bGameStart->setIcon(icon1);
        bGameStart->setIconSize(QSize(32, 32));

        horizontalLayout_5->addWidget(bGameStart);


        verticalLayout_3->addLayout(horizontalLayout_5);

        GameMenu->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        gridLayout_6 = new QGridLayout(page_6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_8 = new QLabel(page_6);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_8, 0, 0, 1, 1);

        gbPlayersList = new QGroupBox(page_6);
        gbPlayersList->setObjectName(QString::fromUtf8("gbPlayersList"));
        gridLayout_4 = new QGridLayout(gbPlayersList);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        lwPlayersList = new QListWidget(gbPlayersList);
        lwPlayersList->setObjectName(QString::fromUtf8("lwPlayersList"));

        gridLayout_4->addWidget(lwPlayersList, 0, 0, 1, 3);

        bProfileSelect = new QPushButton(gbPlayersList);
        bProfileSelect->setObjectName(QString::fromUtf8("bProfileSelect"));
        bProfileSelect->setMinimumSize(QSize(0, 32));
        bProfileSelect->setMaximumSize(QSize(16777215, 32));
        bProfileSelect->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_4->addWidget(bProfileSelect, 1, 0, 1, 1);

        bProfileRename = new QPushButton(gbPlayersList);
        bProfileRename->setObjectName(QString::fromUtf8("bProfileRename"));
        bProfileRename->setMinimumSize(QSize(0, 32));
        bProfileRename->setMaximumSize(QSize(16777215, 32));
        bProfileRename->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_4->addWidget(bProfileRename, 1, 1, 1, 1);

        bProfileDelete = new QPushButton(gbPlayersList);
        bProfileDelete->setObjectName(QString::fromUtf8("bProfileDelete"));
        bProfileDelete->setMinimumSize(QSize(0, 32));
        bProfileDelete->setMaximumSize(QSize(16777215, 32));
        bProfileDelete->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_4->addWidget(bProfileDelete, 1, 2, 1, 1);


        gridLayout_6->addWidget(gbPlayersList, 1, 0, 1, 1);

        bProfileBack = new QPushButton(page_6);
        bProfileBack->setObjectName(QString::fromUtf8("bProfileBack"));
        sizePolicy1.setHeightForWidth(bProfileBack->sizePolicy().hasHeightForWidth());
        bProfileBack->setSizePolicy(sizePolicy1);
        bProfileBack->setMinimumSize(QSize(0, 48));
        bProfileBack->setMaximumSize(QSize(16777215, 48));
        bProfileBack->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_6->addWidget(bProfileBack, 2, 0, 1, 1);

        GameMenu->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        gridLayout_7 = new QGridLayout(page_7);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_9 = new QLabel(page_7);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_9, 0, 0, 1, 1);

        twHall = new QTableWidget(page_7);
        if (twHall->columnCount() < 2)
            twHall->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twHall->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        twHall->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        twHall->setObjectName(QString::fromUtf8("twHall"));
        twHall->setFocusPolicy(Qt::NoFocus);
        twHall->setEditTriggers(QAbstractItemView::NoEditTriggers);
        twHall->setTabKeyNavigation(false);
        twHall->setProperty("showDropIndicator", QVariant(false));
        twHall->setSelectionMode(QAbstractItemView::NoSelection);
        twHall->setSelectionBehavior(QAbstractItemView::SelectRows);
        twHall->setShowGrid(true);
        twHall->setGridStyle(Qt::DotLine);
        twHall->setCornerButtonEnabled(false);
        twHall->verticalHeader()->setVisible(false);

        gridLayout_7->addWidget(twHall, 1, 0, 1, 1);

        bHallBack = new QPushButton(page_7);
        bHallBack->setObjectName(QString::fromUtf8("bHallBack"));
        sizePolicy1.setHeightForWidth(bHallBack->sizePolicy().hasHeightForWidth());
        bHallBack->setSizePolicy(sizePolicy1);
        bHallBack->setMinimumSize(QSize(0, 48));
        bHallBack->setMaximumSize(QSize(16777215, 48));
        bHallBack->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_7->addWidget(bHallBack, 2, 0, 1, 1);

        GameMenu->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QString::fromUtf8("page_8"));
        gridLayout_8 = new QGridLayout(page_8);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_11 = new QLabel(page_8);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignCenter);
        label_11->setOpenExternalLinks(true);
        label_11->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);

        gridLayout_8->addWidget(label_11, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_3, 1, 0, 1, 1);

        bCreditsBack = new QPushButton(page_8);
        bCreditsBack->setObjectName(QString::fromUtf8("bCreditsBack"));
        sizePolicy1.setHeightForWidth(bCreditsBack->sizePolicy().hasHeightForWidth());
        bCreditsBack->setSizePolicy(sizePolicy1);
        bCreditsBack->setMinimumSize(QSize(0, 48));
        bCreditsBack->setMaximumSize(QSize(16777215, 48));
        bCreditsBack->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_8->addWidget(bCreditsBack, 2, 0, 1, 1);

        GameMenu->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName(QString::fromUtf8("page_9"));
        gridLayout_11 = new QGridLayout(page_9);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        label_12 = new QLabel(page_9);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_12, 0, 0, 1, 1);

        groupBox_7 = new QGroupBox(page_9);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout_10 = new QGridLayout(groupBox_7);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        lwLevels = new QListWidget(groupBox_7);
        lwLevels->setObjectName(QString::fromUtf8("lwLevels"));

        gridLayout_10->addWidget(lwLevels, 0, 0, 1, 1);


        gridLayout_11->addWidget(groupBox_7, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        bLevelsBack = new QPushButton(page_9);
        bLevelsBack->setObjectName(QString::fromUtf8("bLevelsBack"));
        sizePolicy1.setHeightForWidth(bLevelsBack->sizePolicy().hasHeightForWidth());
        bLevelsBack->setSizePolicy(sizePolicy1);
        bLevelsBack->setMinimumSize(QSize(0, 48));
        bLevelsBack->setMaximumSize(QSize(16777215, 48));
        bLevelsBack->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(bLevelsBack);

        bLevelsOk = new QPushButton(page_9);
        bLevelsOk->setObjectName(QString::fromUtf8("bLevelsOk"));
        sizePolicy1.setHeightForWidth(bLevelsOk->sizePolicy().hasHeightForWidth());
        bLevelsOk->setSizePolicy(sizePolicy1);
        bLevelsOk->setMinimumSize(QSize(0, 48));
        bLevelsOk->setMaximumSize(QSize(16777215, 48));
        bLevelsOk->setCursor(QCursor(Qt::PointingHandCursor));
        bLevelsOk->setIcon(icon11);
        bLevelsOk->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(bLevelsOk);


        gridLayout_11->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        GameMenu->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName(QString::fromUtf8("page_10"));
        gridLayout_12 = new QGridLayout(page_10);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        label_13 = new QLabel(page_10);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_13, 0, 0, 1, 1);

        teHelp = new QTextEdit(page_10);
        teHelp->setObjectName(QString::fromUtf8("teHelp"));
        teHelp->setUndoRedoEnabled(false);
        teHelp->setReadOnly(true);
        teHelp->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_12->addWidget(teHelp, 1, 0, 1, 1);

        bHelpBack = new QPushButton(page_10);
        bHelpBack->setObjectName(QString::fromUtf8("bHelpBack"));
        sizePolicy1.setHeightForWidth(bHelpBack->sizePolicy().hasHeightForWidth());
        bHelpBack->setSizePolicy(sizePolicy1);
        bHelpBack->setMinimumSize(QSize(0, 48));
        bHelpBack->setMaximumSize(QSize(16777215, 48));
        bHelpBack->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_12->addWidget(bHelpBack, 2, 0, 1, 1);

        GameMenu->addWidget(page_10);
        page_11 = new QWidget();
        page_11->setObjectName(QString::fromUtf8("page_11"));
        gridLayout_14 = new QGridLayout(page_11);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        label_14 = new QLabel(page_11);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(label_14, 0, 0, 1, 1);

        lwLanguage = new QListWidget(page_11);
        lwLanguage->setObjectName(QString::fromUtf8("lwLanguage"));

        gridLayout_14->addWidget(lwLanguage, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        bLangBack = new QPushButton(page_11);
        bLangBack->setObjectName(QString::fromUtf8("bLangBack"));
        sizePolicy1.setHeightForWidth(bLangBack->sizePolicy().hasHeightForWidth());
        bLangBack->setSizePolicy(sizePolicy1);
        bLangBack->setMinimumSize(QSize(0, 48));
        bLangBack->setMaximumSize(QSize(16777215, 48));
        bLangBack->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(bLangBack);

        bLangOk = new QPushButton(page_11);
        bLangOk->setObjectName(QString::fromUtf8("bLangOk"));
        sizePolicy1.setHeightForWidth(bLangOk->sizePolicy().hasHeightForWidth());
        bLangOk->setSizePolicy(sizePolicy1);
        bLangOk->setMinimumSize(QSize(0, 48));
        bLangOk->setMaximumSize(QSize(16777215, 48));
        bLangOk->setCursor(QCursor(Qt::PointingHandCursor));
        bLangOk->setIcon(icon11);
        bLangOk->setIconSize(QSize(32, 32));

        horizontalLayout_4->addWidget(bLangOk);


        gridLayout_14->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        GameMenu->addWidget(page_11);
        QWidget::setTabOrder(lwVideoMode, cbFullscreenMode);
        QWidget::setTabOrder(cbFullscreenMode, cbAccel);
        QWidget::setTabOrder(cbAccel, lwThemes);
        QWidget::setTabOrder(lwThemes, bGraphicsBack);
        QWidget::setTabOrder(bGraphicsBack, cbVolumeSound);
        QWidget::setTabOrder(cbVolumeSound, cbMuteSound);
        QWidget::setTabOrder(cbMuteSound, cbVolumeMusic);
        QWidget::setTabOrder(cbVolumeMusic, cbMuteMusic);
        QWidget::setTabOrder(cbMuteMusic, bAudioBack);
        QWidget::setTabOrder(bAudioBack, rbArcade);
        QWidget::setTabOrder(rbArcade, rbPuzzle);
        QWidget::setTabOrder(rbPuzzle, sliDifficulty);
        QWidget::setTabOrder(sliDifficulty, bGameStart);
        QWidget::setTabOrder(bGameStart, lwPlayersList);
        QWidget::setTabOrder(lwPlayersList, bProfileSelect);
        QWidget::setTabOrder(bProfileSelect, bProfileRename);
        QWidget::setTabOrder(bProfileRename, bProfileDelete);
        QWidget::setTabOrder(bProfileDelete, bProfileBack);
        QWidget::setTabOrder(bProfileBack, bHallBack);
        QWidget::setTabOrder(bHallBack, lwLevels);
        QWidget::setTabOrder(lwLevels, bLevelsBack);
        QWidget::setTabOrder(bLevelsBack, bLevelsOk);
        QWidget::setTabOrder(bLevelsOk, teHelp);
        QWidget::setTabOrder(teHelp, bHelpBack);
        QWidget::setTabOrder(bHelpBack, lwLanguage);
        QWidget::setTabOrder(lwLanguage, bLangBack);
        QWidget::setTabOrder(bLangBack, bLangOk);
        QWidget::setTabOrder(bLangOk, bNew);
        QWidget::setTabOrder(bNew, bContinue);
        QWidget::setTabOrder(bContinue, bOptions);
        QWidget::setTabOrder(bOptions, bExit);
        QWidget::setTabOrder(bExit, bOptGraphics);
        QWidget::setTabOrder(bOptGraphics, bOptSound);
        QWidget::setTabOrder(bOptSound, bOptProfile);
        QWidget::setTabOrder(bOptProfile, bOptLevels);
        QWidget::setTabOrder(bOptLevels, bOptLanguage);
        QWidget::setTabOrder(bOptLanguage, bOptBack);
        QWidget::setTabOrder(bOptBack, bPauseGraphics);
        QWidget::setTabOrder(bPauseGraphics, bPauseSound);
        QWidget::setTabOrder(bPauseSound, bPauseRestart);
        QWidget::setTabOrder(bPauseRestart, bPauseAbandon);
        QWidget::setTabOrder(bPauseAbandon, bPauseBack);

        retranslateUi(GameMenu);

        GameMenu->setCurrentIndex(0);

		QObject::connect(bNew, SIGNAL(clicked()), GameMenu, SLOT(onButtonNewClicked()));
		QObject::connect(bGameStart, SIGNAL(clicked()), GameMenu, SLOT(onGameStartClicked()));

        QMetaObject::connectSlotsByName(GameMenu);
    } // setupUi

    void retranslateUi(QStackedWidget *GameMenu)
    {
        GameMenu->setWindowTitle(QString());
        bNew->setText(QApplication::translate("GameMenu", "New Game", 0, QApplication::UnicodeUTF8));
        bContinue->setText(QApplication::translate("GameMenu", "Continue Game", 0, QApplication::UnicodeUTF8));
        bOptions->setText(QApplication::translate("GameMenu", "Options", 0, QApplication::UnicodeUTF8));
        bExit->setText(QApplication::translate("GameMenu", "Exit", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("GameMenu", "Menu", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("GameMenu", "Options", 0, QApplication::UnicodeUTF8));
        bOptGraphics->setText(QApplication::translate("GameMenu", "Graphics", 0, QApplication::UnicodeUTF8));
        bOptSound->setText(QApplication::translate("GameMenu", "Sound", 0, QApplication::UnicodeUTF8));
        bOptProfile->setText(QApplication::translate("GameMenu", "Profile", 0, QApplication::UnicodeUTF8));
        bOptLevels->setText(QApplication::translate("GameMenu", "Level packs", 0, QApplication::UnicodeUTF8));
        bOptLanguage->setText(QApplication::translate("GameMenu", "Language", 0, QApplication::UnicodeUTF8));
        bOptBack->setText(QApplication::translate("GameMenu", "Back", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("GameMenu", "Game Paused", 0, QApplication::UnicodeUTF8));
        bPauseGraphics->setText(QApplication::translate("GameMenu", "Graphics", 0, QApplication::UnicodeUTF8));
        bPauseSound->setText(QApplication::translate("GameMenu", "Sound", 0, QApplication::UnicodeUTF8));
        bPauseRestart->setText(QApplication::translate("GameMenu", "Restart level", 0, QApplication::UnicodeUTF8));
        bPauseAbandon->setText(QApplication::translate("GameMenu", "Abandon game", 0, QApplication::UnicodeUTF8));
        bPauseBack->setText(QApplication::translate("GameMenu", "Back to game", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("GameMenu", "Graphics options", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("GameMenu", "Theme select", 0, QApplication::UnicodeUTF8));
        bGraphicsBack->setText(QApplication::translate("GameMenu", "Back", 0, QApplication::UnicodeUTF8));
        bGraphicsOk->setText(QApplication::translate("GameMenu", "Ok", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("GameMenu", "Video mode", 0, QApplication::UnicodeUTF8));
        cbFullscreenMode->setText(QApplication::translate("GameMenu", "Full Screen", 0, QApplication::UnicodeUTF8));
        pbRefreshGraphicModes->setText(QApplication::translate("GameMenu", "Refresh", 0, QApplication::UnicodeUTF8));
        cbAccel->setText(QApplication::translate("GameMenu", "Enable Acceleration (restart needed)", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("GameMenu", "Audio options", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("GameMenu", "Sound effects", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("GameMenu", "Volume", 0, QApplication::UnicodeUTF8));
        cbMuteSound->setText(QApplication::translate("GameMenu", "Mute", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("GameMenu", "Music", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("GameMenu", "Volume", 0, QApplication::UnicodeUTF8));
        cbMuteMusic->setText(QApplication::translate("GameMenu", "Mute", 0, QApplication::UnicodeUTF8));
        bAudioBack->setText(QApplication::translate("GameMenu", "Back", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("GameMenu", "New game options", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("GameMenu", "Game mode", 0, QApplication::UnicodeUTF8));
        rbArcade->setText(QApplication::translate("GameMenu", "Arcade (with tools and bonuses)", 0, QApplication::UnicodeUTF8));
        rbPuzzle->setText(QApplication::translate("GameMenu", "Puzzle", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("GameMenu", "Difficulty", 0, QApplication::UnicodeUTF8));
        labelDiff->setText(QApplication::translate("GameMenu", "Normal", 0, QApplication::UnicodeUTF8));
        bGameBack->setText(QApplication::translate("GameMenu", "Back", 0, QApplication::UnicodeUTF8));
        bGameBack->setShortcut(QApplication::translate("GameMenu", "Esc", 0, QApplication::UnicodeUTF8));
        bGameStart->setText(QApplication::translate("GameMenu", "Start new game", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("GameMenu", "Player profile options", 0, QApplication::UnicodeUTF8));
        gbPlayersList->setTitle(QApplication::translate("GameMenu", "Players", 0, QApplication::UnicodeUTF8));
        bProfileSelect->setText(QApplication::translate("GameMenu", "Select", 0, QApplication::UnicodeUTF8));
        bProfileRename->setText(QApplication::translate("GameMenu", "Rename", 0, QApplication::UnicodeUTF8));
        bProfileDelete->setText(QApplication::translate("GameMenu", "Delete", 0, QApplication::UnicodeUTF8));
        bProfileBack->setText(QApplication::translate("GameMenu", "Back", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("GameMenu", "Hall of Fame", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = twHall->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("GameMenu", "Player name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = twHall->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("GameMenu", "Score", 0, QApplication::UnicodeUTF8));
        bHallBack->setText(QApplication::translate("GameMenu", "Back", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("GameMenu", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">JAG</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">by</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; "
                        "-qt-block-indent:0; text-indent:0px;\"><a href=\"http://xlabsoft.com\"><span style=\" font-size:12pt; text-decoration: underline; color:#aaffff;\">XlabSoft</span></a></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">and</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.ii-system.com\"><span style=\" font-size:12pt; text-decoration: underline; color:#aaffff;\">Industrial Infosystems</span></a></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Based on"
                        " Qt framework by Nokia</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">under LGPL license.</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Uses SDL library under LGPL license.</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Thanks to the authors of graphics,</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style"
                        "=\" font-size:10pt;\"> icons and sounds,</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">which are used under</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">free licenses in the game.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        bCreditsBack->setText(QApplication::translate("GameMenu", "Back", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("GameMenu", "Level packs options", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("GameMenu", "Level packs", 0, QApplication::UnicodeUTF8));
        bLevelsBack->setText(QApplication::translate("GameMenu", "Back", 0, QApplication::UnicodeUTF8));
        bLevelsOk->setText(QApplication::translate("GameMenu", "Ok", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("GameMenu", "JAG help index", 0, QApplication::UnicodeUTF8));
        teHelp->setHtml(QApplication::translate("GameMenu", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        bHelpBack->setText(QApplication::translate("GameMenu", "Back", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("GameMenu", "Language selection", 0, QApplication::UnicodeUTF8));
        bLangBack->setText(QApplication::translate("GameMenu", "Back", 0, QApplication::UnicodeUTF8));
        bLangOk->setText(QApplication::translate("GameMenu", "Ok", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GameMenu: public Ui_GameMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
