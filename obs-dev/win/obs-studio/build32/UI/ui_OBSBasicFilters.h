/********************************************************************************
** Form generated from reading UI file 'OBSBasicFilters.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSBASICFILTERS_H
#define UI_OBSBASICFILTERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "focus-list.hpp"
#include "qt-display.hpp"

QT_BEGIN_NAMESPACE

class Ui_OBSBasicFilters
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QWidget *asyncWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *asyncLabel;
    FocusList *asyncFilters;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *addAsyncFilter;
    QPushButton *removeAsyncFilter;
    QPushButton *moveAsyncFilterUp;
    QPushButton *moveAsyncFilterDown;
    QFrame *separatorLine;
    QWidget *effectWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    FocusList *effectFilters;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *addEffectFilter;
    QPushButton *removeEffectFilter;
    QPushButton *moveEffectFilterUp;
    QPushButton *moveEffectFilterDown;
    QVBoxLayout *rightContainerLayout;
    QVBoxLayout *rightLayout;
    OBSQTDisplay *preview;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *close;

    void setupUi(QDialog *OBSBasicFilters)
    {
        if (OBSBasicFilters->objectName().isEmpty())
            OBSBasicFilters->setObjectName(QStringLiteral("OBSBasicFilters"));
        OBSBasicFilters->resize(861, 726);
        verticalLayout = new QVBoxLayout(OBSBasicFilters);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        asyncWidget = new QWidget(OBSBasicFilters);
        asyncWidget->setObjectName(QStringLiteral("asyncWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(asyncWidget->sizePolicy().hasHeightForWidth());
        asyncWidget->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(asyncWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        asyncLabel = new QLabel(asyncWidget);
        asyncLabel->setObjectName(QStringLiteral("asyncLabel"));

        verticalLayout_3->addWidget(asyncLabel);

        asyncFilters = new FocusList(asyncWidget);
        asyncFilters->setObjectName(QStringLiteral("asyncFilters"));
        sizePolicy.setHeightForWidth(asyncFilters->sizePolicy().hasHeightForWidth());
        asyncFilters->setSizePolicy(sizePolicy);
        asyncFilters->setContextMenuPolicy(Qt::CustomContextMenu);

        verticalLayout_3->addWidget(asyncFilters);

        widget = new QWidget(asyncWidget);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        addAsyncFilter = new QPushButton(widget);
        addAsyncFilter->setObjectName(QStringLiteral("addAsyncFilter"));
        addAsyncFilter->setMaximumSize(QSize(22, 22));
        addAsyncFilter->setText(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/images/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addAsyncFilter->setIcon(icon);
        addAsyncFilter->setAutoDefault(false);
        addAsyncFilter->setFlat(true);

        horizontalLayout_4->addWidget(addAsyncFilter);

        removeAsyncFilter = new QPushButton(widget);
        removeAsyncFilter->setObjectName(QStringLiteral("removeAsyncFilter"));
        removeAsyncFilter->setMaximumSize(QSize(22, 22));
        removeAsyncFilter->setText(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/images/list_remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeAsyncFilter->setIcon(icon1);
        removeAsyncFilter->setAutoDefault(false);
        removeAsyncFilter->setFlat(true);

        horizontalLayout_4->addWidget(removeAsyncFilter);

        moveAsyncFilterUp = new QPushButton(widget);
        moveAsyncFilterUp->setObjectName(QStringLiteral("moveAsyncFilterUp"));
        moveAsyncFilterUp->setMaximumSize(QSize(22, 22));
        moveAsyncFilterUp->setText(QStringLiteral(""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/images/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveAsyncFilterUp->setIcon(icon2);
        moveAsyncFilterUp->setAutoDefault(false);
        moveAsyncFilterUp->setFlat(true);

        horizontalLayout_4->addWidget(moveAsyncFilterUp);

        moveAsyncFilterDown = new QPushButton(widget);
        moveAsyncFilterDown->setObjectName(QStringLiteral("moveAsyncFilterDown"));
        moveAsyncFilterDown->setMaximumSize(QSize(22, 22));
        moveAsyncFilterDown->setText(QStringLiteral(""));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/images/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveAsyncFilterDown->setIcon(icon3);
        moveAsyncFilterDown->setAutoDefault(false);
        moveAsyncFilterDown->setFlat(true);

        horizontalLayout_4->addWidget(moveAsyncFilterDown);


        verticalLayout_3->addWidget(widget, 0, Qt::AlignLeft);


        verticalLayout_2->addWidget(asyncWidget);

        separatorLine = new QFrame(OBSBasicFilters);
        separatorLine->setObjectName(QStringLiteral("separatorLine"));
        separatorLine->setFrameShape(QFrame::HLine);
        separatorLine->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(separatorLine);

        effectWidget = new QWidget(OBSBasicFilters);
        effectWidget->setObjectName(QStringLiteral("effectWidget"));
        sizePolicy.setHeightForWidth(effectWidget->sizePolicy().hasHeightForWidth());
        effectWidget->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(effectWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(effectWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_4->addWidget(label_2);

        effectFilters = new FocusList(effectWidget);
        effectFilters->setObjectName(QStringLiteral("effectFilters"));
        sizePolicy.setHeightForWidth(effectFilters->sizePolicy().hasHeightForWidth());
        effectFilters->setSizePolicy(sizePolicy);
        effectFilters->setContextMenuPolicy(Qt::CustomContextMenu);

        verticalLayout_4->addWidget(effectFilters);

        widget_2 = new QWidget(effectWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_6 = new QHBoxLayout(widget_2);
        horizontalLayout_6->setSpacing(4);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        addEffectFilter = new QPushButton(widget_2);
        addEffectFilter->setObjectName(QStringLiteral("addEffectFilter"));
        addEffectFilter->setMaximumSize(QSize(22, 22));
        addEffectFilter->setText(QStringLiteral(""));
        addEffectFilter->setIcon(icon);
        addEffectFilter->setAutoDefault(false);
        addEffectFilter->setFlat(true);

        horizontalLayout_6->addWidget(addEffectFilter);

        removeEffectFilter = new QPushButton(widget_2);
        removeEffectFilter->setObjectName(QStringLiteral("removeEffectFilter"));
        removeEffectFilter->setMaximumSize(QSize(22, 22));
        removeEffectFilter->setText(QStringLiteral(""));
        removeEffectFilter->setIcon(icon1);
        removeEffectFilter->setAutoDefault(false);
        removeEffectFilter->setFlat(true);

        horizontalLayout_6->addWidget(removeEffectFilter);

        moveEffectFilterUp = new QPushButton(widget_2);
        moveEffectFilterUp->setObjectName(QStringLiteral("moveEffectFilterUp"));
        moveEffectFilterUp->setMaximumSize(QSize(22, 22));
        moveEffectFilterUp->setText(QStringLiteral(""));
        moveEffectFilterUp->setIcon(icon2);
        moveEffectFilterUp->setAutoDefault(false);
        moveEffectFilterUp->setFlat(true);

        horizontalLayout_6->addWidget(moveEffectFilterUp);

        moveEffectFilterDown = new QPushButton(widget_2);
        moveEffectFilterDown->setObjectName(QStringLiteral("moveEffectFilterDown"));
        moveEffectFilterDown->setMaximumSize(QSize(22, 22));
        moveEffectFilterDown->setText(QStringLiteral(""));
        moveEffectFilterDown->setIcon(icon3);
        moveEffectFilterDown->setAutoDefault(false);
        moveEffectFilterDown->setFlat(true);

        horizontalLayout_6->addWidget(moveEffectFilterDown);


        verticalLayout_4->addWidget(widget_2, 0, Qt::AlignLeft);


        verticalLayout_2->addWidget(effectWidget);


        horizontalLayout->addLayout(verticalLayout_2);

        rightContainerLayout = new QVBoxLayout();
        rightContainerLayout->setObjectName(QStringLiteral("rightContainerLayout"));
        rightLayout = new QVBoxLayout();
        rightLayout->setObjectName(QStringLiteral("rightLayout"));
        preview = new OBSQTDisplay(OBSBasicFilters);
        preview->setObjectName(QStringLiteral("preview"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(preview->sizePolicy().hasHeightForWidth());
        preview->setSizePolicy(sizePolicy1);
        preview->setMinimumSize(QSize(24, 24));

        rightLayout->addWidget(preview);


        rightContainerLayout->addLayout(rightLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        close = new QPushButton(OBSBasicFilters);
        close->setObjectName(QStringLiteral("close"));
        close->setAutoDefault(false);

        horizontalLayout_2->addWidget(close);


        rightContainerLayout->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(rightContainerLayout);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(OBSBasicFilters);
        QObject::connect(close, SIGNAL(clicked()), OBSBasicFilters, SLOT(accept()));

        QMetaObject::connectSlotsByName(OBSBasicFilters);
    } // setupUi

    void retranslateUi(QDialog *OBSBasicFilters)
    {
        OBSBasicFilters->setWindowTitle(QApplication::translate("OBSBasicFilters", "Basic.Filters", Q_NULLPTR));
        asyncLabel->setText(QApplication::translate("OBSBasicFilters", "Basic.Filters.AsyncFilters", Q_NULLPTR));
        addAsyncFilter->setProperty("themeID", QVariant(QApplication::translate("OBSBasicFilters", "addIconSmall", Q_NULLPTR)));
        removeAsyncFilter->setProperty("themeID", QVariant(QApplication::translate("OBSBasicFilters", "removeIconSmall", Q_NULLPTR)));
        moveAsyncFilterUp->setProperty("themeID", QVariant(QApplication::translate("OBSBasicFilters", "upArrowIconSmall", Q_NULLPTR)));
        moveAsyncFilterDown->setProperty("themeID", QVariant(QApplication::translate("OBSBasicFilters", "downArrowIconSmall", Q_NULLPTR)));
        label_2->setText(QApplication::translate("OBSBasicFilters", "Basic.Filters.EffectFilters", Q_NULLPTR));
        addEffectFilter->setProperty("themeID", QVariant(QApplication::translate("OBSBasicFilters", "addIconSmall", Q_NULLPTR)));
        removeEffectFilter->setProperty("themeID", QVariant(QApplication::translate("OBSBasicFilters", "removeIconSmall", Q_NULLPTR)));
        moveEffectFilterUp->setProperty("themeID", QVariant(QApplication::translate("OBSBasicFilters", "upArrowIconSmall", Q_NULLPTR)));
        moveEffectFilterDown->setProperty("themeID", QVariant(QApplication::translate("OBSBasicFilters", "downArrowIconSmall", Q_NULLPTR)));
        close->setText(QApplication::translate("OBSBasicFilters", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OBSBasicFilters: public Ui_OBSBasicFilters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSBASICFILTERS_H
