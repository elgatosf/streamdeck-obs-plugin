/********************************************************************************
** Form generated from reading UI file 'OBSRemux.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSREMUX_H
#define UI_OBSREMUX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OBSRemux
{
public:
    QProgressBar *progressBar;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *sourceFile;
    QPushButton *browseSource;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *targetFile;
    QPushButton *browseTarget;
    QPushButton *remux;

    void setupUi(QDialog *OBSRemux)
    {
        if (OBSRemux->objectName().isEmpty())
            OBSRemux->setObjectName(QStringLiteral("OBSRemux"));
        OBSRemux->resize(491, 124);
        progressBar = new QProgressBar(OBSRemux);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(10, 90, 351, 23));
        progressBar->setValue(24);
        formLayoutWidget = new QWidget(OBSRemux);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 471, 71));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setVerticalSpacing(6);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        sourceFile = new QLineEdit(formLayoutWidget);
        sourceFile->setObjectName(QStringLiteral("sourceFile"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sourceFile->sizePolicy().hasHeightForWidth());
        sourceFile->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(sourceFile);

        browseSource = new QPushButton(formLayoutWidget);
        browseSource->setObjectName(QStringLiteral("browseSource"));

        horizontalLayout_2->addWidget(browseSource);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        targetFile = new QLineEdit(formLayoutWidget);
        targetFile->setObjectName(QStringLiteral("targetFile"));
        sizePolicy.setHeightForWidth(targetFile->sizePolicy().hasHeightForWidth());
        targetFile->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(targetFile);

        browseTarget = new QPushButton(formLayoutWidget);
        browseTarget->setObjectName(QStringLiteral("browseTarget"));

        horizontalLayout_3->addWidget(browseTarget);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_3);

        remux = new QPushButton(OBSRemux);
        remux->setObjectName(QStringLiteral("remux"));
        remux->setGeometry(QRect(370, 90, 111, 23));

        retranslateUi(OBSRemux);

        QMetaObject::connectSlotsByName(OBSRemux);
    } // setupUi

    void retranslateUi(QDialog *OBSRemux)
    {
        OBSRemux->setWindowTitle(QApplication::translate("OBSRemux", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("OBSRemux", "Remux.SourceFile", Q_NULLPTR));
        label_2->setText(QApplication::translate("OBSRemux", "Remux.TargetFile", Q_NULLPTR));
        browseSource->setText(QApplication::translate("OBSRemux", "Browse", Q_NULLPTR));
        browseTarget->setText(QApplication::translate("OBSRemux", "Browse", Q_NULLPTR));
        remux->setText(QApplication::translate("OBSRemux", "Remux.Remux", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OBSRemux: public Ui_OBSRemux {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSREMUX_H
