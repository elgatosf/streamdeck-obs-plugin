/********************************************************************************
** Form generated from reading UI file 'OBSBasicSettings.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSBASICSETTINGS_H
#define UI_OBSBASICSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OBSBasicSettings
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QStackedWidget *settingsPages;
    QWidget *generalPage;
    QVBoxLayout *verticalLayout_18;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_19;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_20;
    QGroupBox *groupBox_15;
    QFormLayout *formLayout_32;
    QLabel *label;
    QComboBox *language;
    QLabel *label_42;
    QComboBox *theme;
    QCheckBox *enableAutoUpdates;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_16;
    QFormLayout *formLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *warnBeforeStreamStart;
    QCheckBox *warnBeforeStreamStop;
    QCheckBox *recordWhenStreaming;
    QCheckBox *keepRecordStreamStops;
    QCheckBox *replayWhileStreaming;
    QCheckBox *keepReplayStreamStops;
    QGroupBox *groupBox_10;
    QFormLayout *formLayout_21;
    QCheckBox *snappingEnabled;
    QCheckBox *screenSnapping;
    QCheckBox *centerSnapping;
    QCheckBox *sourceSnapping;
    QDoubleSpinBox *snapDistance;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox_14;
    QFormLayout *formLayout_28;
    QCheckBox *hideProjectorCursor;
    QCheckBox *projectorAlwaysOnTop;
    QCheckBox *saveProjectors;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_13;
    QFormLayout *formLayout_29;
    QCheckBox *systemTrayEnabled;
    QCheckBox *systemTrayWhenStarted;
    QCheckBox *systemTrayAlways;
    QSpacerItem *horizontalSpacer_2;
    QWidget *streamPage;
    QVBoxLayout *verticalLayout_5;
    QWidget *streamContainer;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_6;
    QFormLayout *formLayout_8;
    QLabel *label_21;
    QComboBox *streamType;
    QFrame *line;
    QWidget *outputPage;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QFormLayout *formLayout_5;
    QLabel *outputModeLabel;
    QComboBox *outputMode;
    QFrame *line_2;
    QStackedWidget *outputModePages;
    QWidget *easyOutputsPage;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_8;
    QFormLayout *formLayout_20;
    QLabel *label_19;
    QSpinBox *simpleOutputVBitrate;
    QLabel *label_20;
    QComboBox *simpleOutputABitrate;
    QCheckBox *simpleOutAdvanced;
    QComboBox *simpleOutPreset;
    QLabel *label_24;
    QLabel *label_23;
    QLineEdit *simpleOutCustom;
    QCheckBox *simpleOutEnforce;
    QComboBox *simpleOutStrEncoder;
    QLabel *simpleOutRecEncoderLabel_2;
    QGroupBox *simpleRecordingGroupBox;
    QFormLayout *formLayout_6;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *simpleOutputPath;
    QPushButton *simpleOutputBrowse;
    QCheckBox *simpleNoSpace;
    QLabel *label_26;
    QComboBox *simpleOutRecQuality;
    QLabel *simpleOutRecFormatLabel;
    QComboBox *simpleOutRecFormat;
    QLabel *simpleOutRecEncoderLabel;
    QComboBox *simpleOutRecEncoder;
    QLabel *label_420;
    QLineEdit *simpleOutMuxCustom;
    QCheckBox *simpleReplayBuf;
    QGroupBox *replayBufferGroupBox;
    QFormLayout *formLayout_24;
    QLabel *label_35;
    QSpinBox *simpleRBSecMax;
    QLabel *simpleRBMegsMaxLabel;
    QSpinBox *simpleRBMegsMax;
    QLabel *label_45;
    QLabel *simpleRBEstimate;
    QVBoxLayout *simpleOutInfoLayout;
    QSpacerItem *verticalSpacer_2;
    QWidget *simpleOutputContainer;
    QVBoxLayout *verticalLayout_4;
    QWidget *advOutputsPage;
    QVBoxLayout *verticalLayout_8;
    QTabWidget *advOutTabs;
    QWidget *advOutputStreamTab;
    QVBoxLayout *verticalLayout_12;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_14;
    QWidget *advOutTopContainer;
    QFormLayout *formLayout_7;
    QLabel *label_28;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *advOutTrack1;
    QRadioButton *advOutTrack2;
    QRadioButton *advOutTrack3;
    QRadioButton *advOutTrack4;
    QRadioButton *advOutTrack5;
    QRadioButton *advOutTrack6;
    QLabel *advOutEncLabel;
    QComboBox *advOutEncoder;
    QCheckBox *advOutApplyService;
    QCheckBox *advOutUseRescale;
    QComboBox *advOutRescale;
    QWidget *advOutputRecordTab;
    QVBoxLayout *verticalLayout_11;
    QWidget *advOutRecTypeContainer;
    QFormLayout *formLayout_9;
    QLabel *label_31;
    QComboBox *advOutRecType;
    QFrame *line_3;
    QStackedWidget *stackedWidget;
    QWidget *advOutRecStandard;
    QVBoxLayout *verticalLayout_13;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_15;
    QWidget *advOutRecTopContainer;
    QFormLayout *formLayout_16;
    QLabel *label_32;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *advOutRecPath;
    QPushButton *advOutRecPathBrowse;
    QCheckBox *advOutNoSpace;
    QLabel *label_43;
    QComboBox *advOutRecFormat;
    QLabel *label_29;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *advOutRecTrack1;
    QCheckBox *advOutRecTrack2;
    QCheckBox *advOutRecTrack3;
    QCheckBox *advOutRecTrack4;
    QCheckBox *advOutRecTrack5;
    QCheckBox *advOutRecTrack6;
    QLabel *advOutRecEncLabel;
    QComboBox *advOutRecEncoder;
    QCheckBox *advOutRecUseRescale;
    QWidget *advOutRecRescaleContainer;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *advOutRecRescale;
    QLabel *label_9001;
    QLineEdit *advOutMuxCustom;
    QWidget *advOutRecFFmpeg;
    QFormLayout *formLayout_15;
    QLabel *label_36;
    QStackedWidget *stackedWidget_2;
    QWidget *page_5;
    QHBoxLayout *horizontalLayout_12;
    QLineEdit *advOutFFRecPath;
    QPushButton *advOutFFPathBrowse;
    QWidget *page_4;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *advOutFFURL;
    QLabel *label_16;
    QComboBox *advOutFFFormat;
    QLabel *label_44;
    QLabel *advOutFFFormatDesc;
    QLabel *label_40;
    QSpinBox *advOutFFVBitrate;
    QSpinBox *advOutFFVGOPSize;
    QLabel *label_63;
    QCheckBox *advOutFFUseRescale;
    QComboBox *advOutFFRescale;
    QCheckBox *advOutFFIgnoreCompat;
    QLabel *label_37;
    QComboBox *advOutFFVEncoder;
    QLabel *label_38;
    QLineEdit *advOutFFVCfg;
    QLabel *label_41;
    QSpinBox *advOutFFABitrate;
    QLabel *label_47;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *advOutFFTrack1;
    QRadioButton *advOutFFTrack2;
    QRadioButton *advOutFFTrack3;
    QRadioButton *advOutFFTrack4;
    QRadioButton *advOutFFTrack5;
    QRadioButton *advOutFFTrack6;
    QLabel *label_39;
    QComboBox *advOutFFAEncoder;
    QLabel *label_46;
    QLineEdit *advOutFFACfg;
    QLabel *label_48;
    QComboBox *advOutFFType;
    QLabel *label_1337;
    QLineEdit *advOutFFMCfg;
    QCheckBox *advOutFFNoSpace;
    QWidget *advOutputAudioTracksTab;
    QVBoxLayout *verticalLayout_9;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *groupBox;
    QFormLayout *formLayout_10;
    QComboBox *advOutTrack1Bitrate;
    QLabel *label_25;
    QLabel *label_55;
    QLineEdit *advOutTrack1Name;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_11;
    QLabel *label_49;
    QComboBox *advOutTrack2Bitrate;
    QLabel *label_50;
    QLineEdit *advOutTrack2Name;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_12;
    QLabel *label_51;
    QComboBox *advOutTrack3Bitrate;
    QLabel *label_52;
    QLineEdit *advOutTrack3Name;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout_13;
    QLabel *label_53;
    QComboBox *advOutTrack4Bitrate;
    QLabel *label_54;
    QLineEdit *advOutTrack4Name;
    QGroupBox *groupBox_9;
    QFormLayout *formLayout_25;
    QLabel *label_59;
    QComboBox *advOutTrack5Bitrate;
    QLabel *label_60;
    QLineEdit *advOutTrack5Name;
    QGroupBox *groupBox_12;
    QFormLayout *formLayout_26;
    QLabel *label_61;
    QComboBox *advOutTrack6Bitrate;
    QLabel *label_62;
    QLineEdit *advOutTrack6Name;
    QWidget *audioPage;
    QFormLayout *formLayout;
    QLabel *label_14;
    QComboBox *sampleRate;
    QLabel *label_15;
    QComboBox *channelSetup;
    QLabel *label_2;
    QComboBox *desktopAudioDevice1;
    QLabel *label_3;
    QComboBox *desktopAudioDevice2;
    QLabel *label_4;
    QComboBox *auxAudioDevice1;
    QLabel *label_5;
    QComboBox *auxAudioDevice2;
    QLabel *label_6;
    QComboBox *auxAudioDevice3;
    QScrollArea *audioSourceScrollArea;
    QWidget *audioSourceWidget;
    QLabel *audioMsg;
    QWidget *videoPage;
    QFormLayout *formLayout_3;
    QLabel *label_8;
    QComboBox *baseResolution;
    QLabel *label_10;
    QComboBox *outputResolution;
    QLabel *label_11;
    QComboBox *downscaleFilter;
    QComboBox *fpsType;
    QStackedWidget *fpsTypes;
    QWidget *page;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *fpsCommon;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *fpsInteger;
    QWidget *page_2;
    QFormLayout *formLayout_4;
    QSpinBox *fpsNumerator;
    QSpinBox *fpsDenominator;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *videoMsg;
    QScrollArea *hotkeyPage;
    QWidget *hotkeyWidget;
    QFormLayout *hotkeyLayout;
    QWidget *advancedPage;
    QHBoxLayout *horizontalLayout_11;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_16;
    QWidget *widget_11;
    QVBoxLayout *verticalLayout_17;
    QGroupBox *advancedGeneralGroupBox;
    QFormLayout *formLayout_22;
    QLabel *processPriorityLabel;
    QComboBox *processPriority;
    QGroupBox *advancedVideoContainer;
    QFormLayout *formLayout_14;
    QLabel *rendererLabel;
    QComboBox *renderer;
    QLabel *adapterLabel;
    QComboBox *adapter;
    QLabel *label_30;
    QComboBox *colorFormat;
    QHBoxLayout *horizontalLayout_18;
    QCheckBox *disableOSXVSync;
    QCheckBox *resetOSXVSync;
    QHBoxLayout *horizontalLayout_20;
    QComboBox *colorSpace;
    QLabel *label_34;
    QComboBox *colorRange;
    QLabel *label_33;
    QGroupBox *advAudioGroupBox;
    QFormLayout *formLayout_27;
    QLabel *monitoringDeviceLabel;
    QComboBox *monitoringDevice;
    QGroupBox *groupBox_6;
    QFormLayout *formLayout_17;
    QLabel *label_7;
    QLineEdit *filenameFormatting;
    QCheckBox *overwriteIfExists;
    QHBoxLayout *horizontalLayout_14;
    QLineEdit *simpleRBPrefix;
    QLabel *label_58;
    QLineEdit *simpleRBSuffix;
    QLabel *label_57;
    QGroupBox *groupBox_5;
    QFormLayout *formLayout_18;
    QLabel *label_56;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_13;
    QSpinBox *streamDelaySec;
    QLabel *streamDelayInfo;
    QCheckBox *streamDelayPreserve;
    QCheckBox *streamDelayEnable;
    QGroupBox *groupBox_7;
    QFormLayout *formLayout_19;
    QCheckBox *reconnectEnable;
    QHBoxLayout *horizontalLayout_19;
    QSpinBox *reconnectRetryDelay;
    QLabel *label_22;
    QSpinBox *reconnectMaxRetries;
    QLabel *label_17;
    QGroupBox *groupBox_11;
    QFormLayout *formLayout_23;
    QComboBox *bindToIP;
    QLabel *label_27;
    QCheckBox *enableNewSocketLoop;
    QCheckBox *enableLowLatencyMode;
    QLabel *advancedMsg;
    QLabel *advancedMsg2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OBSBasicSettings)
    {
        if (OBSBasicSettings->objectName().isEmpty())
            OBSBasicSettings->setObjectName(QStringLiteral("OBSBasicSettings"));
        OBSBasicSettings->resize(981, 748);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OBSBasicSettings->sizePolicy().hasHeightForWidth());
        OBSBasicSettings->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(OBSBasicSettings);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        listWidget = new QListWidget(OBSBasicSettings);
        QIcon icon;
        icon.addFile(QStringLiteral(":/settings/images/settings/system-settings-3.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/settings/images/settings/network.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/settings/images/settings/network-bluetooth.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/settings/images/settings/decibel_audio_player.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget);
        __qlistwidgetitem3->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/settings/images/settings/video-display-3.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget);
        __qlistwidgetitem4->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/settings/images/settings/preferences-desktop-keyboard-shortcuts.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listWidget);
        __qlistwidgetitem5->setIcon(icon5);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/settings/images/settings/advanced.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(listWidget);
        __qlistwidgetitem6->setIcon(icon6);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy1);
        listWidget->setMaximumSize(QSize(135, 16777215));
        listWidget->setIconSize(QSize(48, 48));

        horizontalLayout->addWidget(listWidget, 0, Qt::AlignLeft);

        settingsPages = new QStackedWidget(OBSBasicSettings);
        settingsPages->setObjectName(QStringLiteral("settingsPages"));
        generalPage = new QWidget();
        generalPage->setObjectName(QStringLiteral("generalPage"));
        verticalLayout_18 = new QVBoxLayout(generalPage);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QScrollArea(generalPage);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 818, 697));
        verticalLayout_19 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 9);
        widget_2 = new QWidget(scrollAreaWidgetContents_2);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout_20 = new QVBoxLayout(widget_2);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        groupBox_15 = new QGroupBox(widget_2);
        groupBox_15->setObjectName(QStringLiteral("groupBox_15"));
        formLayout_32 = new QFormLayout(groupBox_15);
        formLayout_32->setObjectName(QStringLiteral("formLayout_32"));
        formLayout_32->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_32->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_32->setContentsMargins(-1, 2, -1, -1);
        label = new QLabel(groupBox_15);
        label->setObjectName(QStringLiteral("label"));

        formLayout_32->setWidget(0, QFormLayout::LabelRole, label);

        language = new QComboBox(groupBox_15);
        language->setObjectName(QStringLiteral("language"));

        formLayout_32->setWidget(0, QFormLayout::FieldRole, language);

        label_42 = new QLabel(groupBox_15);
        label_42->setObjectName(QStringLiteral("label_42"));

        formLayout_32->setWidget(1, QFormLayout::LabelRole, label_42);

        theme = new QComboBox(groupBox_15);
        theme->setObjectName(QStringLiteral("theme"));

        formLayout_32->setWidget(1, QFormLayout::FieldRole, theme);

        enableAutoUpdates = new QCheckBox(groupBox_15);
        enableAutoUpdates->setObjectName(QStringLiteral("enableAutoUpdates"));
        enableAutoUpdates->setChecked(true);

        formLayout_32->setWidget(2, QFormLayout::FieldRole, enableAutoUpdates);

        horizontalSpacer_3 = new QSpacerItem(170, 5, QSizePolicy::Fixed, QSizePolicy::Minimum);

        formLayout_32->setItem(2, QFormLayout::LabelRole, horizontalSpacer_3);


        verticalLayout_20->addWidget(groupBox_15);

        groupBox_16 = new QGroupBox(widget_2);
        groupBox_16->setObjectName(QStringLiteral("groupBox_16"));
        formLayout_2 = new QFormLayout(groupBox_16);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setContentsMargins(-1, 2, -1, -1);
        horizontalSpacer_5 = new QSpacerItem(170, 5, QSizePolicy::Fixed, QSizePolicy::Minimum);

        formLayout_2->setItem(0, QFormLayout::LabelRole, horizontalSpacer_5);

        warnBeforeStreamStart = new QCheckBox(groupBox_16);
        warnBeforeStreamStart->setObjectName(QStringLiteral("warnBeforeStreamStart"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, warnBeforeStreamStart);

        warnBeforeStreamStop = new QCheckBox(groupBox_16);
        warnBeforeStreamStop->setObjectName(QStringLiteral("warnBeforeStreamStop"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, warnBeforeStreamStop);

        recordWhenStreaming = new QCheckBox(groupBox_16);
        recordWhenStreaming->setObjectName(QStringLiteral("recordWhenStreaming"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, recordWhenStreaming);

        keepRecordStreamStops = new QCheckBox(groupBox_16);
        keepRecordStreamStops->setObjectName(QStringLiteral("keepRecordStreamStops"));
        keepRecordStreamStops->setEnabled(false);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, keepRecordStreamStops);

        replayWhileStreaming = new QCheckBox(groupBox_16);
        replayWhileStreaming->setObjectName(QStringLiteral("replayWhileStreaming"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, replayWhileStreaming);

        keepReplayStreamStops = new QCheckBox(groupBox_16);
        keepReplayStreamStops->setObjectName(QStringLiteral("keepReplayStreamStops"));
        keepReplayStreamStops->setEnabled(false);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, keepReplayStreamStops);


        verticalLayout_20->addWidget(groupBox_16);

        groupBox_10 = new QGroupBox(widget_2);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_10->sizePolicy().hasHeightForWidth());
        groupBox_10->setSizePolicy(sizePolicy2);
        groupBox_10->setFlat(false);
        formLayout_21 = new QFormLayout(groupBox_10);
        formLayout_21->setObjectName(QStringLiteral("formLayout_21"));
        formLayout_21->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_21->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_21->setContentsMargins(-1, 2, -1, -1);
        snappingEnabled = new QCheckBox(groupBox_10);
        snappingEnabled->setObjectName(QStringLiteral("snappingEnabled"));
        snappingEnabled->setChecked(true);

        formLayout_21->setWidget(0, QFormLayout::FieldRole, snappingEnabled);

        screenSnapping = new QCheckBox(groupBox_10);
        screenSnapping->setObjectName(QStringLiteral("screenSnapping"));
        screenSnapping->setChecked(true);

        formLayout_21->setWidget(2, QFormLayout::FieldRole, screenSnapping);

        centerSnapping = new QCheckBox(groupBox_10);
        centerSnapping->setObjectName(QStringLiteral("centerSnapping"));
        centerSnapping->setChecked(true);

        formLayout_21->setWidget(4, QFormLayout::FieldRole, centerSnapping);

        sourceSnapping = new QCheckBox(groupBox_10);
        sourceSnapping->setObjectName(QStringLiteral("sourceSnapping"));
        sourceSnapping->setChecked(true);

        formLayout_21->setWidget(3, QFormLayout::FieldRole, sourceSnapping);

        snapDistance = new QDoubleSpinBox(groupBox_10);
        snapDistance->setObjectName(QStringLiteral("snapDistance"));
        snapDistance->setDecimals(1);
        snapDistance->setSingleStep(0.5);
        snapDistance->setValue(10);

        formLayout_21->setWidget(1, QFormLayout::FieldRole, snapDistance);

        label_9 = new QLabel(groupBox_10);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_21->setWidget(1, QFormLayout::LabelRole, label_9);

        horizontalSpacer_4 = new QSpacerItem(170, 5, QSizePolicy::Fixed, QSizePolicy::Minimum);

        formLayout_21->setItem(3, QFormLayout::LabelRole, horizontalSpacer_4);


        verticalLayout_20->addWidget(groupBox_10);

        groupBox_14 = new QGroupBox(widget_2);
        groupBox_14->setObjectName(QStringLiteral("groupBox_14"));
        formLayout_28 = new QFormLayout(groupBox_14);
        formLayout_28->setObjectName(QStringLiteral("formLayout_28"));
        formLayout_28->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_28->setContentsMargins(-1, 2, -1, -1);
        hideProjectorCursor = new QCheckBox(groupBox_14);
        hideProjectorCursor->setObjectName(QStringLiteral("hideProjectorCursor"));

        formLayout_28->setWidget(0, QFormLayout::FieldRole, hideProjectorCursor);

        projectorAlwaysOnTop = new QCheckBox(groupBox_14);
        projectorAlwaysOnTop->setObjectName(QStringLiteral("projectorAlwaysOnTop"));

        formLayout_28->setWidget(1, QFormLayout::FieldRole, projectorAlwaysOnTop);

        saveProjectors = new QCheckBox(groupBox_14);
        saveProjectors->setObjectName(QStringLiteral("saveProjectors"));

        formLayout_28->setWidget(2, QFormLayout::FieldRole, saveProjectors);

        horizontalSpacer = new QSpacerItem(170, 5, QSizePolicy::Fixed, QSizePolicy::Minimum);

        formLayout_28->setItem(1, QFormLayout::LabelRole, horizontalSpacer);


        verticalLayout_20->addWidget(groupBox_14);

        groupBox_13 = new QGroupBox(widget_2);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        formLayout_29 = new QFormLayout(groupBox_13);
        formLayout_29->setObjectName(QStringLiteral("formLayout_29"));
        formLayout_29->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_29->setContentsMargins(-1, 2, -1, -1);
        systemTrayEnabled = new QCheckBox(groupBox_13);
        systemTrayEnabled->setObjectName(QStringLiteral("systemTrayEnabled"));

        formLayout_29->setWidget(0, QFormLayout::FieldRole, systemTrayEnabled);

        systemTrayWhenStarted = new QCheckBox(groupBox_13);
        systemTrayWhenStarted->setObjectName(QStringLiteral("systemTrayWhenStarted"));
        systemTrayWhenStarted->setEnabled(false);

        formLayout_29->setWidget(1, QFormLayout::FieldRole, systemTrayWhenStarted);

        systemTrayAlways = new QCheckBox(groupBox_13);
        systemTrayAlways->setObjectName(QStringLiteral("systemTrayAlways"));
        systemTrayAlways->setEnabled(false);

        formLayout_29->setWidget(2, QFormLayout::FieldRole, systemTrayAlways);

        horizontalSpacer_2 = new QSpacerItem(170, 5, QSizePolicy::Fixed, QSizePolicy::Minimum);

        formLayout_29->setItem(1, QFormLayout::LabelRole, horizontalSpacer_2);


        verticalLayout_20->addWidget(groupBox_13);


        verticalLayout_19->addWidget(widget_2, 0, Qt::AlignTop);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_18->addWidget(scrollArea_2);

        settingsPages->addWidget(generalPage);
        streamPage = new QWidget();
        streamPage->setObjectName(QStringLiteral("streamPage"));
        verticalLayout_5 = new QVBoxLayout(streamPage);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        streamContainer = new QWidget(streamPage);
        streamContainer->setObjectName(QStringLiteral("streamContainer"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(streamContainer->sizePolicy().hasHeightForWidth());
        streamContainer->setSizePolicy(sizePolicy3);
        verticalLayout_6 = new QVBoxLayout(streamContainer);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        widget_5 = new QWidget(streamContainer);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        sizePolicy2.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy2);
        verticalLayout_7 = new QVBoxLayout(widget_5);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        widget_6 = new QWidget(widget_5);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        formLayout_8 = new QFormLayout(widget_6);
        formLayout_8->setObjectName(QStringLiteral("formLayout_8"));
        formLayout_8->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_21 = new QLabel(widget_6);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setMinimumSize(QSize(170, 0));
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_8->setWidget(0, QFormLayout::LabelRole, label_21);

        streamType = new QComboBox(widget_6);
        streamType->setObjectName(QStringLiteral("streamType"));

        formLayout_8->setWidget(0, QFormLayout::FieldRole, streamType);


        verticalLayout_7->addWidget(widget_6);

        line = new QFrame(widget_5);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line);


        verticalLayout_6->addWidget(widget_5, 0, Qt::AlignTop);


        verticalLayout_5->addWidget(streamContainer);

        settingsPages->addWidget(streamPage);
        outputPage = new QWidget();
        outputPage->setObjectName(QStringLiteral("outputPage"));
        verticalLayout_2 = new QVBoxLayout(outputPage);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(outputPage);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy4);
        formLayout_5 = new QFormLayout(widget);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        formLayout_5->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        outputModeLabel = new QLabel(widget);
        outputModeLabel->setObjectName(QStringLiteral("outputModeLabel"));
        outputModeLabel->setMinimumSize(QSize(170, 0));
        outputModeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, outputModeLabel);

        outputMode = new QComboBox(widget);
        outputMode->setObjectName(QStringLiteral("outputMode"));
        outputMode->setEnabled(true);
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(outputMode->sizePolicy().hasHeightForWidth());
        outputMode->setSizePolicy(sizePolicy5);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, outputMode);


        verticalLayout_2->addWidget(widget, 0, Qt::AlignTop);

        line_2 = new QFrame(outputPage);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        outputModePages = new QStackedWidget(outputPage);
        outputModePages->setObjectName(QStringLiteral("outputModePages"));
        easyOutputsPage = new QWidget();
        easyOutputsPage->setObjectName(QStringLiteral("easyOutputsPage"));
        verticalLayout_3 = new QVBoxLayout(easyOutputsPage);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox_8 = new QGroupBox(easyOutputsPage);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        sizePolicy2.setHeightForWidth(groupBox_8->sizePolicy().hasHeightForWidth());
        groupBox_8->setSizePolicy(sizePolicy2);
        formLayout_20 = new QFormLayout(groupBox_8);
        formLayout_20->setObjectName(QStringLiteral("formLayout_20"));
        formLayout_20->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_20->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_19 = new QLabel(groupBox_8);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setMinimumSize(QSize(170, 0));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_20->setWidget(0, QFormLayout::LabelRole, label_19);

        simpleOutputVBitrate = new QSpinBox(groupBox_8);
        simpleOutputVBitrate->setObjectName(QStringLiteral("simpleOutputVBitrate"));
        simpleOutputVBitrate->setMinimum(200);
        simpleOutputVBitrate->setMaximum(1000000);
        simpleOutputVBitrate->setValue(2000);

        formLayout_20->setWidget(0, QFormLayout::FieldRole, simpleOutputVBitrate);

        label_20 = new QLabel(groupBox_8);
        label_20->setObjectName(QStringLiteral("label_20"));

        formLayout_20->setWidget(2, QFormLayout::LabelRole, label_20);

        simpleOutputABitrate = new QComboBox(groupBox_8);
        simpleOutputABitrate->setObjectName(QStringLiteral("simpleOutputABitrate"));

        formLayout_20->setWidget(2, QFormLayout::FieldRole, simpleOutputABitrate);

        simpleOutAdvanced = new QCheckBox(groupBox_8);
        simpleOutAdvanced->setObjectName(QStringLiteral("simpleOutAdvanced"));
        simpleOutAdvanced->setChecked(true);

        formLayout_20->setWidget(3, QFormLayout::FieldRole, simpleOutAdvanced);

        simpleOutPreset = new QComboBox(groupBox_8);
        simpleOutPreset->setObjectName(QStringLiteral("simpleOutPreset"));

        formLayout_20->setWidget(5, QFormLayout::FieldRole, simpleOutPreset);

        label_24 = new QLabel(groupBox_8);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setEnabled(true);

        formLayout_20->setWidget(5, QFormLayout::LabelRole, label_24);

        label_23 = new QLabel(groupBox_8);
        label_23->setObjectName(QStringLiteral("label_23"));

        formLayout_20->setWidget(6, QFormLayout::LabelRole, label_23);

        simpleOutCustom = new QLineEdit(groupBox_8);
        simpleOutCustom->setObjectName(QStringLiteral("simpleOutCustom"));

        formLayout_20->setWidget(6, QFormLayout::FieldRole, simpleOutCustom);

        simpleOutEnforce = new QCheckBox(groupBox_8);
        simpleOutEnforce->setObjectName(QStringLiteral("simpleOutEnforce"));

        formLayout_20->setWidget(4, QFormLayout::FieldRole, simpleOutEnforce);

        simpleOutStrEncoder = new QComboBox(groupBox_8);
        simpleOutStrEncoder->setObjectName(QStringLiteral("simpleOutStrEncoder"));

        formLayout_20->setWidget(1, QFormLayout::FieldRole, simpleOutStrEncoder);

        simpleOutRecEncoderLabel_2 = new QLabel(groupBox_8);
        simpleOutRecEncoderLabel_2->setObjectName(QStringLiteral("simpleOutRecEncoderLabel_2"));

        formLayout_20->setWidget(1, QFormLayout::LabelRole, simpleOutRecEncoderLabel_2);


        verticalLayout_3->addWidget(groupBox_8);

        simpleRecordingGroupBox = new QGroupBox(easyOutputsPage);
        simpleRecordingGroupBox->setObjectName(QStringLiteral("simpleRecordingGroupBox"));
        sizePolicy2.setHeightForWidth(simpleRecordingGroupBox->sizePolicy().hasHeightForWidth());
        simpleRecordingGroupBox->setSizePolicy(sizePolicy2);
        formLayout_6 = new QFormLayout(simpleRecordingGroupBox);
        formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
        formLayout_6->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_6->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_18 = new QLabel(simpleRecordingGroupBox);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setMinimumSize(QSize(170, 0));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_18);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        simpleOutputPath = new QLineEdit(simpleRecordingGroupBox);
        simpleOutputPath->setObjectName(QStringLiteral("simpleOutputPath"));
        simpleOutputPath->setEnabled(true);

        horizontalLayout_5->addWidget(simpleOutputPath);

        simpleOutputBrowse = new QPushButton(simpleRecordingGroupBox);
        simpleOutputBrowse->setObjectName(QStringLiteral("simpleOutputBrowse"));
        simpleOutputBrowse->setEnabled(true);

        horizontalLayout_5->addWidget(simpleOutputBrowse);


        formLayout_6->setLayout(0, QFormLayout::FieldRole, horizontalLayout_5);

        simpleNoSpace = new QCheckBox(simpleRecordingGroupBox);
        simpleNoSpace->setObjectName(QStringLiteral("simpleNoSpace"));
        simpleNoSpace->setChecked(true);

        formLayout_6->setWidget(1, QFormLayout::FieldRole, simpleNoSpace);

        label_26 = new QLabel(simpleRecordingGroupBox);
        label_26->setObjectName(QStringLiteral("label_26"));

        formLayout_6->setWidget(2, QFormLayout::LabelRole, label_26);

        simpleOutRecQuality = new QComboBox(simpleRecordingGroupBox);
        simpleOutRecQuality->setObjectName(QStringLiteral("simpleOutRecQuality"));

        formLayout_6->setWidget(2, QFormLayout::FieldRole, simpleOutRecQuality);

        simpleOutRecFormatLabel = new QLabel(simpleRecordingGroupBox);
        simpleOutRecFormatLabel->setObjectName(QStringLiteral("simpleOutRecFormatLabel"));

        formLayout_6->setWidget(3, QFormLayout::LabelRole, simpleOutRecFormatLabel);

        simpleOutRecFormat = new QComboBox(simpleRecordingGroupBox);
        simpleOutRecFormat->insertItems(0, QStringList()
         << QStringLiteral("flv")
         << QStringLiteral("mp4")
         << QStringLiteral("mov")
         << QStringLiteral("mkv")
         << QStringLiteral("ts")
         << QStringLiteral("m3u8")
        );
        simpleOutRecFormat->setObjectName(QStringLiteral("simpleOutRecFormat"));

        formLayout_6->setWidget(3, QFormLayout::FieldRole, simpleOutRecFormat);

        simpleOutRecEncoderLabel = new QLabel(simpleRecordingGroupBox);
        simpleOutRecEncoderLabel->setObjectName(QStringLiteral("simpleOutRecEncoderLabel"));

        formLayout_6->setWidget(4, QFormLayout::LabelRole, simpleOutRecEncoderLabel);

        simpleOutRecEncoder = new QComboBox(simpleRecordingGroupBox);
        simpleOutRecEncoder->setObjectName(QStringLiteral("simpleOutRecEncoder"));

        formLayout_6->setWidget(4, QFormLayout::FieldRole, simpleOutRecEncoder);

        label_420 = new QLabel(simpleRecordingGroupBox);
        label_420->setObjectName(QStringLiteral("label_420"));

        formLayout_6->setWidget(5, QFormLayout::LabelRole, label_420);

        simpleOutMuxCustom = new QLineEdit(simpleRecordingGroupBox);
        simpleOutMuxCustom->setObjectName(QStringLiteral("simpleOutMuxCustom"));

        formLayout_6->setWidget(5, QFormLayout::FieldRole, simpleOutMuxCustom);

        simpleReplayBuf = new QCheckBox(simpleRecordingGroupBox);
        simpleReplayBuf->setObjectName(QStringLiteral("simpleReplayBuf"));
        simpleReplayBuf->setChecked(true);

        formLayout_6->setWidget(6, QFormLayout::FieldRole, simpleReplayBuf);


        verticalLayout_3->addWidget(simpleRecordingGroupBox);

        replayBufferGroupBox = new QGroupBox(easyOutputsPage);
        replayBufferGroupBox->setObjectName(QStringLiteral("replayBufferGroupBox"));
        formLayout_24 = new QFormLayout(replayBufferGroupBox);
        formLayout_24->setObjectName(QStringLiteral("formLayout_24"));
        formLayout_24->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_24->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_35 = new QLabel(replayBufferGroupBox);
        label_35->setObjectName(QStringLiteral("label_35"));

        formLayout_24->setWidget(0, QFormLayout::LabelRole, label_35);

        simpleRBSecMax = new QSpinBox(replayBufferGroupBox);
        simpleRBSecMax->setObjectName(QStringLiteral("simpleRBSecMax"));
        simpleRBSecMax->setSuffix(QStringLiteral(" sec"));
        simpleRBSecMax->setMinimum(5);
        simpleRBSecMax->setMaximum(21600);
        simpleRBSecMax->setValue(15);

        formLayout_24->setWidget(0, QFormLayout::FieldRole, simpleRBSecMax);

        simpleRBMegsMaxLabel = new QLabel(replayBufferGroupBox);
        simpleRBMegsMaxLabel->setObjectName(QStringLiteral("simpleRBMegsMaxLabel"));

        formLayout_24->setWidget(1, QFormLayout::LabelRole, simpleRBMegsMaxLabel);

        simpleRBMegsMax = new QSpinBox(replayBufferGroupBox);
        simpleRBMegsMax->setObjectName(QStringLiteral("simpleRBMegsMax"));
        simpleRBMegsMax->setSuffix(QStringLiteral(" MB"));
        simpleRBMegsMax->setMinimum(20);
        simpleRBMegsMax->setMaximum(8192);
        simpleRBMegsMax->setValue(512);

        formLayout_24->setWidget(1, QFormLayout::FieldRole, simpleRBMegsMax);

        label_45 = new QLabel(replayBufferGroupBox);
        label_45->setObjectName(QStringLiteral("label_45"));

        formLayout_24->setWidget(2, QFormLayout::FieldRole, label_45);

        simpleRBEstimate = new QLabel(replayBufferGroupBox);
        simpleRBEstimate->setObjectName(QStringLiteral("simpleRBEstimate"));
        simpleRBEstimate->setText(QStringLiteral(""));

        formLayout_24->setWidget(3, QFormLayout::FieldRole, simpleRBEstimate);


        verticalLayout_3->addWidget(replayBufferGroupBox);

        simpleOutInfoLayout = new QVBoxLayout();
        simpleOutInfoLayout->setObjectName(QStringLiteral("simpleOutInfoLayout"));
        simpleOutInfoLayout->setContentsMargins(10, 10, 10, 10);

        verticalLayout_3->addLayout(simpleOutInfoLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        simpleOutputContainer = new QWidget(easyOutputsPage);
        simpleOutputContainer->setObjectName(QStringLiteral("simpleOutputContainer"));
        verticalLayout_4 = new QVBoxLayout(simpleOutputContainer);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);

        verticalLayout_3->addWidget(simpleOutputContainer, 0, Qt::AlignTop);

        outputModePages->addWidget(easyOutputsPage);
        advOutputsPage = new QWidget();
        advOutputsPage->setObjectName(QStringLiteral("advOutputsPage"));
        verticalLayout_8 = new QVBoxLayout(advOutputsPage);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        advOutTabs = new QTabWidget(advOutputsPage);
        advOutTabs->setObjectName(QStringLiteral("advOutTabs"));
        advOutTabs->setUsesScrollButtons(true);
        advOutputStreamTab = new QWidget();
        advOutputStreamTab->setObjectName(QStringLiteral("advOutputStreamTab"));
        verticalLayout_12 = new QVBoxLayout(advOutputStreamTab);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(9, 0, 9, 9);
        widget_4 = new QWidget(advOutputStreamTab);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        verticalLayout_14 = new QVBoxLayout(widget_4);
        verticalLayout_14->setSpacing(0);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        advOutTopContainer = new QWidget(widget_4);
        advOutTopContainer->setObjectName(QStringLiteral("advOutTopContainer"));
        sizePolicy2.setHeightForWidth(advOutTopContainer->sizePolicy().hasHeightForWidth());
        advOutTopContainer->setSizePolicy(sizePolicy2);
        formLayout_7 = new QFormLayout(advOutTopContainer);
        formLayout_7->setObjectName(QStringLiteral("formLayout_7"));
        formLayout_7->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_7->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_28 = new QLabel(advOutTopContainer);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setMinimumSize(QSize(170, 0));
        label_28->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_7->setWidget(1, QFormLayout::LabelRole, label_28);

        widget_8 = new QWidget(advOutTopContainer);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(widget_8->sizePolicy().hasHeightForWidth());
        widget_8->setSizePolicy(sizePolicy6);
        horizontalLayout_7 = new QHBoxLayout(widget_8);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        advOutTrack1 = new QRadioButton(widget_8);
        advOutTrack1->setObjectName(QStringLiteral("advOutTrack1"));
        advOutTrack1->setText(QStringLiteral("1"));
        advOutTrack1->setChecked(true);

        horizontalLayout_7->addWidget(advOutTrack1);

        advOutTrack2 = new QRadioButton(widget_8);
        advOutTrack2->setObjectName(QStringLiteral("advOutTrack2"));
        advOutTrack2->setText(QStringLiteral("2"));

        horizontalLayout_7->addWidget(advOutTrack2);

        advOutTrack3 = new QRadioButton(widget_8);
        advOutTrack3->setObjectName(QStringLiteral("advOutTrack3"));
        advOutTrack3->setText(QStringLiteral("3"));

        horizontalLayout_7->addWidget(advOutTrack3);

        advOutTrack4 = new QRadioButton(widget_8);
        advOutTrack4->setObjectName(QStringLiteral("advOutTrack4"));
        advOutTrack4->setText(QStringLiteral("4"));

        horizontalLayout_7->addWidget(advOutTrack4);

        advOutTrack5 = new QRadioButton(widget_8);
        advOutTrack5->setObjectName(QStringLiteral("advOutTrack5"));
        advOutTrack5->setText(QStringLiteral("5"));

        horizontalLayout_7->addWidget(advOutTrack5);

        advOutTrack6 = new QRadioButton(widget_8);
        advOutTrack6->setObjectName(QStringLiteral("advOutTrack6"));
        advOutTrack6->setText(QStringLiteral("6"));

        horizontalLayout_7->addWidget(advOutTrack6);


        formLayout_7->setWidget(1, QFormLayout::FieldRole, widget_8);

        advOutEncLabel = new QLabel(advOutTopContainer);
        advOutEncLabel->setObjectName(QStringLiteral("advOutEncLabel"));

        formLayout_7->setWidget(2, QFormLayout::LabelRole, advOutEncLabel);

        advOutEncoder = new QComboBox(advOutTopContainer);
        advOutEncoder->setObjectName(QStringLiteral("advOutEncoder"));

        formLayout_7->setWidget(2, QFormLayout::FieldRole, advOutEncoder);

        advOutApplyService = new QCheckBox(advOutTopContainer);
        advOutApplyService->setObjectName(QStringLiteral("advOutApplyService"));
        advOutApplyService->setChecked(true);

        formLayout_7->setWidget(3, QFormLayout::FieldRole, advOutApplyService);

        advOutUseRescale = new QCheckBox(advOutTopContainer);
        advOutUseRescale->setObjectName(QStringLiteral("advOutUseRescale"));
        sizePolicy1.setHeightForWidth(advOutUseRescale->sizePolicy().hasHeightForWidth());
        advOutUseRescale->setSizePolicy(sizePolicy1);
        advOutUseRescale->setLayoutDirection(Qt::RightToLeft);

        formLayout_7->setWidget(4, QFormLayout::LabelRole, advOutUseRescale);

        advOutRescale = new QComboBox(advOutTopContainer);
        advOutRescale->setObjectName(QStringLiteral("advOutRescale"));
        advOutRescale->setEnabled(false);
        advOutRescale->setEditable(true);

        formLayout_7->setWidget(4, QFormLayout::FieldRole, advOutRescale);


        verticalLayout_14->addWidget(advOutTopContainer);


        verticalLayout_12->addWidget(widget_4, 0, Qt::AlignTop);

        advOutTabs->addTab(advOutputStreamTab, QString());
        advOutputRecordTab = new QWidget();
        advOutputRecordTab->setObjectName(QStringLiteral("advOutputRecordTab"));
        verticalLayout_11 = new QVBoxLayout(advOutputRecordTab);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(9, 9, 9, 9);
        advOutRecTypeContainer = new QWidget(advOutputRecordTab);
        advOutRecTypeContainer->setObjectName(QStringLiteral("advOutRecTypeContainer"));
        formLayout_9 = new QFormLayout(advOutRecTypeContainer);
        formLayout_9->setObjectName(QStringLiteral("formLayout_9"));
        formLayout_9->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_9->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_9->setContentsMargins(-1, 0, -1, 0);
        label_31 = new QLabel(advOutRecTypeContainer);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setMinimumSize(QSize(170, 0));
        label_31->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_9->setWidget(0, QFormLayout::LabelRole, label_31);

        advOutRecType = new QComboBox(advOutRecTypeContainer);
        advOutRecType->setObjectName(QStringLiteral("advOutRecType"));

        formLayout_9->setWidget(0, QFormLayout::FieldRole, advOutRecType);


        verticalLayout_11->addWidget(advOutRecTypeContainer);

        line_3 = new QFrame(advOutputRecordTab);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_11->addWidget(line_3);

        stackedWidget = new QStackedWidget(advOutputRecordTab);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        advOutRecStandard = new QWidget();
        advOutRecStandard->setObjectName(QStringLiteral("advOutRecStandard"));
        verticalLayout_13 = new QVBoxLayout(advOutRecStandard);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        widget_7 = new QWidget(advOutRecStandard);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        verticalLayout_15 = new QVBoxLayout(widget_7);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        advOutRecTopContainer = new QWidget(widget_7);
        advOutRecTopContainer->setObjectName(QStringLiteral("advOutRecTopContainer"));
        sizePolicy2.setHeightForWidth(advOutRecTopContainer->sizePolicy().hasHeightForWidth());
        advOutRecTopContainer->setSizePolicy(sizePolicy2);
        formLayout_16 = new QFormLayout(advOutRecTopContainer);
        formLayout_16->setObjectName(QStringLiteral("formLayout_16"));
        formLayout_16->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_16->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_16->setContentsMargins(-1, 0, -1, -1);
        label_32 = new QLabel(advOutRecTopContainer);
        label_32->setObjectName(QStringLiteral("label_32"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy7);
        label_32->setMinimumSize(QSize(170, 0));
        label_32->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_16->setWidget(0, QFormLayout::LabelRole, label_32);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        advOutRecPath = new QLineEdit(advOutRecTopContainer);
        advOutRecPath->setObjectName(QStringLiteral("advOutRecPath"));
        advOutRecPath->setEnabled(true);

        horizontalLayout_6->addWidget(advOutRecPath);

        advOutRecPathBrowse = new QPushButton(advOutRecTopContainer);
        advOutRecPathBrowse->setObjectName(QStringLiteral("advOutRecPathBrowse"));
        advOutRecPathBrowse->setEnabled(true);

        horizontalLayout_6->addWidget(advOutRecPathBrowse);


        formLayout_16->setLayout(0, QFormLayout::FieldRole, horizontalLayout_6);

        advOutNoSpace = new QCheckBox(advOutRecTopContainer);
        advOutNoSpace->setObjectName(QStringLiteral("advOutNoSpace"));
        advOutNoSpace->setChecked(true);

        formLayout_16->setWidget(1, QFormLayout::FieldRole, advOutNoSpace);

        label_43 = new QLabel(advOutRecTopContainer);
        label_43->setObjectName(QStringLiteral("label_43"));

        formLayout_16->setWidget(2, QFormLayout::LabelRole, label_43);

        advOutRecFormat = new QComboBox(advOutRecTopContainer);
        advOutRecFormat->insertItems(0, QStringList()
         << QStringLiteral("flv")
         << QStringLiteral("mp4")
         << QStringLiteral("mov")
         << QStringLiteral("mkv")
         << QStringLiteral("ts")
         << QStringLiteral("m3u8")
        );
        advOutRecFormat->setObjectName(QStringLiteral("advOutRecFormat"));

        formLayout_16->setWidget(2, QFormLayout::FieldRole, advOutRecFormat);

        label_29 = new QLabel(advOutRecTopContainer);
        label_29->setObjectName(QStringLiteral("label_29"));

        formLayout_16->setWidget(3, QFormLayout::LabelRole, label_29);

        widget_9 = new QWidget(advOutRecTopContainer);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        sizePolicy6.setHeightForWidth(widget_9->sizePolicy().hasHeightForWidth());
        widget_9->setSizePolicy(sizePolicy6);
        horizontalLayout_9 = new QHBoxLayout(widget_9);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        advOutRecTrack1 = new QCheckBox(widget_9);
        advOutRecTrack1->setObjectName(QStringLiteral("advOutRecTrack1"));
        advOutRecTrack1->setText(QStringLiteral("1"));

        horizontalLayout_9->addWidget(advOutRecTrack1);

        advOutRecTrack2 = new QCheckBox(widget_9);
        advOutRecTrack2->setObjectName(QStringLiteral("advOutRecTrack2"));
        advOutRecTrack2->setText(QStringLiteral("2"));

        horizontalLayout_9->addWidget(advOutRecTrack2);

        advOutRecTrack3 = new QCheckBox(widget_9);
        advOutRecTrack3->setObjectName(QStringLiteral("advOutRecTrack3"));
        advOutRecTrack3->setText(QStringLiteral("3"));

        horizontalLayout_9->addWidget(advOutRecTrack3);

        advOutRecTrack4 = new QCheckBox(widget_9);
        advOutRecTrack4->setObjectName(QStringLiteral("advOutRecTrack4"));
        advOutRecTrack4->setText(QStringLiteral("4"));

        horizontalLayout_9->addWidget(advOutRecTrack4);

        advOutRecTrack5 = new QCheckBox(widget_9);
        advOutRecTrack5->setObjectName(QStringLiteral("advOutRecTrack5"));
        advOutRecTrack5->setText(QStringLiteral("5"));

        horizontalLayout_9->addWidget(advOutRecTrack5);

        advOutRecTrack6 = new QCheckBox(widget_9);
        advOutRecTrack6->setObjectName(QStringLiteral("advOutRecTrack6"));
        advOutRecTrack6->setText(QStringLiteral("6"));

        horizontalLayout_9->addWidget(advOutRecTrack6);


        formLayout_16->setWidget(3, QFormLayout::FieldRole, widget_9);

        advOutRecEncLabel = new QLabel(advOutRecTopContainer);
        advOutRecEncLabel->setObjectName(QStringLiteral("advOutRecEncLabel"));

        formLayout_16->setWidget(4, QFormLayout::LabelRole, advOutRecEncLabel);

        advOutRecEncoder = new QComboBox(advOutRecTopContainer);
        advOutRecEncoder->setObjectName(QStringLiteral("advOutRecEncoder"));

        formLayout_16->setWidget(4, QFormLayout::FieldRole, advOutRecEncoder);

        advOutRecUseRescale = new QCheckBox(advOutRecTopContainer);
        advOutRecUseRescale->setObjectName(QStringLiteral("advOutRecUseRescale"));
        sizePolicy1.setHeightForWidth(advOutRecUseRescale->sizePolicy().hasHeightForWidth());
        advOutRecUseRescale->setSizePolicy(sizePolicy1);
        advOutRecUseRescale->setLayoutDirection(Qt::RightToLeft);

        formLayout_16->setWidget(5, QFormLayout::LabelRole, advOutRecUseRescale);

        advOutRecRescaleContainer = new QWidget(advOutRecTopContainer);
        advOutRecRescaleContainer->setObjectName(QStringLiteral("advOutRecRescaleContainer"));
        horizontalLayout_4 = new QHBoxLayout(advOutRecRescaleContainer);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        advOutRecRescale = new QComboBox(advOutRecRescaleContainer);
        advOutRecRescale->setObjectName(QStringLiteral("advOutRecRescale"));
        advOutRecRescale->setEnabled(false);
        advOutRecRescale->setEditable(true);

        horizontalLayout_4->addWidget(advOutRecRescale);


        formLayout_16->setWidget(5, QFormLayout::FieldRole, advOutRecRescaleContainer);

        label_9001 = new QLabel(advOutRecTopContainer);
        label_9001->setObjectName(QStringLiteral("label_9001"));

        formLayout_16->setWidget(6, QFormLayout::LabelRole, label_9001);

        advOutMuxCustom = new QLineEdit(advOutRecTopContainer);
        advOutMuxCustom->setObjectName(QStringLiteral("advOutMuxCustom"));

        formLayout_16->setWidget(6, QFormLayout::FieldRole, advOutMuxCustom);


        verticalLayout_15->addWidget(advOutRecTopContainer);


        verticalLayout_13->addWidget(widget_7, 0, Qt::AlignTop);

        stackedWidget->addWidget(advOutRecStandard);
        advOutRecFFmpeg = new QWidget();
        advOutRecFFmpeg->setObjectName(QStringLiteral("advOutRecFFmpeg"));
        formLayout_15 = new QFormLayout(advOutRecFFmpeg);
        formLayout_15->setObjectName(QStringLiteral("formLayout_15"));
        formLayout_15->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_15->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_15->setContentsMargins(-1, 0, -1, -1);
        label_36 = new QLabel(advOutRecFFmpeg);
        label_36->setObjectName(QStringLiteral("label_36"));
        sizePolicy7.setHeightForWidth(label_36->sizePolicy().hasHeightForWidth());
        label_36->setSizePolicy(sizePolicy7);
        label_36->setMinimumSize(QSize(170, 0));
        label_36->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_15->setWidget(1, QFormLayout::LabelRole, label_36);

        stackedWidget_2 = new QStackedWidget(advOutRecFFmpeg);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        horizontalLayout_12 = new QHBoxLayout(page_5);
        horizontalLayout_12->setSpacing(3);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        advOutFFRecPath = new QLineEdit(page_5);
        advOutFFRecPath->setObjectName(QStringLiteral("advOutFFRecPath"));
        advOutFFRecPath->setReadOnly(true);

        horizontalLayout_12->addWidget(advOutFFRecPath);

        advOutFFPathBrowse = new QPushButton(page_5);
        advOutFFPathBrowse->setObjectName(QStringLiteral("advOutFFPathBrowse"));

        horizontalLayout_12->addWidget(advOutFFPathBrowse);

        stackedWidget_2->addWidget(page_5);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        horizontalLayout_8 = new QHBoxLayout(page_4);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        advOutFFURL = new QLineEdit(page_4);
        advOutFFURL->setObjectName(QStringLiteral("advOutFFURL"));
        advOutFFURL->setEnabled(true);

        horizontalLayout_8->addWidget(advOutFFURL);

        stackedWidget_2->addWidget(page_4);

        formLayout_15->setWidget(1, QFormLayout::FieldRole, stackedWidget_2);

        label_16 = new QLabel(advOutRecFFmpeg);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout_15->setWidget(3, QFormLayout::LabelRole, label_16);

        advOutFFFormat = new QComboBox(advOutRecFFmpeg);
        advOutFFFormat->setObjectName(QStringLiteral("advOutFFFormat"));

        formLayout_15->setWidget(3, QFormLayout::FieldRole, advOutFFFormat);

        label_44 = new QLabel(advOutRecFFmpeg);
        label_44->setObjectName(QStringLiteral("label_44"));

        formLayout_15->setWidget(4, QFormLayout::LabelRole, label_44);

        advOutFFFormatDesc = new QLabel(advOutRecFFmpeg);
        advOutFFFormatDesc->setObjectName(QStringLiteral("advOutFFFormatDesc"));

        formLayout_15->setWidget(4, QFormLayout::FieldRole, advOutFFFormatDesc);

        label_40 = new QLabel(advOutRecFFmpeg);
        label_40->setObjectName(QStringLiteral("label_40"));

        formLayout_15->setWidget(7, QFormLayout::LabelRole, label_40);

        advOutFFVBitrate = new QSpinBox(advOutRecFFmpeg);
        advOutFFVBitrate->setObjectName(QStringLiteral("advOutFFVBitrate"));
        advOutFFVBitrate->setMinimum(0);
        advOutFFVBitrate->setMaximum(1000000000);
        advOutFFVBitrate->setValue(2500);

        formLayout_15->setWidget(7, QFormLayout::FieldRole, advOutFFVBitrate);

        advOutFFVGOPSize = new QSpinBox(advOutRecFFmpeg);
        advOutFFVGOPSize->setObjectName(QStringLiteral("advOutFFVGOPSize"));
        advOutFFVGOPSize->setMaximum(1000000000);
        advOutFFVGOPSize->setValue(250);

        formLayout_15->setWidget(8, QFormLayout::FieldRole, advOutFFVGOPSize);

        label_63 = new QLabel(advOutRecFFmpeg);
        label_63->setObjectName(QStringLiteral("label_63"));

        formLayout_15->setWidget(8, QFormLayout::LabelRole, label_63);

        advOutFFUseRescale = new QCheckBox(advOutRecFFmpeg);
        advOutFFUseRescale->setObjectName(QStringLiteral("advOutFFUseRescale"));
        sizePolicy1.setHeightForWidth(advOutFFUseRescale->sizePolicy().hasHeightForWidth());
        advOutFFUseRescale->setSizePolicy(sizePolicy1);
        advOutFFUseRescale->setLayoutDirection(Qt::RightToLeft);

        formLayout_15->setWidget(9, QFormLayout::LabelRole, advOutFFUseRescale);

        advOutFFRescale = new QComboBox(advOutRecFFmpeg);
        advOutFFRescale->setObjectName(QStringLiteral("advOutFFRescale"));
        advOutFFRescale->setEnabled(false);
        advOutFFRescale->setEditable(true);

        formLayout_15->setWidget(9, QFormLayout::FieldRole, advOutFFRescale);

        advOutFFIgnoreCompat = new QCheckBox(advOutRecFFmpeg);
        advOutFFIgnoreCompat->setObjectName(QStringLiteral("advOutFFIgnoreCompat"));

        formLayout_15->setWidget(10, QFormLayout::FieldRole, advOutFFIgnoreCompat);

        label_37 = new QLabel(advOutRecFFmpeg);
        label_37->setObjectName(QStringLiteral("label_37"));

        formLayout_15->setWidget(11, QFormLayout::LabelRole, label_37);

        advOutFFVEncoder = new QComboBox(advOutRecFFmpeg);
        advOutFFVEncoder->setObjectName(QStringLiteral("advOutFFVEncoder"));

        formLayout_15->setWidget(11, QFormLayout::FieldRole, advOutFFVEncoder);

        label_38 = new QLabel(advOutRecFFmpeg);
        label_38->setObjectName(QStringLiteral("label_38"));

        formLayout_15->setWidget(13, QFormLayout::LabelRole, label_38);

        advOutFFVCfg = new QLineEdit(advOutRecFFmpeg);
        advOutFFVCfg->setObjectName(QStringLiteral("advOutFFVCfg"));

        formLayout_15->setWidget(13, QFormLayout::FieldRole, advOutFFVCfg);

        label_41 = new QLabel(advOutRecFFmpeg);
        label_41->setObjectName(QStringLiteral("label_41"));

        formLayout_15->setWidget(14, QFormLayout::LabelRole, label_41);

        advOutFFABitrate = new QSpinBox(advOutRecFFmpeg);
        advOutFFABitrate->setObjectName(QStringLiteral("advOutFFABitrate"));
        advOutFFABitrate->setMinimum(32);
        advOutFFABitrate->setMaximum(4096);
        advOutFFABitrate->setSingleStep(16);
        advOutFFABitrate->setValue(128);

        formLayout_15->setWidget(14, QFormLayout::FieldRole, advOutFFABitrate);

        label_47 = new QLabel(advOutRecFFmpeg);
        label_47->setObjectName(QStringLiteral("label_47"));

        formLayout_15->setWidget(15, QFormLayout::LabelRole, label_47);

        widget_10 = new QWidget(advOutRecFFmpeg);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        sizePolicy6.setHeightForWidth(widget_10->sizePolicy().hasHeightForWidth());
        widget_10->setSizePolicy(sizePolicy6);
        horizontalLayout_10 = new QHBoxLayout(widget_10);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        advOutFFTrack1 = new QRadioButton(widget_10);
        advOutFFTrack1->setObjectName(QStringLiteral("advOutFFTrack1"));
        advOutFFTrack1->setText(QStringLiteral("1"));
        advOutFFTrack1->setChecked(true);

        horizontalLayout_10->addWidget(advOutFFTrack1);

        advOutFFTrack2 = new QRadioButton(widget_10);
        advOutFFTrack2->setObjectName(QStringLiteral("advOutFFTrack2"));
        advOutFFTrack2->setText(QStringLiteral("2"));

        horizontalLayout_10->addWidget(advOutFFTrack2);

        advOutFFTrack3 = new QRadioButton(widget_10);
        advOutFFTrack3->setObjectName(QStringLiteral("advOutFFTrack3"));
        advOutFFTrack3->setText(QStringLiteral("3"));

        horizontalLayout_10->addWidget(advOutFFTrack3);

        advOutFFTrack4 = new QRadioButton(widget_10);
        advOutFFTrack4->setObjectName(QStringLiteral("advOutFFTrack4"));
        advOutFFTrack4->setText(QStringLiteral("4"));

        horizontalLayout_10->addWidget(advOutFFTrack4);

        advOutFFTrack5 = new QRadioButton(widget_10);
        advOutFFTrack5->setObjectName(QStringLiteral("advOutFFTrack5"));
        advOutFFTrack5->setText(QStringLiteral("5"));

        horizontalLayout_10->addWidget(advOutFFTrack5);

        advOutFFTrack6 = new QRadioButton(widget_10);
        advOutFFTrack6->setObjectName(QStringLiteral("advOutFFTrack6"));
        advOutFFTrack6->setText(QStringLiteral("6"));

        horizontalLayout_10->addWidget(advOutFFTrack6);


        formLayout_15->setWidget(15, QFormLayout::FieldRole, widget_10);

        label_39 = new QLabel(advOutRecFFmpeg);
        label_39->setObjectName(QStringLiteral("label_39"));

        formLayout_15->setWidget(17, QFormLayout::LabelRole, label_39);

        advOutFFAEncoder = new QComboBox(advOutRecFFmpeg);
        advOutFFAEncoder->setObjectName(QStringLiteral("advOutFFAEncoder"));

        formLayout_15->setWidget(17, QFormLayout::FieldRole, advOutFFAEncoder);

        label_46 = new QLabel(advOutRecFFmpeg);
        label_46->setObjectName(QStringLiteral("label_46"));

        formLayout_15->setWidget(18, QFormLayout::LabelRole, label_46);

        advOutFFACfg = new QLineEdit(advOutRecFFmpeg);
        advOutFFACfg->setObjectName(QStringLiteral("advOutFFACfg"));

        formLayout_15->setWidget(18, QFormLayout::FieldRole, advOutFFACfg);

        label_48 = new QLabel(advOutRecFFmpeg);
        label_48->setObjectName(QStringLiteral("label_48"));
        sizePolicy7.setHeightForWidth(label_48->sizePolicy().hasHeightForWidth());
        label_48->setSizePolicy(sizePolicy7);
        label_48->setMinimumSize(QSize(170, 0));
        label_48->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_15->setWidget(0, QFormLayout::LabelRole, label_48);

        advOutFFType = new QComboBox(advOutRecFFmpeg);
        advOutFFType->setObjectName(QStringLiteral("advOutFFType"));

        formLayout_15->setWidget(0, QFormLayout::FieldRole, advOutFFType);

        label_1337 = new QLabel(advOutRecFFmpeg);
        label_1337->setObjectName(QStringLiteral("label_1337"));

        formLayout_15->setWidget(5, QFormLayout::LabelRole, label_1337);

        advOutFFMCfg = new QLineEdit(advOutRecFFmpeg);
        advOutFFMCfg->setObjectName(QStringLiteral("advOutFFMCfg"));

        formLayout_15->setWidget(5, QFormLayout::FieldRole, advOutFFMCfg);

        advOutFFNoSpace = new QCheckBox(advOutRecFFmpeg);
        advOutFFNoSpace->setObjectName(QStringLiteral("advOutFFNoSpace"));
        advOutFFNoSpace->setChecked(true);

        formLayout_15->setWidget(2, QFormLayout::FieldRole, advOutFFNoSpace);

        stackedWidget->addWidget(advOutRecFFmpeg);

        verticalLayout_11->addWidget(stackedWidget);

        advOutTabs->addTab(advOutputRecordTab, QString());
        advOutputAudioTracksTab = new QWidget();
        advOutputAudioTracksTab->setObjectName(QStringLiteral("advOutputAudioTracksTab"));
        verticalLayout_9 = new QVBoxLayout(advOutputAudioTracksTab);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(advOutputAudioTracksTab);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy8);
        verticalLayout_10 = new QVBoxLayout(widget_3);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        groupBox = new QGroupBox(widget_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        sizePolicy2.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy2);
        formLayout_10 = new QFormLayout(groupBox);
        formLayout_10->setObjectName(QStringLiteral("formLayout_10"));
        formLayout_10->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_10->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        advOutTrack1Bitrate = new QComboBox(groupBox);
        advOutTrack1Bitrate->setObjectName(QStringLiteral("advOutTrack1Bitrate"));

        formLayout_10->setWidget(0, QFormLayout::FieldRole, advOutTrack1Bitrate);

        label_25 = new QLabel(groupBox);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setMinimumSize(QSize(170, 0));
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_10->setWidget(0, QFormLayout::LabelRole, label_25);

        label_55 = new QLabel(groupBox);
        label_55->setObjectName(QStringLiteral("label_55"));

        formLayout_10->setWidget(1, QFormLayout::LabelRole, label_55);

        advOutTrack1Name = new QLineEdit(groupBox);
        advOutTrack1Name->setObjectName(QStringLiteral("advOutTrack1Name"));

        formLayout_10->setWidget(1, QFormLayout::FieldRole, advOutTrack1Name);


        verticalLayout_10->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy2.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy2);
        formLayout_11 = new QFormLayout(groupBox_2);
        formLayout_11->setObjectName(QStringLiteral("formLayout_11"));
        formLayout_11->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_11->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_49 = new QLabel(groupBox_2);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setMinimumSize(QSize(170, 0));
        label_49->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_11->setWidget(0, QFormLayout::LabelRole, label_49);

        advOutTrack2Bitrate = new QComboBox(groupBox_2);
        advOutTrack2Bitrate->setObjectName(QStringLiteral("advOutTrack2Bitrate"));

        formLayout_11->setWidget(0, QFormLayout::FieldRole, advOutTrack2Bitrate);

        label_50 = new QLabel(groupBox_2);
        label_50->setObjectName(QStringLiteral("label_50"));

        formLayout_11->setWidget(1, QFormLayout::LabelRole, label_50);

        advOutTrack2Name = new QLineEdit(groupBox_2);
        advOutTrack2Name->setObjectName(QStringLiteral("advOutTrack2Name"));

        formLayout_11->setWidget(1, QFormLayout::FieldRole, advOutTrack2Name);


        verticalLayout_10->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(widget_3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        sizePolicy2.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy2);
        formLayout_12 = new QFormLayout(groupBox_3);
        formLayout_12->setObjectName(QStringLiteral("formLayout_12"));
        formLayout_12->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_12->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_51 = new QLabel(groupBox_3);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setMinimumSize(QSize(170, 0));
        label_51->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_12->setWidget(0, QFormLayout::LabelRole, label_51);

        advOutTrack3Bitrate = new QComboBox(groupBox_3);
        advOutTrack3Bitrate->setObjectName(QStringLiteral("advOutTrack3Bitrate"));

        formLayout_12->setWidget(0, QFormLayout::FieldRole, advOutTrack3Bitrate);

        label_52 = new QLabel(groupBox_3);
        label_52->setObjectName(QStringLiteral("label_52"));

        formLayout_12->setWidget(1, QFormLayout::LabelRole, label_52);

        advOutTrack3Name = new QLineEdit(groupBox_3);
        advOutTrack3Name->setObjectName(QStringLiteral("advOutTrack3Name"));

        formLayout_12->setWidget(1, QFormLayout::FieldRole, advOutTrack3Name);


        verticalLayout_10->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(widget_3);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        sizePolicy2.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy2);
        formLayout_13 = new QFormLayout(groupBox_4);
        formLayout_13->setObjectName(QStringLiteral("formLayout_13"));
        formLayout_13->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_13->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_53 = new QLabel(groupBox_4);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setMinimumSize(QSize(170, 0));
        label_53->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_13->setWidget(0, QFormLayout::LabelRole, label_53);

        advOutTrack4Bitrate = new QComboBox(groupBox_4);
        advOutTrack4Bitrate->setObjectName(QStringLiteral("advOutTrack4Bitrate"));

        formLayout_13->setWidget(0, QFormLayout::FieldRole, advOutTrack4Bitrate);

        label_54 = new QLabel(groupBox_4);
        label_54->setObjectName(QStringLiteral("label_54"));

        formLayout_13->setWidget(1, QFormLayout::LabelRole, label_54);

        advOutTrack4Name = new QLineEdit(groupBox_4);
        advOutTrack4Name->setObjectName(QStringLiteral("advOutTrack4Name"));

        formLayout_13->setWidget(1, QFormLayout::FieldRole, advOutTrack4Name);


        verticalLayout_10->addWidget(groupBox_4);

        groupBox_9 = new QGroupBox(widget_3);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        sizePolicy2.setHeightForWidth(groupBox_9->sizePolicy().hasHeightForWidth());
        groupBox_9->setSizePolicy(sizePolicy2);
        formLayout_25 = new QFormLayout(groupBox_9);
        formLayout_25->setObjectName(QStringLiteral("formLayout_25"));
        formLayout_25->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_25->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_59 = new QLabel(groupBox_9);
        label_59->setObjectName(QStringLiteral("label_59"));
        label_59->setMinimumSize(QSize(170, 0));
        label_59->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_25->setWidget(0, QFormLayout::LabelRole, label_59);

        advOutTrack5Bitrate = new QComboBox(groupBox_9);
        advOutTrack5Bitrate->setObjectName(QStringLiteral("advOutTrack5Bitrate"));

        formLayout_25->setWidget(0, QFormLayout::FieldRole, advOutTrack5Bitrate);

        label_60 = new QLabel(groupBox_9);
        label_60->setObjectName(QStringLiteral("label_60"));

        formLayout_25->setWidget(1, QFormLayout::LabelRole, label_60);

        advOutTrack5Name = new QLineEdit(groupBox_9);
        advOutTrack5Name->setObjectName(QStringLiteral("advOutTrack5Name"));

        formLayout_25->setWidget(1, QFormLayout::FieldRole, advOutTrack5Name);


        verticalLayout_10->addWidget(groupBox_9);

        groupBox_12 = new QGroupBox(widget_3);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        sizePolicy2.setHeightForWidth(groupBox_12->sizePolicy().hasHeightForWidth());
        groupBox_12->setSizePolicy(sizePolicy2);
        formLayout_26 = new QFormLayout(groupBox_12);
        formLayout_26->setObjectName(QStringLiteral("formLayout_26"));
        formLayout_26->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_26->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_61 = new QLabel(groupBox_12);
        label_61->setObjectName(QStringLiteral("label_61"));
        label_61->setMinimumSize(QSize(170, 0));
        label_61->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_26->setWidget(0, QFormLayout::LabelRole, label_61);

        advOutTrack6Bitrate = new QComboBox(groupBox_12);
        advOutTrack6Bitrate->setObjectName(QStringLiteral("advOutTrack6Bitrate"));

        formLayout_26->setWidget(0, QFormLayout::FieldRole, advOutTrack6Bitrate);

        label_62 = new QLabel(groupBox_12);
        label_62->setObjectName(QStringLiteral("label_62"));

        formLayout_26->setWidget(1, QFormLayout::LabelRole, label_62);

        advOutTrack6Name = new QLineEdit(groupBox_12);
        advOutTrack6Name->setObjectName(QStringLiteral("advOutTrack6Name"));

        formLayout_26->setWidget(1, QFormLayout::FieldRole, advOutTrack6Name);


        verticalLayout_10->addWidget(groupBox_12);


        verticalLayout_9->addWidget(widget_3, 0, Qt::AlignTop);

        advOutTabs->addTab(advOutputAudioTracksTab, QString());

        verticalLayout_8->addWidget(advOutTabs);

        outputModePages->addWidget(advOutputsPage);

        verticalLayout_2->addWidget(outputModePages);

        settingsPages->addWidget(outputPage);
        audioPage = new QWidget();
        audioPage->setObjectName(QStringLiteral("audioPage"));
        formLayout = new QFormLayout(audioPage);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_14 = new QLabel(audioPage);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_14);

        sampleRate = new QComboBox(audioPage);
        sampleRate->setObjectName(QStringLiteral("sampleRate"));
        sampleRate->setCurrentText(QStringLiteral("44.1khz"));

        formLayout->setWidget(0, QFormLayout::FieldRole, sampleRate);

        label_15 = new QLabel(audioPage);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_15);

        channelSetup = new QComboBox(audioPage);
        channelSetup->setObjectName(QStringLiteral("channelSetup"));

        formLayout->setWidget(1, QFormLayout::FieldRole, channelSetup);

        label_2 = new QLabel(audioPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(170, 0));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        desktopAudioDevice1 = new QComboBox(audioPage);
        desktopAudioDevice1->setObjectName(QStringLiteral("desktopAudioDevice1"));
        desktopAudioDevice1->setEnabled(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, desktopAudioDevice1);

        label_3 = new QLabel(audioPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        desktopAudioDevice2 = new QComboBox(audioPage);
        desktopAudioDevice2->setObjectName(QStringLiteral("desktopAudioDevice2"));
        desktopAudioDevice2->setEnabled(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, desktopAudioDevice2);

        label_4 = new QLabel(audioPage);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        auxAudioDevice1 = new QComboBox(audioPage);
        auxAudioDevice1->setObjectName(QStringLiteral("auxAudioDevice1"));
        auxAudioDevice1->setEnabled(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, auxAudioDevice1);

        label_5 = new QLabel(audioPage);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        auxAudioDevice2 = new QComboBox(audioPage);
        auxAudioDevice2->setObjectName(QStringLiteral("auxAudioDevice2"));
        auxAudioDevice2->setEnabled(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, auxAudioDevice2);

        label_6 = new QLabel(audioPage);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        auxAudioDevice3 = new QComboBox(audioPage);
        auxAudioDevice3->setObjectName(QStringLiteral("auxAudioDevice3"));
        auxAudioDevice3->setEnabled(true);

        formLayout->setWidget(6, QFormLayout::FieldRole, auxAudioDevice3);

        audioSourceScrollArea = new QScrollArea(audioPage);
        audioSourceScrollArea->setObjectName(QStringLiteral("audioSourceScrollArea"));
        audioSourceScrollArea->setWidgetResizable(true);
        audioSourceWidget = new QWidget();
        audioSourceWidget->setObjectName(QStringLiteral("audioSourceWidget"));
        audioSourceWidget->setGeometry(QRect(0, 0, 98, 28));
        audioSourceScrollArea->setWidget(audioSourceWidget);

        formLayout->setWidget(7, QFormLayout::SpanningRole, audioSourceScrollArea);

        audioMsg = new QLabel(audioPage);
        audioMsg->setObjectName(QStringLiteral("audioMsg"));
        audioMsg->setStyleSheet(QStringLiteral("color: rgb(255, 0, 4);"));
        audioMsg->setText(QStringLiteral(""));
        audioMsg->setWordWrap(true);

        formLayout->setWidget(8, QFormLayout::FieldRole, audioMsg);

        settingsPages->addWidget(audioPage);
        videoPage = new QWidget();
        videoPage->setObjectName(QStringLiteral("videoPage"));
        formLayout_3 = new QFormLayout(videoPage);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_3->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8 = new QLabel(videoPage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(170, 0));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_8);

        baseResolution = new QComboBox(videoPage);
        baseResolution->setObjectName(QStringLiteral("baseResolution"));
        baseResolution->setEditable(true);
        baseResolution->setCurrentText(QStringLiteral(""));
        baseResolution->setDuplicatesEnabled(false);
        baseResolution->setFrame(true);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, baseResolution);

        label_10 = new QLabel(videoPage);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_10);

        outputResolution = new QComboBox(videoPage);
        outputResolution->setObjectName(QStringLiteral("outputResolution"));
        outputResolution->setEditable(true);
        outputResolution->setCurrentText(QStringLiteral(""));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, outputResolution);

        label_11 = new QLabel(videoPage);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_11);

        downscaleFilter = new QComboBox(videoPage);
        downscaleFilter->setObjectName(QStringLiteral("downscaleFilter"));
        downscaleFilter->setEnabled(true);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, downscaleFilter);

        fpsType = new QComboBox(videoPage);
        fpsType->setObjectName(QStringLiteral("fpsType"));
        sizePolicy5.setHeightForWidth(fpsType->sizePolicy().hasHeightForWidth());
        fpsType->setSizePolicy(sizePolicy5);
        fpsType->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        formLayout_3->setWidget(3, QFormLayout::LabelRole, fpsType);

        fpsTypes = new QStackedWidget(videoPage);
        fpsTypes->setObjectName(QStringLiteral("fpsTypes"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        horizontalLayout_2 = new QHBoxLayout(page);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        fpsCommon = new QComboBox(page);
        fpsCommon->addItem(QStringLiteral("10"));
        fpsCommon->addItem(QStringLiteral("20"));
        fpsCommon->addItem(QString());
        fpsCommon->addItem(QStringLiteral("29.97"));
        fpsCommon->addItem(QStringLiteral("30"));
        fpsCommon->addItem(QStringLiteral("48"));
        fpsCommon->addItem(QStringLiteral("59.94"));
        fpsCommon->addItem(QStringLiteral("60"));
        fpsCommon->setObjectName(QStringLiteral("fpsCommon"));
        fpsCommon->setCurrentText(QStringLiteral("10"));

        horizontalLayout_2->addWidget(fpsCommon, 0, Qt::AlignTop);

        fpsTypes->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        horizontalLayout_3 = new QHBoxLayout(page_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        fpsInteger = new QSpinBox(page_3);
        fpsInteger->setObjectName(QStringLiteral("fpsInteger"));
        fpsInteger->setMinimum(1);
        fpsInteger->setMaximum(120);
        fpsInteger->setValue(30);

        horizontalLayout_3->addWidget(fpsInteger, 0, Qt::AlignTop);

        fpsTypes->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        formLayout_4 = new QFormLayout(page_2);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_4->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        fpsNumerator = new QSpinBox(page_2);
        fpsNumerator->setObjectName(QStringLiteral("fpsNumerator"));
        fpsNumerator->setMinimum(1);
        fpsNumerator->setMaximum(1000000);
        fpsNumerator->setValue(30);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, fpsNumerator);

        fpsDenominator = new QSpinBox(page_2);
        fpsDenominator->setObjectName(QStringLiteral("fpsDenominator"));
        fpsDenominator->setMinimum(1);
        fpsDenominator->setMaximum(1000000);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, fpsDenominator);

        label_12 = new QLabel(page_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_12);

        label_13 = new QLabel(page_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_13);

        fpsTypes->addWidget(page_2);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, fpsTypes);

        videoMsg = new QLabel(videoPage);
        videoMsg->setObjectName(QStringLiteral("videoMsg"));
        sizePolicy7.setHeightForWidth(videoMsg->sizePolicy().hasHeightForWidth());
        videoMsg->setSizePolicy(sizePolicy7);
        videoMsg->setStyleSheet(QStringLiteral("color: rgb(255, 0, 4);"));
        videoMsg->setText(QStringLiteral(""));
        videoMsg->setWordWrap(true);

        formLayout_3->setWidget(4, QFormLayout::FieldRole, videoMsg);

        settingsPages->addWidget(videoPage);
        hotkeyPage = new QScrollArea();
        hotkeyPage->setObjectName(QStringLiteral("hotkeyPage"));
        hotkeyPage->setWidgetResizable(true);
        hotkeyWidget = new QWidget();
        hotkeyWidget->setObjectName(QStringLiteral("hotkeyWidget"));
        hotkeyWidget->setGeometry(QRect(0, 0, 98, 28));
        hotkeyLayout = new QFormLayout(hotkeyWidget);
        hotkeyLayout->setObjectName(QStringLiteral("hotkeyLayout"));
        hotkeyLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        hotkeyLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        hotkeyLayout->setVerticalSpacing(0);
        hotkeyPage->setWidget(hotkeyWidget);
        settingsPages->addWidget(hotkeyPage);
        advancedPage = new QWidget();
        advancedPage->setObjectName(QStringLiteral("advancedPage"));
        horizontalLayout_11 = new QHBoxLayout(advancedPage);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(advancedPage);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 803, 738));
        verticalLayout_16 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 9);
        widget_11 = new QWidget(scrollAreaWidgetContents);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        verticalLayout_17 = new QVBoxLayout(widget_11);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        advancedGeneralGroupBox = new QGroupBox(widget_11);
        advancedGeneralGroupBox->setObjectName(QStringLiteral("advancedGeneralGroupBox"));
        formLayout_22 = new QFormLayout(advancedGeneralGroupBox);
        formLayout_22->setObjectName(QStringLiteral("formLayout_22"));
        formLayout_22->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        processPriorityLabel = new QLabel(advancedGeneralGroupBox);
        processPriorityLabel->setObjectName(QStringLiteral("processPriorityLabel"));

        formLayout_22->setWidget(0, QFormLayout::LabelRole, processPriorityLabel);

        processPriority = new QComboBox(advancedGeneralGroupBox);
        processPriority->setObjectName(QStringLiteral("processPriority"));

        formLayout_22->setWidget(0, QFormLayout::FieldRole, processPriority);


        verticalLayout_17->addWidget(advancedGeneralGroupBox);

        advancedVideoContainer = new QGroupBox(widget_11);
        advancedVideoContainer->setObjectName(QStringLiteral("advancedVideoContainer"));
        formLayout_14 = new QFormLayout(advancedVideoContainer);
        formLayout_14->setObjectName(QStringLiteral("formLayout_14"));
        formLayout_14->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_14->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        rendererLabel = new QLabel(advancedVideoContainer);
        rendererLabel->setObjectName(QStringLiteral("rendererLabel"));

        formLayout_14->setWidget(0, QFormLayout::LabelRole, rendererLabel);

        renderer = new QComboBox(advancedVideoContainer);
        renderer->setObjectName(QStringLiteral("renderer"));
        renderer->setCurrentText(QStringLiteral(""));

        formLayout_14->setWidget(0, QFormLayout::FieldRole, renderer);

        adapterLabel = new QLabel(advancedVideoContainer);
        adapterLabel->setObjectName(QStringLiteral("adapterLabel"));
        adapterLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_14->setWidget(1, QFormLayout::LabelRole, adapterLabel);

        adapter = new QComboBox(advancedVideoContainer);
        adapter->setObjectName(QStringLiteral("adapter"));
        adapter->setEnabled(false);
        adapter->setCurrentText(QStringLiteral(""));

        formLayout_14->setWidget(1, QFormLayout::FieldRole, adapter);

        label_30 = new QLabel(advancedVideoContainer);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setMinimumSize(QSize(0, 0));
        label_30->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_14->setWidget(2, QFormLayout::LabelRole, label_30);

        colorFormat = new QComboBox(advancedVideoContainer);
        colorFormat->addItem(QStringLiteral("NV12"));
        colorFormat->addItem(QStringLiteral("I420"));
        colorFormat->addItem(QString());
        colorFormat->addItem(QStringLiteral("RGB"));
        colorFormat->setObjectName(QStringLiteral("colorFormat"));

        formLayout_14->setWidget(2, QFormLayout::FieldRole, colorFormat);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        disableOSXVSync = new QCheckBox(advancedVideoContainer);
        disableOSXVSync->setObjectName(QStringLiteral("disableOSXVSync"));

        horizontalLayout_18->addWidget(disableOSXVSync);

        resetOSXVSync = new QCheckBox(advancedVideoContainer);
        resetOSXVSync->setObjectName(QStringLiteral("resetOSXVSync"));

        horizontalLayout_18->addWidget(resetOSXVSync);


        formLayout_14->setLayout(4, QFormLayout::FieldRole, horizontalLayout_18);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        colorSpace = new QComboBox(advancedVideoContainer);
        colorSpace->insertItems(0, QStringList()
         << QStringLiteral("709")
         << QStringLiteral("601")
        );
        colorSpace->setObjectName(QStringLiteral("colorSpace"));

        horizontalLayout_20->addWidget(colorSpace);

        label_34 = new QLabel(advancedVideoContainer);
        label_34->setObjectName(QStringLiteral("label_34"));
        sizePolicy6.setHeightForWidth(label_34->sizePolicy().hasHeightForWidth());
        label_34->setSizePolicy(sizePolicy6);

        horizontalLayout_20->addWidget(label_34);

        colorRange = new QComboBox(advancedVideoContainer);
        colorRange->setObjectName(QStringLiteral("colorRange"));

        horizontalLayout_20->addWidget(colorRange);


        formLayout_14->setLayout(3, QFormLayout::FieldRole, horizontalLayout_20);

        label_33 = new QLabel(advancedVideoContainer);
        label_33->setObjectName(QStringLiteral("label_33"));

        formLayout_14->setWidget(3, QFormLayout::LabelRole, label_33);


        verticalLayout_17->addWidget(advancedVideoContainer);

        advAudioGroupBox = new QGroupBox(widget_11);
        advAudioGroupBox->setObjectName(QStringLiteral("advAudioGroupBox"));
        formLayout_27 = new QFormLayout(advAudioGroupBox);
        formLayout_27->setObjectName(QStringLiteral("formLayout_27"));
        formLayout_27->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        monitoringDeviceLabel = new QLabel(advAudioGroupBox);
        monitoringDeviceLabel->setObjectName(QStringLiteral("monitoringDeviceLabel"));

        formLayout_27->setWidget(0, QFormLayout::LabelRole, monitoringDeviceLabel);

        monitoringDevice = new QComboBox(advAudioGroupBox);
        monitoringDevice->setObjectName(QStringLiteral("monitoringDevice"));

        formLayout_27->setWidget(0, QFormLayout::FieldRole, monitoringDevice);


        verticalLayout_17->addWidget(advAudioGroupBox);

        groupBox_6 = new QGroupBox(widget_11);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        formLayout_17 = new QFormLayout(groupBox_6);
        formLayout_17->setObjectName(QStringLiteral("formLayout_17"));
        formLayout_17->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_17->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_7 = new QLabel(groupBox_6);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_17->setWidget(0, QFormLayout::LabelRole, label_7);

        filenameFormatting = new QLineEdit(groupBox_6);
        filenameFormatting->setObjectName(QStringLiteral("filenameFormatting"));

        formLayout_17->setWidget(0, QFormLayout::FieldRole, filenameFormatting);

        overwriteIfExists = new QCheckBox(groupBox_6);
        overwriteIfExists->setObjectName(QStringLiteral("overwriteIfExists"));

        formLayout_17->setWidget(1, QFormLayout::FieldRole, overwriteIfExists);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        simpleRBPrefix = new QLineEdit(groupBox_6);
        simpleRBPrefix->setObjectName(QStringLiteral("simpleRBPrefix"));

        horizontalLayout_14->addWidget(simpleRBPrefix);

        label_58 = new QLabel(groupBox_6);
        label_58->setObjectName(QStringLiteral("label_58"));

        horizontalLayout_14->addWidget(label_58);

        simpleRBSuffix = new QLineEdit(groupBox_6);
        simpleRBSuffix->setObjectName(QStringLiteral("simpleRBSuffix"));

        horizontalLayout_14->addWidget(simpleRBSuffix);


        formLayout_17->setLayout(2, QFormLayout::FieldRole, horizontalLayout_14);

        label_57 = new QLabel(groupBox_6);
        label_57->setObjectName(QStringLiteral("label_57"));

        formLayout_17->setWidget(2, QFormLayout::LabelRole, label_57);


        verticalLayout_17->addWidget(groupBox_6);

        groupBox_5 = new QGroupBox(widget_11);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        formLayout_18 = new QFormLayout(groupBox_5);
        formLayout_18->setObjectName(QStringLiteral("formLayout_18"));
        formLayout_18->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_18->setContentsMargins(-1, 2, -1, -1);
        label_56 = new QLabel(groupBox_5);
        label_56->setObjectName(QStringLiteral("label_56"));

        formLayout_18->setWidget(1, QFormLayout::LabelRole, label_56);

        widget_12 = new QWidget(groupBox_5);
        widget_12->setObjectName(QStringLiteral("widget_12"));
        widget_12->setEnabled(true);
        horizontalLayout_13 = new QHBoxLayout(widget_12);
        horizontalLayout_13->setSpacing(5);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        streamDelaySec = new QSpinBox(widget_12);
        streamDelaySec->setObjectName(QStringLiteral("streamDelaySec"));
        streamDelaySec->setEnabled(true);
        QSizePolicy sizePolicy9(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(streamDelaySec->sizePolicy().hasHeightForWidth());
        streamDelaySec->setSizePolicy(sizePolicy9);
        streamDelaySec->setMinimumSize(QSize(80, 0));
        streamDelaySec->setSuffix(QStringLiteral("s"));
        streamDelaySec->setMinimum(1);
        streamDelaySec->setMaximum(1800);

        horizontalLayout_13->addWidget(streamDelaySec);

        streamDelayInfo = new QLabel(widget_12);
        streamDelayInfo->setObjectName(QStringLiteral("streamDelayInfo"));
        streamDelayInfo->setText(QStringLiteral("Estimated RAM goes here"));

        horizontalLayout_13->addWidget(streamDelayInfo);


        formLayout_18->setWidget(1, QFormLayout::FieldRole, widget_12);

        streamDelayPreserve = new QCheckBox(groupBox_5);
        streamDelayPreserve->setObjectName(QStringLiteral("streamDelayPreserve"));

        formLayout_18->setWidget(2, QFormLayout::FieldRole, streamDelayPreserve);

        streamDelayEnable = new QCheckBox(groupBox_5);
        streamDelayEnable->setObjectName(QStringLiteral("streamDelayEnable"));
        streamDelayEnable->setChecked(true);

        formLayout_18->setWidget(0, QFormLayout::FieldRole, streamDelayEnable);


        verticalLayout_17->addWidget(groupBox_5);

        groupBox_7 = new QGroupBox(widget_11);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        formLayout_19 = new QFormLayout(groupBox_7);
        formLayout_19->setObjectName(QStringLiteral("formLayout_19"));
        formLayout_19->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        reconnectEnable = new QCheckBox(groupBox_7);
        reconnectEnable->setObjectName(QStringLiteral("reconnectEnable"));
        reconnectEnable->setChecked(true);

        formLayout_19->setWidget(0, QFormLayout::FieldRole, reconnectEnable);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        reconnectRetryDelay = new QSpinBox(groupBox_7);
        reconnectRetryDelay->setObjectName(QStringLiteral("reconnectRetryDelay"));
        reconnectRetryDelay->setMaximum(30);

        horizontalLayout_19->addWidget(reconnectRetryDelay);

        label_22 = new QLabel(groupBox_7);
        label_22->setObjectName(QStringLiteral("label_22"));
        sizePolicy6.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy6);

        horizontalLayout_19->addWidget(label_22);

        reconnectMaxRetries = new QSpinBox(groupBox_7);
        reconnectMaxRetries->setObjectName(QStringLiteral("reconnectMaxRetries"));
        reconnectMaxRetries->setMinimum(1);
        reconnectMaxRetries->setMaximum(10000);

        horizontalLayout_19->addWidget(reconnectMaxRetries);


        formLayout_19->setLayout(1, QFormLayout::FieldRole, horizontalLayout_19);

        label_17 = new QLabel(groupBox_7);
        label_17->setObjectName(QStringLiteral("label_17"));

        formLayout_19->setWidget(1, QFormLayout::LabelRole, label_17);


        verticalLayout_17->addWidget(groupBox_7);

        groupBox_11 = new QGroupBox(widget_11);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        formLayout_23 = new QFormLayout(groupBox_11);
        formLayout_23->setObjectName(QStringLiteral("formLayout_23"));
        formLayout_23->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        bindToIP = new QComboBox(groupBox_11);
        bindToIP->setObjectName(QStringLiteral("bindToIP"));

        formLayout_23->setWidget(0, QFormLayout::FieldRole, bindToIP);

        label_27 = new QLabel(groupBox_11);
        label_27->setObjectName(QStringLiteral("label_27"));

        formLayout_23->setWidget(0, QFormLayout::LabelRole, label_27);

        enableNewSocketLoop = new QCheckBox(groupBox_11);
        enableNewSocketLoop->setObjectName(QStringLiteral("enableNewSocketLoop"));

        formLayout_23->setWidget(1, QFormLayout::FieldRole, enableNewSocketLoop);

        enableLowLatencyMode = new QCheckBox(groupBox_11);
        enableLowLatencyMode->setObjectName(QStringLiteral("enableLowLatencyMode"));
        enableLowLatencyMode->setEnabled(false);

        formLayout_23->setWidget(2, QFormLayout::FieldRole, enableLowLatencyMode);


        verticalLayout_17->addWidget(groupBox_11);

        advancedMsg = new QLabel(widget_11);
        advancedMsg->setObjectName(QStringLiteral("advancedMsg"));
        advancedMsg->setStyleSheet(QStringLiteral("color: rgb(255, 0, 4);"));
        advancedMsg->setText(QStringLiteral(""));
        advancedMsg->setWordWrap(true);

        verticalLayout_17->addWidget(advancedMsg);

        advancedMsg2 = new QLabel(widget_11);
        advancedMsg2->setObjectName(QStringLiteral("advancedMsg2"));
        advancedMsg2->setStyleSheet(QStringLiteral("color: rgb(255, 0, 4);"));
        advancedMsg2->setText(QStringLiteral(""));
        advancedMsg2->setWordWrap(true);

        verticalLayout_17->addWidget(advancedMsg2);


        verticalLayout_16->addWidget(widget_11, 0, Qt::AlignTop);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_11->addWidget(scrollArea);

        settingsPages->addWidget(advancedPage);

        horizontalLayout->addWidget(settingsPages);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(OBSBasicSettings);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(language);
        label_42->setBuddy(theme);
        label_9->setBuddy(snapDistance);
        label_21->setBuddy(streamType);
        outputModeLabel->setBuddy(outputMode);
        label_19->setBuddy(simpleOutputVBitrate);
        label_20->setBuddy(simpleOutputABitrate);
        label_24->setBuddy(simpleOutPreset);
        label_23->setBuddy(simpleOutCustom);
        simpleOutRecEncoderLabel_2->setBuddy(simpleOutRecEncoder);
        label_18->setBuddy(simpleOutputPath);
        label_26->setBuddy(simpleOutRecQuality);
        simpleOutRecFormatLabel->setBuddy(simpleOutRecFormat);
        simpleOutRecEncoderLabel->setBuddy(simpleOutRecEncoder);
        label_420->setBuddy(simpleOutMuxCustom);
        advOutEncLabel->setBuddy(advOutEncoder);
        label_31->setBuddy(advOutRecType);
        label_32->setBuddy(advOutRecPath);
        label_43->setBuddy(advOutRecFormat);
        advOutRecEncLabel->setBuddy(advOutRecEncoder);
        label_9001->setBuddy(advOutMuxCustom);
        label_16->setBuddy(advOutFFFormat);
        label_40->setBuddy(advOutFFVBitrate);
        label_63->setBuddy(advOutFFVGOPSize);
        label_37->setBuddy(advOutFFVEncoder);
        label_38->setBuddy(advOutFFVCfg);
        label_41->setBuddy(advOutFFABitrate);
        label_39->setBuddy(advOutFFAEncoder);
        label_46->setBuddy(advOutFFACfg);
        label_48->setBuddy(advOutFFType);
        label_1337->setBuddy(advOutFFMCfg);
        label_25->setBuddy(advOutTrack1Bitrate);
        label_55->setBuddy(advOutTrack1Name);
        label_49->setBuddy(advOutTrack2Bitrate);
        label_50->setBuddy(advOutTrack2Name);
        label_51->setBuddy(advOutTrack3Bitrate);
        label_52->setBuddy(advOutTrack3Name);
        label_53->setBuddy(advOutTrack4Bitrate);
        label_54->setBuddy(advOutTrack4Name);
        label_59->setBuddy(advOutTrack5Bitrate);
        label_60->setBuddy(advOutTrack5Name);
        label_61->setBuddy(advOutTrack6Bitrate);
        label_62->setBuddy(advOutTrack6Name);
        label_14->setBuddy(sampleRate);
        label_15->setBuddy(channelSetup);
        label_2->setBuddy(desktopAudioDevice1);
        label_3->setBuddy(desktopAudioDevice2);
        label_4->setBuddy(auxAudioDevice1);
        label_5->setBuddy(auxAudioDevice2);
        label_6->setBuddy(auxAudioDevice3);
        label_8->setBuddy(baseResolution);
        label_10->setBuddy(outputResolution);
        label_11->setBuddy(downscaleFilter);
        processPriorityLabel->setBuddy(processPriority);
        rendererLabel->setBuddy(renderer);
        adapterLabel->setBuddy(adapter);
        label_30->setBuddy(colorFormat);
        label_34->setBuddy(colorRange);
        label_33->setBuddy(colorSpace);
        monitoringDeviceLabel->setBuddy(monitoringDevice);
        label_7->setBuddy(filenameFormatting);
        label_58->setBuddy(simpleRBSuffix);
        label_57->setBuddy(simpleRBPrefix);
        label_56->setBuddy(streamDelaySec);
        label_22->setBuddy(reconnectMaxRetries);
        label_17->setBuddy(reconnectRetryDelay);
        label_27->setBuddy(bindToIP);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(listWidget, streamType);
        QWidget::setTabOrder(streamType, outputMode);
        QWidget::setTabOrder(outputMode, simpleOutputVBitrate);
        QWidget::setTabOrder(simpleOutputVBitrate, simpleOutputABitrate);
        QWidget::setTabOrder(simpleOutputABitrate, simpleOutAdvanced);
        QWidget::setTabOrder(simpleOutAdvanced, simpleOutPreset);
        QWidget::setTabOrder(simpleOutPreset, simpleOutCustom);
        QWidget::setTabOrder(simpleOutCustom, simpleOutEnforce);
        QWidget::setTabOrder(simpleOutEnforce, simpleOutStrEncoder);
        QWidget::setTabOrder(simpleOutStrEncoder, simpleOutputPath);
        QWidget::setTabOrder(simpleOutputPath, simpleOutputBrowse);
        QWidget::setTabOrder(simpleOutputBrowse, simpleNoSpace);
        QWidget::setTabOrder(simpleNoSpace, simpleOutRecQuality);
        QWidget::setTabOrder(simpleOutRecQuality, simpleOutRecFormat);
        QWidget::setTabOrder(simpleOutRecFormat, simpleOutRecEncoder);
        QWidget::setTabOrder(simpleOutRecEncoder, simpleOutMuxCustom);
        QWidget::setTabOrder(simpleOutMuxCustom, simpleReplayBuf);
        QWidget::setTabOrder(simpleReplayBuf, simpleRBSecMax);
        QWidget::setTabOrder(simpleRBSecMax, simpleRBMegsMax);
        QWidget::setTabOrder(simpleRBMegsMax, advOutTabs);
        QWidget::setTabOrder(advOutTabs, advOutTrack1);
        QWidget::setTabOrder(advOutTrack1, advOutTrack2);
        QWidget::setTabOrder(advOutTrack2, advOutTrack3);
        QWidget::setTabOrder(advOutTrack3, advOutTrack4);
        QWidget::setTabOrder(advOutTrack4, advOutTrack5);
        QWidget::setTabOrder(advOutTrack5, advOutTrack6);
        QWidget::setTabOrder(advOutTrack6, advOutEncoder);
        QWidget::setTabOrder(advOutEncoder, advOutApplyService);
        QWidget::setTabOrder(advOutApplyService, advOutUseRescale);
        QWidget::setTabOrder(advOutUseRescale, advOutRescale);
        QWidget::setTabOrder(advOutRescale, advOutRecType);
        QWidget::setTabOrder(advOutRecType, advOutRecPath);
        QWidget::setTabOrder(advOutRecPath, advOutRecPathBrowse);
        QWidget::setTabOrder(advOutRecPathBrowse, advOutNoSpace);
        QWidget::setTabOrder(advOutNoSpace, advOutRecFormat);
        QWidget::setTabOrder(advOutRecFormat, advOutRecTrack1);
        QWidget::setTabOrder(advOutRecTrack1, advOutRecTrack2);
        QWidget::setTabOrder(advOutRecTrack2, advOutRecTrack3);
        QWidget::setTabOrder(advOutRecTrack3, advOutRecTrack4);
        QWidget::setTabOrder(advOutRecTrack4, advOutRecTrack5);
        QWidget::setTabOrder(advOutRecTrack5, advOutRecTrack6);
        QWidget::setTabOrder(advOutRecTrack6, advOutRecEncoder);
        QWidget::setTabOrder(advOutRecEncoder, advOutRecUseRescale);
        QWidget::setTabOrder(advOutRecUseRescale, advOutRecRescale);
        QWidget::setTabOrder(advOutRecRescale, advOutMuxCustom);
        QWidget::setTabOrder(advOutMuxCustom, advOutFFRecPath);
        QWidget::setTabOrder(advOutFFRecPath, advOutFFPathBrowse);
        QWidget::setTabOrder(advOutFFPathBrowse, advOutFFURL);
        QWidget::setTabOrder(advOutFFURL, advOutFFFormat);
        QWidget::setTabOrder(advOutFFFormat, advOutFFVBitrate);
        QWidget::setTabOrder(advOutFFVBitrate, advOutFFVGOPSize);
        QWidget::setTabOrder(advOutFFVGOPSize, advOutFFUseRescale);
        QWidget::setTabOrder(advOutFFUseRescale, advOutFFRescale);
        QWidget::setTabOrder(advOutFFRescale, advOutFFIgnoreCompat);
        QWidget::setTabOrder(advOutFFIgnoreCompat, advOutFFVEncoder);
        QWidget::setTabOrder(advOutFFVEncoder, advOutFFVCfg);
        QWidget::setTabOrder(advOutFFVCfg, advOutFFABitrate);
        QWidget::setTabOrder(advOutFFABitrate, advOutFFTrack1);
        QWidget::setTabOrder(advOutFFTrack1, advOutFFTrack2);
        QWidget::setTabOrder(advOutFFTrack2, advOutFFTrack3);
        QWidget::setTabOrder(advOutFFTrack3, advOutFFTrack4);
        QWidget::setTabOrder(advOutFFTrack4, advOutFFTrack5);
        QWidget::setTabOrder(advOutFFTrack5, advOutFFTrack6);
        QWidget::setTabOrder(advOutFFTrack6, advOutFFAEncoder);
        QWidget::setTabOrder(advOutFFAEncoder, advOutFFACfg);
        QWidget::setTabOrder(advOutFFACfg, advOutFFType);
        QWidget::setTabOrder(advOutFFType, advOutFFMCfg);
        QWidget::setTabOrder(advOutFFMCfg, advOutFFNoSpace);
        QWidget::setTabOrder(advOutFFNoSpace, advOutTrack1Bitrate);
        QWidget::setTabOrder(advOutTrack1Bitrate, advOutTrack1Name);
        QWidget::setTabOrder(advOutTrack1Name, advOutTrack2Bitrate);
        QWidget::setTabOrder(advOutTrack2Bitrate, advOutTrack2Name);
        QWidget::setTabOrder(advOutTrack2Name, advOutTrack3Bitrate);
        QWidget::setTabOrder(advOutTrack3Bitrate, advOutTrack3Name);
        QWidget::setTabOrder(advOutTrack3Name, advOutTrack4Bitrate);
        QWidget::setTabOrder(advOutTrack4Bitrate, advOutTrack4Name);
        QWidget::setTabOrder(advOutTrack4Name, advOutTrack5Bitrate);
        QWidget::setTabOrder(advOutTrack5Bitrate, advOutTrack5Name);
        QWidget::setTabOrder(advOutTrack5Name, advOutTrack6Bitrate);
        QWidget::setTabOrder(advOutTrack6Bitrate, advOutTrack6Name);
        QWidget::setTabOrder(advOutTrack6Name, sampleRate);
        QWidget::setTabOrder(sampleRate, channelSetup);
        QWidget::setTabOrder(channelSetup, desktopAudioDevice1);
        QWidget::setTabOrder(desktopAudioDevice1, desktopAudioDevice2);
        QWidget::setTabOrder(desktopAudioDevice2, auxAudioDevice1);
        QWidget::setTabOrder(auxAudioDevice1, auxAudioDevice2);
        QWidget::setTabOrder(auxAudioDevice2, auxAudioDevice3);
        QWidget::setTabOrder(auxAudioDevice3, audioSourceScrollArea);
        QWidget::setTabOrder(audioSourceScrollArea, baseResolution);
        QWidget::setTabOrder(baseResolution, outputResolution);
        QWidget::setTabOrder(outputResolution, downscaleFilter);
        QWidget::setTabOrder(downscaleFilter, fpsType);
        QWidget::setTabOrder(fpsType, fpsCommon);
        QWidget::setTabOrder(fpsCommon, fpsInteger);
        QWidget::setTabOrder(fpsInteger, fpsNumerator);
        QWidget::setTabOrder(fpsNumerator, fpsDenominator);
        QWidget::setTabOrder(fpsDenominator, scrollArea);
        QWidget::setTabOrder(scrollArea, processPriority);
        QWidget::setTabOrder(processPriority, renderer);
        QWidget::setTabOrder(renderer, adapter);
        QWidget::setTabOrder(adapter, colorFormat);
        QWidget::setTabOrder(colorFormat, colorSpace);
        QWidget::setTabOrder(colorSpace, colorRange);
        QWidget::setTabOrder(colorRange, disableOSXVSync);
        QWidget::setTabOrder(disableOSXVSync, resetOSXVSync);
        QWidget::setTabOrder(resetOSXVSync, monitoringDevice);
        QWidget::setTabOrder(monitoringDevice, filenameFormatting);
        QWidget::setTabOrder(filenameFormatting, overwriteIfExists);
        QWidget::setTabOrder(overwriteIfExists, simpleRBPrefix);
        QWidget::setTabOrder(simpleRBPrefix, simpleRBSuffix);
        QWidget::setTabOrder(simpleRBSuffix, streamDelayEnable);
        QWidget::setTabOrder(streamDelayEnable, streamDelaySec);
        QWidget::setTabOrder(streamDelaySec, streamDelayPreserve);
        QWidget::setTabOrder(streamDelayPreserve, reconnectEnable);
        QWidget::setTabOrder(reconnectEnable, reconnectRetryDelay);
        QWidget::setTabOrder(reconnectRetryDelay, reconnectMaxRetries);
        QWidget::setTabOrder(reconnectMaxRetries, bindToIP);
        QWidget::setTabOrder(bindToIP, enableNewSocketLoop);
        QWidget::setTabOrder(enableNewSocketLoop, enableLowLatencyMode);
        QWidget::setTabOrder(enableLowLatencyMode, warnBeforeStreamStop);
        QWidget::setTabOrder(warnBeforeStreamStop, recordWhenStreaming);
        QWidget::setTabOrder(recordWhenStreaming, keepRecordStreamStops);
        QWidget::setTabOrder(keepRecordStreamStops, replayWhileStreaming);
        QWidget::setTabOrder(replayWhileStreaming, keepReplayStreamStops);
        QWidget::setTabOrder(keepReplayStreamStops, snappingEnabled);
        QWidget::setTabOrder(snappingEnabled, screenSnapping);
        QWidget::setTabOrder(screenSnapping, centerSnapping);
        QWidget::setTabOrder(centerSnapping, sourceSnapping);
        QWidget::setTabOrder(sourceSnapping, snapDistance);
        QWidget::setTabOrder(snapDistance, hideProjectorCursor);
        QWidget::setTabOrder(hideProjectorCursor, projectorAlwaysOnTop);
        QWidget::setTabOrder(projectorAlwaysOnTop, saveProjectors);
        QWidget::setTabOrder(saveProjectors, systemTrayEnabled);
        QWidget::setTabOrder(systemTrayEnabled, systemTrayWhenStarted);
        QWidget::setTabOrder(systemTrayWhenStarted, systemTrayAlways);
        QWidget::setTabOrder(systemTrayAlways, enableAutoUpdates);
        QWidget::setTabOrder(enableAutoUpdates, warnBeforeStreamStart);
        QWidget::setTabOrder(warnBeforeStreamStart, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, language);
        QWidget::setTabOrder(language, theme);

        retranslateUi(OBSBasicSettings);
        QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), settingsPages, SLOT(setCurrentIndex(int)));
        QObject::connect(fpsType, SIGNAL(currentIndexChanged(int)), fpsTypes, SLOT(setCurrentIndex(int)));
        QObject::connect(outputMode, SIGNAL(currentIndexChanged(int)), outputModePages, SLOT(setCurrentIndex(int)));
        QObject::connect(simpleOutAdvanced, SIGNAL(toggled(bool)), simpleOutPreset, SLOT(setVisible(bool)));
        QObject::connect(simpleOutAdvanced, SIGNAL(toggled(bool)), label_24, SLOT(setVisible(bool)));
        QObject::connect(simpleOutAdvanced, SIGNAL(toggled(bool)), simpleOutCustom, SLOT(setVisible(bool)));
        QObject::connect(simpleOutAdvanced, SIGNAL(toggled(bool)), label_23, SLOT(setVisible(bool)));
        QObject::connect(advOutRecType, SIGNAL(currentIndexChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));
        QObject::connect(advOutFFUseRescale, SIGNAL(toggled(bool)), advOutFFRescale, SLOT(setEnabled(bool)));
        QObject::connect(advOutUseRescale, SIGNAL(toggled(bool)), advOutRescale, SLOT(setEnabled(bool)));
        QObject::connect(advOutRecUseRescale, SIGNAL(toggled(bool)), advOutRecRescale, SLOT(setEnabled(bool)));
        QObject::connect(advOutFFType, SIGNAL(currentIndexChanged(int)), stackedWidget_2, SLOT(setCurrentIndex(int)));
        QObject::connect(simpleOutAdvanced, SIGNAL(toggled(bool)), simpleOutEnforce, SLOT(setVisible(bool)));
        QObject::connect(systemTrayEnabled, SIGNAL(toggled(bool)), systemTrayWhenStarted, SLOT(setEnabled(bool)));
        QObject::connect(systemTrayEnabled, SIGNAL(toggled(bool)), systemTrayAlways, SLOT(setEnabled(bool)));
        QObject::connect(enableNewSocketLoop, SIGNAL(toggled(bool)), enableLowLatencyMode, SLOT(setEnabled(bool)));
        QObject::connect(snappingEnabled, SIGNAL(toggled(bool)), label_9, SLOT(setEnabled(bool)));
        QObject::connect(snappingEnabled, SIGNAL(toggled(bool)), snapDistance, SLOT(setEnabled(bool)));
        QObject::connect(snappingEnabled, SIGNAL(toggled(bool)), screenSnapping, SLOT(setEnabled(bool)));
        QObject::connect(snappingEnabled, SIGNAL(toggled(bool)), sourceSnapping, SLOT(setEnabled(bool)));
        QObject::connect(snappingEnabled, SIGNAL(toggled(bool)), centerSnapping, SLOT(setEnabled(bool)));
        QObject::connect(recordWhenStreaming, SIGNAL(toggled(bool)), keepRecordStreamStops, SLOT(setEnabled(bool)));
        QObject::connect(replayWhileStreaming, SIGNAL(toggled(bool)), keepReplayStreamStops, SLOT(setEnabled(bool)));
        QObject::connect(streamDelayEnable, SIGNAL(toggled(bool)), label_56, SLOT(setEnabled(bool)));
        QObject::connect(streamDelayEnable, SIGNAL(toggled(bool)), streamDelaySec, SLOT(setEnabled(bool)));
        QObject::connect(streamDelayEnable, SIGNAL(toggled(bool)), streamDelayInfo, SLOT(setEnabled(bool)));
        QObject::connect(streamDelayEnable, SIGNAL(toggled(bool)), streamDelayPreserve, SLOT(setEnabled(bool)));

        listWidget->setCurrentRow(0);
        settingsPages->setCurrentIndex(0);
        outputMode->setCurrentIndex(0);
        outputModePages->setCurrentIndex(0);
        simpleOutputABitrate->setCurrentIndex(8);
        advOutTabs->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(0);
        advOutTrack1Bitrate->setCurrentIndex(8);
        advOutTrack2Bitrate->setCurrentIndex(8);
        advOutTrack3Bitrate->setCurrentIndex(8);
        advOutTrack4Bitrate->setCurrentIndex(8);
        advOutTrack5Bitrate->setCurrentIndex(8);
        advOutTrack6Bitrate->setCurrentIndex(8);
        sampleRate->setCurrentIndex(0);
        channelSetup->setCurrentIndex(0);
        fpsTypes->setCurrentIndex(0);
        fpsCommon->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(OBSBasicSettings);
    } // setupUi

    void retranslateUi(QDialog *OBSBasicSettings)
    {
        OBSBasicSettings->setWindowTitle(QApplication::translate("OBSBasicSettings", "Settings", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.General", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Stream", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Audio", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Video", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Hotkeys", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem6 = listWidget->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

        groupBox_15->setTitle(QApplication::translate("OBSBasicSettings", "Basic.Settings.General", Q_NULLPTR));
        label->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.General.Language", Q_NULLPTR));
        label_42->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.General.Theme", Q_NULLPTR));
        enableAutoUpdates->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.General.EnableAutoUpdates", Q_NULLPTR));
        groupBox_16->setTitle(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output", Q_NULLPTR));
        warnBeforeStreamStart->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.General.WarnBeforeStartingStream", Q_NULLPTR));
        warnBeforeStreamStop->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.General.WarnBeforeStoppingStream", Q_NULLPTR));
        recordWhenStreaming->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.General.RecordWhenStreaming", Q_NULLPTR));
        keepRecordStreamStops->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.General.KeepRecordingWhenStreamStops", Q_NULLPTR));
        replayWhileStreaming->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.General.ReplayBufferWhileStreaming", Q_NULLPTR));
        keepReplayStreamStops->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.General.KeepReplayBufferStreamStops", Q_NULLPTR));
        groupBox_10->setTitle(QApplication::translate("OBSBasicSettings", "Basic.Settings.General.Snapping", Q_NULLPTR));
        snappingEnabled->setText(QApplication::translate("OBSBasicSettings", "Enable", Q_NULLPTR));
        screenSnapping->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.General.ScreenSnapping", Q_NULLPTR));
        centerSnapping->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.General.CenterSnapping", Q_NULLPTR));
        sourceSnapping->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.General.SourceSnapping", Q_NULLPTR));
        label_9->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.General.SnapDistance", Q_NULLPTR));
        groupBox_14->setTitle(QApplication::translate("OBSBasicSettings", "Basic.Settings.General.Projectors", Q_NULLPTR));
        hideProjectorCursor->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.General.HideProjectorCursor", Q_NULLPTR));
        projectorAlwaysOnTop->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.General.ProjectorAlwaysOnTop", Q_NULLPTR));
        saveProjectors->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.General.SaveProjectors", Q_NULLPTR));
        groupBox_13->setTitle(QApplication::translate("OBSBasicSettings", "Basic.Settings.General.SysTray", Q_NULLPTR));
        systemTrayEnabled->setText(QApplication::translate("OBSBasicSettings", "Enable", Q_NULLPTR));
        systemTrayWhenStarted->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.General.SysTrayWhenStarted", Q_NULLPTR));
        systemTrayAlways->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.General.SystemTrayHideMinimize", Q_NULLPTR));
        label_21->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Stream.StreamType", Q_NULLPTR));
        outputModeLabel->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Mode", Q_NULLPTR));
        outputMode->clear();
        outputMode->insertItems(0, QStringList()
         << QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Mode.Simple", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Mode.Adv", Q_NULLPTR)
        );
        groupBox_8->setTitle(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Streaming", Q_NULLPTR));
        label_19->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.VideoBitrate", Q_NULLPTR));
        label_20->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.AudioBitrate", Q_NULLPTR));
        simpleOutputABitrate->clear();
        simpleOutputABitrate->insertItems(0, QStringList()
         << QApplication::translate("OBSBasicSettings", "32", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "48", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "64", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "80", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "96", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "112", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "128", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "160", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "192", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "256", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "320", Q_NULLPTR)
        );
        simpleOutAdvanced->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Advanced", Q_NULLPTR));
        label_24->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.EncoderPreset", Q_NULLPTR));
        label_23->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.CustomEncoderSettings", Q_NULLPTR));
        simpleOutEnforce->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.EnforceBitrate", Q_NULLPTR));
        simpleOutRecEncoderLabel_2->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Encoder", Q_NULLPTR));
        simpleRecordingGroupBox->setTitle(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Recording", Q_NULLPTR));
        label_18->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Simple.SavePath", Q_NULLPTR));
        simpleOutputBrowse->setText(QApplication::translate("OBSBasicSettings", "Browse", Q_NULLPTR));
        simpleNoSpace->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.NoSpaceFileName", Q_NULLPTR));
        label_26->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Simple.RecordingQuality", Q_NULLPTR));
        simpleOutRecFormatLabel->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Format", Q_NULLPTR));
        simpleOutRecEncoderLabel->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Encoder", Q_NULLPTR));
        label_420->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.CustomMuxerSettings", Q_NULLPTR));
        simpleReplayBuf->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.UseReplayBuffer", Q_NULLPTR));
        replayBufferGroupBox->setTitle(QApplication::translate("OBSBasicSettings", "ReplayBuffer", Q_NULLPTR));
        label_35->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.ReplayBuffer.SecondsMax", Q_NULLPTR));
        simpleRBMegsMaxLabel->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.ReplayBuffer.MegabytesMax", Q_NULLPTR));
        label_45->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.ReplayBuffer.HotkeyMessage", Q_NULLPTR));
        label_28->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.AudioTrack", Q_NULLPTR));
        advOutEncLabel->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Encoder", Q_NULLPTR));
        advOutApplyService->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.ApplyServiceSettings", Q_NULLPTR));
        advOutUseRescale->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Rescale", Q_NULLPTR));
        advOutTabs->setTabText(advOutTabs->indexOf(advOutputStreamTab), QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Streaming", Q_NULLPTR));
        label_31->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Recording.Type", Q_NULLPTR));
        advOutRecType->clear();
        advOutRecType->insertItems(0, QStringList()
         << QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Recording.Type.Standard", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Recording.Type.FFmpegOutput", Q_NULLPTR)
        );
        label_32->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Simple.SavePath", Q_NULLPTR));
        advOutRecPathBrowse->setText(QApplication::translate("OBSBasicSettings", "Browse", Q_NULLPTR));
        advOutNoSpace->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.NoSpaceFileName", Q_NULLPTR));
        label_43->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Format", Q_NULLPTR));
        label_29->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.AudioTrack", Q_NULLPTR));
        advOutRecEncLabel->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Encoder", Q_NULLPTR));
        advOutRecUseRescale->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Rescale", Q_NULLPTR));
        label_9001->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.CustomMuxerSettings", Q_NULLPTR));
        label_36->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.SavePathURL", Q_NULLPTR));
        advOutFFPathBrowse->setText(QApplication::translate("OBSBasicSettings", "Browse", Q_NULLPTR));
        label_16->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.Format", Q_NULLPTR));
        label_44->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.FormatDesc", Q_NULLPTR));
        advOutFFFormatDesc->setText(QString());
        label_40->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.VideoBitrate", Q_NULLPTR));
        label_63->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.GOPSize", Q_NULLPTR));
        advOutFFUseRescale->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Rescale", Q_NULLPTR));
        advOutFFIgnoreCompat->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.IgnoreCodecCompat", Q_NULLPTR));
        label_37->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.VEncoder", Q_NULLPTR));
        label_38->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.VEncoderSettings", Q_NULLPTR));
        label_41->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.AudioBitrate", Q_NULLPTR));
        label_47->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.AudioTrack", Q_NULLPTR));
        label_39->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.AEncoder", Q_NULLPTR));
        label_46->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.AEncoderSettings", Q_NULLPTR));
        label_48->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.Type", Q_NULLPTR));
        advOutFFType->clear();
        advOutFFType->insertItems(0, QStringList()
         << QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.Type.RecordToFile", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.Type.URL", Q_NULLPTR)
        );
        label_1337->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.MuxerSettings", Q_NULLPTR));
        advOutFFNoSpace->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.NoSpaceFileName", Q_NULLPTR));
        advOutTabs->setTabText(advOutTabs->indexOf(advOutputRecordTab), QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Recording", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Audio.Track1", Q_NULLPTR));
        advOutTrack1Bitrate->clear();
        advOutTrack1Bitrate->insertItems(0, QStringList()
         << QApplication::translate("OBSBasicSettings", "32", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "48", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "64", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "80", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "96", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "112", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "128", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "160", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "192", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "256", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "320", Q_NULLPTR)
        );
        label_25->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.AudioBitrate", Q_NULLPTR));
        label_55->setText(QApplication::translate("OBSBasicSettings", "Name", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Audio.Track2", Q_NULLPTR));
        label_49->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.AudioBitrate", Q_NULLPTR));
        advOutTrack2Bitrate->clear();
        advOutTrack2Bitrate->insertItems(0, QStringList()
         << QApplication::translate("OBSBasicSettings", "32", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "48", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "64", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "80", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "96", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "112", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "128", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "160", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "192", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "256", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "320", Q_NULLPTR)
        );
        label_50->setText(QApplication::translate("OBSBasicSettings", "Name", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Audio.Track3", Q_NULLPTR));
        label_51->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.AudioBitrate", Q_NULLPTR));
        advOutTrack3Bitrate->clear();
        advOutTrack3Bitrate->insertItems(0, QStringList()
         << QApplication::translate("OBSBasicSettings", "32", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "48", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "64", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "80", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "96", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "112", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "128", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "160", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "192", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "256", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "320", Q_NULLPTR)
        );
        label_52->setText(QApplication::translate("OBSBasicSettings", "Name", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Audio.Track4", Q_NULLPTR));
        label_53->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.AudioBitrate", Q_NULLPTR));
        advOutTrack4Bitrate->clear();
        advOutTrack4Bitrate->insertItems(0, QStringList()
         << QApplication::translate("OBSBasicSettings", "32", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "48", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "64", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "80", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "96", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "112", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "128", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "160", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "192", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "256", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "320", Q_NULLPTR)
        );
        label_54->setText(QApplication::translate("OBSBasicSettings", "Name", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Audio.Track5", Q_NULLPTR));
        label_59->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.AudioBitrate", Q_NULLPTR));
        advOutTrack5Bitrate->clear();
        advOutTrack5Bitrate->insertItems(0, QStringList()
         << QApplication::translate("OBSBasicSettings", "32", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "48", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "64", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "80", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "96", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "112", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "128", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "160", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "192", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "256", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "320", Q_NULLPTR)
        );
        label_60->setText(QApplication::translate("OBSBasicSettings", "Name", Q_NULLPTR));
        groupBox_12->setTitle(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Audio.Track6", Q_NULLPTR));
        label_61->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.AudioBitrate", Q_NULLPTR));
        advOutTrack6Bitrate->clear();
        advOutTrack6Bitrate->insertItems(0, QStringList()
         << QApplication::translate("OBSBasicSettings", "32", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "48", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "64", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "80", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "96", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "112", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "128", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "160", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "192", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "256", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "320", Q_NULLPTR)
        );
        label_62->setText(QApplication::translate("OBSBasicSettings", "Name", Q_NULLPTR));
        advOutTabs->setTabText(advOutTabs->indexOf(advOutputAudioTracksTab), QApplication::translate("OBSBasicSettings", "Basic.Settings.Audio", Q_NULLPTR));
        label_14->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.SampleRate", Q_NULLPTR));
        sampleRate->clear();
        sampleRate->insertItems(0, QStringList()
         << QApplication::translate("OBSBasicSettings", "44.1khz", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "48khz", Q_NULLPTR)
        );
        label_15->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.Channels", Q_NULLPTR));
        channelSetup->clear();
        channelSetup->insertItems(0, QStringList()
         << QApplication::translate("OBSBasicSettings", "Mono", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "Stereo", Q_NULLPTR)
        );
        channelSetup->setCurrentText(QApplication::translate("OBSBasicSettings", "Mono", Q_NULLPTR));
        label_2->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.DesktopDevice", Q_NULLPTR));
        label_3->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.DesktopDevice2", Q_NULLPTR));
        label_4->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.AuxDevice", Q_NULLPTR));
        label_5->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.AuxDevice2", Q_NULLPTR));
        label_6->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.AuxDevice3", Q_NULLPTR));
        label_8->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Video.BaseResolution", Q_NULLPTR));
        label_10->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Video.ScaledResolution", Q_NULLPTR));
        label_11->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Video.DownscaleFilter", Q_NULLPTR));
        fpsType->clear();
        fpsType->insertItems(0, QStringList()
         << QApplication::translate("OBSBasicSettings", "Basic.Settings.Video.FPSCommon", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "Basic.Settings.Video.FPSInteger", Q_NULLPTR)
         << QApplication::translate("OBSBasicSettings", "Basic.Settings.Video.FPSFraction", Q_NULLPTR)
        );
        fpsType->setCurrentText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Video.FPSCommon", Q_NULLPTR));
        fpsCommon->setItemText(2, QApplication::translate("OBSBasicSettings", "24 NTSC", Q_NULLPTR));

        label_12->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Video.Numerator", Q_NULLPTR));
        label_13->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Video.Denominator", Q_NULLPTR));
        advancedGeneralGroupBox->setTitle(QApplication::translate("OBSBasicSettings", "Basic.Settings.General", Q_NULLPTR));
        processPriorityLabel->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.General.ProcessPriority", Q_NULLPTR));
        advancedVideoContainer->setTitle(QApplication::translate("OBSBasicSettings", "Basic.Settings.Video", Q_NULLPTR));
        rendererLabel->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Video.Renderer", Q_NULLPTR));
        adapterLabel->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Video.Adapter", Q_NULLPTR));
        label_30->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Video.ColorFormat", Q_NULLPTR));
        colorFormat->setItemText(2, QApplication::translate("OBSBasicSettings", "I444", Q_NULLPTR));

        disableOSXVSync->setText(QApplication::translate("OBSBasicSettings", "DisableOSXVSync", Q_NULLPTR));
        resetOSXVSync->setText(QApplication::translate("OBSBasicSettings", "ResetOSXVSyncOnExit", Q_NULLPTR));
        label_34->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Video.ColorRange", Q_NULLPTR));
        label_33->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Video.ColorSpace", Q_NULLPTR));
        advAudioGroupBox->setTitle(QApplication::translate("OBSBasicSettings", "Basic.Settings.Audio", Q_NULLPTR));
        monitoringDeviceLabel->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Audio.MonitoringDevice", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Recording", Q_NULLPTR));
        label_7->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Recording.Filename", Q_NULLPTR));
        overwriteIfExists->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Recording.OverwriteIfExists", Q_NULLPTR));
        label_58->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.ReplayBuffer.Suffix", Q_NULLPTR));
        label_57->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.ReplayBuffer.Prefix", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.StreamDelay", Q_NULLPTR));
        label_56->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.StreamDelay.Duration", Q_NULLPTR));
        streamDelayPreserve->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.StreamDelay.Preserve", Q_NULLPTR));
        streamDelayEnable->setText(QApplication::translate("OBSBasicSettings", "Enable", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Reconnect", Q_NULLPTR));
        reconnectEnable->setText(QApplication::translate("OBSBasicSettings", "Enable", Q_NULLPTR));
        label_22->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.MaxRetries", Q_NULLPTR));
        label_17->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Output.RetryDelay", Q_NULLPTR));
        groupBox_11->setTitle(QApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Network", Q_NULLPTR));
        label_27->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Network.BindToIP", Q_NULLPTR));
        enableNewSocketLoop->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Network.EnableNewSocketLoop", Q_NULLPTR));
        enableLowLatencyMode->setText(QApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Network.EnableLowLatencyMode", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OBSBasicSettings: public Ui_OBSBasicSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSBASICSETTINGS_H
