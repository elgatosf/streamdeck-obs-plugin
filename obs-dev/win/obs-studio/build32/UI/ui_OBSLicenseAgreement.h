/********************************************************************************
** Form generated from reading UI file 'OBSLicenseAgreement.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSLICENSEAGREEMENT_H
#define UI_OBSLICENSEAGREEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OBSLicenseAgreement
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *agreement;
    QPlainTextEdit *license;
    QFrame *line;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *agree;

    void setupUi(QDialog *OBSLicenseAgreement)
    {
        if (OBSLicenseAgreement->objectName().isEmpty())
            OBSLicenseAgreement->setObjectName(QStringLiteral("OBSLicenseAgreement"));
        OBSLicenseAgreement->resize(457, 430);
        OBSLicenseAgreement->setMinimumSize(QSize(200, 300));
        verticalLayout = new QVBoxLayout(OBSLicenseAgreement);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        agreement = new QLabel(OBSLicenseAgreement);
        agreement->setObjectName(QStringLiteral("agreement"));
        agreement->setTextFormat(Qt::RichText);
        agreement->setWordWrap(true);
        agreement->setOpenExternalLinks(true);
        agreement->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout->addWidget(agreement);

        license = new QPlainTextEdit(OBSLicenseAgreement);
        license->setObjectName(QStringLiteral("license"));
        license->setReadOnly(true);

        verticalLayout->addWidget(license);

        line = new QFrame(OBSLicenseAgreement);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        widget = new QWidget(OBSLicenseAgreement);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        agree = new QPushButton(widget);
        agree->setObjectName(QStringLiteral("agree"));

        horizontalLayout->addWidget(agree);


        verticalLayout->addWidget(widget, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        retranslateUi(OBSLicenseAgreement);
        QObject::connect(agree, SIGNAL(clicked()), OBSLicenseAgreement, SLOT(accept()));

        QMetaObject::connectSlotsByName(OBSLicenseAgreement);
    } // setupUi

    void retranslateUi(QDialog *OBSLicenseAgreement)
    {
        OBSLicenseAgreement->setWindowTitle(QApplication::translate("OBSLicenseAgreement", "LicenseAgreement", Q_NULLPTR));
        agreement->setText(QApplication::translate("OBSLicenseAgreement", "LicenseAgreement.PleaseReview", Q_NULLPTR));
        license->setDocumentTitle(QString());
        license->setPlainText(QString());
        agree->setText(QApplication::translate("OBSLicenseAgreement", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OBSLicenseAgreement: public Ui_OBSLicenseAgreement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSLICENSEAGREEMENT_H
