/********************************************************************************
** Form generated from reading UI file 'OBSBasicTransform.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSBASICTRANSFORM_H
#define UI_OBSBASICTRANSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OBSBasicTransform
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *positionX;
    QDoubleSpinBox *positionY;
    QLabel *label_2;
    QDoubleSpinBox *rotation;
    QLabel *label_3;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *sizeX;
    QDoubleSpinBox *sizeY;
    QLabel *label_4;
    QComboBox *align;
    QSpacerItem *verticalSpacer;
    QLabel *label_5;
    QComboBox *boundsType;
    QLabel *label_6;
    QComboBox *boundsAlign;
    QLabel *label_7;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *boundsWidth;
    QDoubleSpinBox *boundsHeight;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_8;
    QGridLayout *gridLayout;
    QSpinBox *cropLeft;
    QSpinBox *cropRight;
    QLabel *label_9;
    QLabel *label_12;
    QSpinBox *cropTop;
    QSpinBox *cropBottom;
    QLabel *label_11;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OBSBasicTransform)
    {
        if (OBSBasicTransform->objectName().isEmpty())
            OBSBasicTransform->setObjectName(QStringLiteral("OBSBasicTransform"));
        OBSBasicTransform->setEnabled(false);
        OBSBasicTransform->resize(564, 241);
        verticalLayout = new QVBoxLayout(OBSBasicTransform);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(OBSBasicTransform);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(170, 0));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        widget = new QWidget(OBSBasicTransform);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        positionX = new QDoubleSpinBox(widget);
        positionX->setObjectName(QStringLiteral("positionX"));
        positionX->setMinimumSize(QSize(100, 0));
        positionX->setDecimals(4);
        positionX->setMinimum(-90001);
        positionX->setMaximum(90001);

        horizontalLayout->addWidget(positionX);

        positionY = new QDoubleSpinBox(widget);
        positionY->setObjectName(QStringLiteral("positionY"));
        positionY->setMinimumSize(QSize(100, 0));
        positionY->setDecimals(4);
        positionY->setMinimum(-90001);
        positionY->setMaximum(90001);

        horizontalLayout->addWidget(positionY);


        formLayout->setWidget(0, QFormLayout::FieldRole, widget);

        label_2 = new QLabel(OBSBasicTransform);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        rotation = new QDoubleSpinBox(OBSBasicTransform);
        rotation->setObjectName(QStringLiteral("rotation"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(rotation->sizePolicy().hasHeightForWidth());
        rotation->setSizePolicy(sizePolicy2);
        rotation->setMinimumSize(QSize(100, 0));
        rotation->setMinimum(-360);
        rotation->setMaximum(360);
        rotation->setSingleStep(0.1);

        formLayout->setWidget(1, QFormLayout::FieldRole, rotation);

        label_3 = new QLabel(OBSBasicTransform);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        widget_2 = new QWidget(OBSBasicTransform);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy3);
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        sizeX = new QDoubleSpinBox(widget_2);
        sizeX->setObjectName(QStringLiteral("sizeX"));
        sizeX->setMinimumSize(QSize(100, 0));
        sizeX->setDecimals(4);
        sizeX->setMinimum(-90001);
        sizeX->setMaximum(90001);
        sizeX->setSingleStep(1);

        horizontalLayout_2->addWidget(sizeX);

        sizeY = new QDoubleSpinBox(widget_2);
        sizeY->setObjectName(QStringLiteral("sizeY"));
        sizeY->setMinimumSize(QSize(100, 0));
        sizeY->setDecimals(4);
        sizeY->setMinimum(-90001);
        sizeY->setMaximum(90001);
        sizeY->setSingleStep(1);

        horizontalLayout_2->addWidget(sizeY);


        formLayout->setWidget(2, QFormLayout::FieldRole, widget_2);

        label_4 = new QLabel(OBSBasicTransform);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        align = new QComboBox(OBSBasicTransform);
        align->setObjectName(QStringLiteral("align"));

        formLayout->setWidget(3, QFormLayout::FieldRole, align);

        verticalSpacer = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(4, QFormLayout::FieldRole, verticalSpacer);

        label_5 = new QLabel(OBSBasicTransform);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        boundsType = new QComboBox(OBSBasicTransform);
        boundsType->setObjectName(QStringLiteral("boundsType"));

        formLayout->setWidget(5, QFormLayout::FieldRole, boundsType);

        label_6 = new QLabel(OBSBasicTransform);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        boundsAlign = new QComboBox(OBSBasicTransform);
        boundsAlign->setObjectName(QStringLiteral("boundsAlign"));
        boundsAlign->setEnabled(false);

        formLayout->setWidget(6, QFormLayout::FieldRole, boundsAlign);

        label_7 = new QLabel(OBSBasicTransform);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_7);

        widget_3 = new QWidget(OBSBasicTransform);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        sizePolicy3.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy3);
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        boundsWidth = new QDoubleSpinBox(widget_3);
        boundsWidth->setObjectName(QStringLiteral("boundsWidth"));
        boundsWidth->setEnabled(false);
        boundsWidth->setMinimumSize(QSize(100, 0));
        boundsWidth->setDecimals(4);
        boundsWidth->setMinimum(1);
        boundsWidth->setMaximum(90001);

        horizontalLayout_3->addWidget(boundsWidth);

        boundsHeight = new QDoubleSpinBox(widget_3);
        boundsHeight->setObjectName(QStringLiteral("boundsHeight"));
        boundsHeight->setEnabled(false);
        boundsHeight->setMinimumSize(QSize(100, 0));
        boundsHeight->setDecimals(4);
        boundsHeight->setMinimum(1);
        boundsHeight->setMaximum(90001);

        horizontalLayout_3->addWidget(boundsHeight);


        formLayout->setWidget(7, QFormLayout::FieldRole, widget_3);

        verticalSpacer_2 = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(8, QFormLayout::FieldRole, verticalSpacer_2);

        label_8 = new QLabel(OBSBasicTransform);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_8);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        cropLeft = new QSpinBox(OBSBasicTransform);
        cropLeft->setObjectName(QStringLiteral("cropLeft"));
        sizePolicy2.setHeightForWidth(cropLeft->sizePolicy().hasHeightForWidth());
        cropLeft->setSizePolicy(sizePolicy2);
        cropLeft->setMinimumSize(QSize(70, 0));
        cropLeft->setMaximum(100000);

        gridLayout->addWidget(cropLeft, 0, 1, 1, 1);

        cropRight = new QSpinBox(OBSBasicTransform);
        cropRight->setObjectName(QStringLiteral("cropRight"));
        sizePolicy2.setHeightForWidth(cropRight->sizePolicy().hasHeightForWidth());
        cropRight->setSizePolicy(sizePolicy2);
        cropRight->setMinimumSize(QSize(70, 0));
        cropRight->setMaximum(100000);

        gridLayout->addWidget(cropRight, 0, 3, 1, 1);

        label_9 = new QLabel(OBSBasicTransform);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        label_12 = new QLabel(OBSBasicTransform);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_12, 1, 2, 1, 1);

        cropTop = new QSpinBox(OBSBasicTransform);
        cropTop->setObjectName(QStringLiteral("cropTop"));
        sizePolicy2.setHeightForWidth(cropTop->sizePolicy().hasHeightForWidth());
        cropTop->setSizePolicy(sizePolicy2);
        cropTop->setMinimumSize(QSize(70, 0));
        cropTop->setMaximum(100000);

        gridLayout->addWidget(cropTop, 1, 1, 1, 1);

        cropBottom = new QSpinBox(OBSBasicTransform);
        cropBottom->setObjectName(QStringLiteral("cropBottom"));
        sizePolicy2.setHeightForWidth(cropBottom->sizePolicy().hasHeightForWidth());
        cropBottom->setSizePolicy(sizePolicy2);
        cropBottom->setMinimumSize(QSize(70, 0));
        cropBottom->setMaximum(100000);

        gridLayout->addWidget(cropBottom, 1, 3, 1, 1);

        label_11 = new QLabel(OBSBasicTransform);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 1, 0, 1, 1);

        label_10 = new QLabel(OBSBasicTransform);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_10, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);


        formLayout->setLayout(9, QFormLayout::FieldRole, gridLayout);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(OBSBasicTransform);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Reset|QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        label_9->setBuddy(cropLeft);
        label_12->setBuddy(cropBottom);
        label_11->setBuddy(cropTop);
        label_10->setBuddy(cropRight);
#endif // QT_NO_SHORTCUT

        retranslateUi(OBSBasicTransform);
        QObject::connect(buttonBox, SIGNAL(rejected()), OBSBasicTransform, SLOT(reject()));

        QMetaObject::connectSlotsByName(OBSBasicTransform);
    } // setupUi

    void retranslateUi(QDialog *OBSBasicTransform)
    {
        OBSBasicTransform->setWindowTitle(QApplication::translate("OBSBasicTransform", "Basic.TransformWindow", Q_NULLPTR));
        label->setText(QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Position", Q_NULLPTR));
        label_2->setText(QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Rotation", Q_NULLPTR));
        label_3->setText(QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Size", Q_NULLPTR));
        label_4->setText(QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment", Q_NULLPTR));
        align->clear();
        align->insertItems(0, QStringList()
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopLeft", Q_NULLPTR)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopCenter", Q_NULLPTR)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopRight", Q_NULLPTR)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.CenterLeft", Q_NULLPTR)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.Center", Q_NULLPTR)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.CenterRight", Q_NULLPTR)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.BottomLeft", Q_NULLPTR)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.BottomCenter", Q_NULLPTR)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.BottomRight", Q_NULLPTR)
        );
        align->setCurrentText(QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopLeft", Q_NULLPTR));
        label_5->setText(QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType", Q_NULLPTR));
        boundsType->clear();
        boundsType->insertItems(0, QStringList()
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType.None", Q_NULLPTR)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType.Stretch", Q_NULLPTR)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType.ScaleInner", Q_NULLPTR)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType.ScaleOuter", Q_NULLPTR)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType.ScaleToWidth", Q_NULLPTR)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType.ScaleToHeight", Q_NULLPTR)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsType.MaxOnly", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.BoundsAlignment", Q_NULLPTR));
        boundsAlign->clear();
        boundsAlign->insertItems(0, QStringList()
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopLeft", Q_NULLPTR)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopCenter", Q_NULLPTR)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopRight", Q_NULLPTR)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.CenterLeft", Q_NULLPTR)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.Center", Q_NULLPTR)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.CenterRight", Q_NULLPTR)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.BottomLeft", Q_NULLPTR)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.BottomCenter", Q_NULLPTR)
         << QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.BottomRight", Q_NULLPTR)
        );
        boundsAlign->setCurrentText(QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Alignment.TopLeft", Q_NULLPTR));
        label_7->setText(QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Bounds", Q_NULLPTR));
        label_8->setText(QApplication::translate("OBSBasicTransform", "Basic.TransformWindow.Crop", Q_NULLPTR));
        label_9->setText(QApplication::translate("OBSBasicTransform", "Left", Q_NULLPTR));
        label_12->setText(QApplication::translate("OBSBasicTransform", "Bottom", Q_NULLPTR));
        label_11->setText(QApplication::translate("OBSBasicTransform", "Top", Q_NULLPTR));
        label_10->setText(QApplication::translate("OBSBasicTransform", "Right", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OBSBasicTransform: public Ui_OBSBasicTransform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSBASICTRANSFORM_H
