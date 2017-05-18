/********************************************************************************
** Form generated from reading UI file 'OBSUpdate.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSUPDATE_H
#define UI_OBSUPDATE_H

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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OBSUpdate
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *text;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *yes;
    QPushButton *no;
    QPushButton *skip;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *OBSUpdate)
    {
        if (OBSUpdate->objectName().isEmpty())
            OBSUpdate->setObjectName(QStringLiteral("OBSUpdate"));
        OBSUpdate->resize(611, 526);
        verticalLayout = new QVBoxLayout(OBSUpdate);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(OBSUpdate);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        text = new QTextEdit(OBSUpdate);
        text->setObjectName(QStringLiteral("text"));
        text->setReadOnly(true);

        verticalLayout->addWidget(text);

        line = new QFrame(OBSUpdate);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        yes = new QPushButton(OBSUpdate);
        yes->setObjectName(QStringLiteral("yes"));

        horizontalLayout->addWidget(yes);

        no = new QPushButton(OBSUpdate);
        no->setObjectName(QStringLiteral("no"));

        horizontalLayout->addWidget(no);

        skip = new QPushButton(OBSUpdate);
        skip->setObjectName(QStringLiteral("skip"));

        horizontalLayout->addWidget(skip);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(OBSUpdate);

        yes->setDefault(true);


        QMetaObject::connectSlotsByName(OBSUpdate);
    } // setupUi

    void retranslateUi(QDialog *OBSUpdate)
    {
        OBSUpdate->setWindowTitle(QApplication::translate("OBSUpdate", "Updater.Title", Q_NULLPTR));
        label->setText(QApplication::translate("OBSUpdate", "Updater.Text", Q_NULLPTR));
        text->setHtml(QApplication::translate("OBSUpdate", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p></body></html>", Q_NULLPTR));
        yes->setText(QApplication::translate("OBSUpdate", "Updater.UpdateNow", Q_NULLPTR));
        no->setText(QApplication::translate("OBSUpdate", "Updater.RemindMeLater", Q_NULLPTR));
        skip->setText(QApplication::translate("OBSUpdate", "Updater.Skip", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OBSUpdate: public Ui_OBSUpdate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSUPDATE_H
