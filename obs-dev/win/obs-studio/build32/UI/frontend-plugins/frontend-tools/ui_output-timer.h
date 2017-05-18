/********************************************************************************
** Form generated from reading UI file 'output-timer.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUT_2D_TIMER_H
#define UI_OUTPUT_2D_TIMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_OutputTimer
{
public:
    QGridLayout *timerLayout;
    QLabel *streamingLabel;
    QSpinBox *streamingTimerHours;
    QLabel *hoursLabel;
    QSpinBox *streamingTimerMinutes;
    QLabel *minutesLabel;
    QSpinBox *streamingTimerSeconds;
    QLabel *secondsLabel;
    QPushButton *outputTimerStream;
    QLabel *streamStoppingIn;
    QLabel *streamTime;
    QLabel *recordingLabel;
    QSpinBox *recordingTimerHours;
    QLabel *hoursLabel_2;
    QSpinBox *recordingTimerMinutes;
    QLabel *minutesLabel_2;
    QSpinBox *recordingTimerSeconds;
    QLabel *secondsLabel_2;
    QPushButton *outputTimerRecord;
    QLabel *recordStoppingIn;
    QLabel *recordTime;
    QCheckBox *autoStartStreamTimer;
    QCheckBox *autoStartRecordTimer;

    void setupUi(QDialog *OutputTimer)
    {
        if (OutputTimer->objectName().isEmpty())
            OutputTimer->setObjectName(QStringLiteral("OutputTimer"));
        OutputTimer->resize(600, 200);
        timerLayout = new QGridLayout(OutputTimer);
        timerLayout->setObjectName(QStringLiteral("timerLayout"));
        streamingLabel = new QLabel(OutputTimer);
        streamingLabel->setObjectName(QStringLiteral("streamingLabel"));

        timerLayout->addWidget(streamingLabel, 0, 1, 1, 1);

        streamingTimerHours = new QSpinBox(OutputTimer);
        streamingTimerHours->setObjectName(QStringLiteral("streamingTimerHours"));
        streamingTimerHours->setMinimum(0);
        streamingTimerHours->setMaximum(24);
        streamingTimerHours->setValue(0);

        timerLayout->addWidget(streamingTimerHours, 0, 2, 1, 1);

        hoursLabel = new QLabel(OutputTimer);
        hoursLabel->setObjectName(QStringLiteral("hoursLabel"));

        timerLayout->addWidget(hoursLabel, 0, 3, 1, 1);

        streamingTimerMinutes = new QSpinBox(OutputTimer);
        streamingTimerMinutes->setObjectName(QStringLiteral("streamingTimerMinutes"));
        streamingTimerMinutes->setMaximum(59);
        streamingTimerMinutes->setValue(0);

        timerLayout->addWidget(streamingTimerMinutes, 0, 4, 1, 1);

        minutesLabel = new QLabel(OutputTimer);
        minutesLabel->setObjectName(QStringLiteral("minutesLabel"));

        timerLayout->addWidget(minutesLabel, 0, 5, 1, 1);

        streamingTimerSeconds = new QSpinBox(OutputTimer);
        streamingTimerSeconds->setObjectName(QStringLiteral("streamingTimerSeconds"));
        streamingTimerSeconds->setMinimum(0);
        streamingTimerSeconds->setMaximum(59);
        streamingTimerSeconds->setValue(30);

        timerLayout->addWidget(streamingTimerSeconds, 0, 6, 1, 1);

        secondsLabel = new QLabel(OutputTimer);
        secondsLabel->setObjectName(QStringLiteral("secondsLabel"));

        timerLayout->addWidget(secondsLabel, 0, 7, 1, 1);

        outputTimerStream = new QPushButton(OutputTimer);
        outputTimerStream->setObjectName(QStringLiteral("outputTimerStream"));

        timerLayout->addWidget(outputTimerStream, 0, 8, 1, 1);

        streamStoppingIn = new QLabel(OutputTimer);
        streamStoppingIn->setObjectName(QStringLiteral("streamStoppingIn"));

        timerLayout->addWidget(streamStoppingIn, 2, 1, 1, 1);

        streamTime = new QLabel(OutputTimer);
        streamTime->setObjectName(QStringLiteral("streamTime"));

        timerLayout->addWidget(streamTime, 2, 2, 1, 1);

        recordingLabel = new QLabel(OutputTimer);
        recordingLabel->setObjectName(QStringLiteral("recordingLabel"));

        timerLayout->addWidget(recordingLabel, 3, 1, 1, 1);

        recordingTimerHours = new QSpinBox(OutputTimer);
        recordingTimerHours->setObjectName(QStringLiteral("recordingTimerHours"));
        recordingTimerHours->setMinimum(0);
        recordingTimerHours->setMaximum(24);
        recordingTimerHours->setValue(0);

        timerLayout->addWidget(recordingTimerHours, 3, 2, 1, 1);

        hoursLabel_2 = new QLabel(OutputTimer);
        hoursLabel_2->setObjectName(QStringLiteral("hoursLabel_2"));

        timerLayout->addWidget(hoursLabel_2, 3, 3, 1, 1);

        recordingTimerMinutes = new QSpinBox(OutputTimer);
        recordingTimerMinutes->setObjectName(QStringLiteral("recordingTimerMinutes"));
        recordingTimerMinutes->setMinimum(0);
        recordingTimerMinutes->setMaximum(59);
        recordingTimerMinutes->setValue(0);

        timerLayout->addWidget(recordingTimerMinutes, 3, 4, 1, 1);

        minutesLabel_2 = new QLabel(OutputTimer);
        minutesLabel_2->setObjectName(QStringLiteral("minutesLabel_2"));

        timerLayout->addWidget(minutesLabel_2, 3, 5, 1, 1);

        recordingTimerSeconds = new QSpinBox(OutputTimer);
        recordingTimerSeconds->setObjectName(QStringLiteral("recordingTimerSeconds"));
        recordingTimerSeconds->setMinimum(0);
        recordingTimerSeconds->setMaximum(59);
        recordingTimerSeconds->setValue(30);

        timerLayout->addWidget(recordingTimerSeconds, 3, 6, 1, 1);

        secondsLabel_2 = new QLabel(OutputTimer);
        secondsLabel_2->setObjectName(QStringLiteral("secondsLabel_2"));

        timerLayout->addWidget(secondsLabel_2, 3, 7, 1, 1);

        outputTimerRecord = new QPushButton(OutputTimer);
        outputTimerRecord->setObjectName(QStringLiteral("outputTimerRecord"));

        timerLayout->addWidget(outputTimerRecord, 3, 8, 1, 1);

        recordStoppingIn = new QLabel(OutputTimer);
        recordStoppingIn->setObjectName(QStringLiteral("recordStoppingIn"));

        timerLayout->addWidget(recordStoppingIn, 5, 1, 1, 1);

        recordTime = new QLabel(OutputTimer);
        recordTime->setObjectName(QStringLiteral("recordTime"));

        timerLayout->addWidget(recordTime, 5, 2, 1, 1);

        autoStartStreamTimer = new QCheckBox(OutputTimer);
        autoStartStreamTimer->setObjectName(QStringLiteral("autoStartStreamTimer"));

        timerLayout->addWidget(autoStartStreamTimer, 1, 1, 1, 3);

        autoStartRecordTimer = new QCheckBox(OutputTimer);
        autoStartRecordTimer->setObjectName(QStringLiteral("autoStartRecordTimer"));

        timerLayout->addWidget(autoStartRecordTimer, 4, 1, 1, 3);


        retranslateUi(OutputTimer);

        QMetaObject::connectSlotsByName(OutputTimer);
    } // setupUi

    void retranslateUi(QDialog *OutputTimer)
    {
        OutputTimer->setWindowTitle(QApplication::translate("OutputTimer", "OutputTimer", Q_NULLPTR));
        streamingLabel->setText(QApplication::translate("OutputTimer", "OutputTimer.Stream", Q_NULLPTR));
        hoursLabel->setText(QApplication::translate("OutputTimer", "Hours", Q_NULLPTR));
        minutesLabel->setText(QApplication::translate("OutputTimer", "Minutes", Q_NULLPTR));
        secondsLabel->setText(QApplication::translate("OutputTimer", "Seconds", Q_NULLPTR));
        outputTimerStream->setText(QApplication::translate("OutputTimer", "Start", Q_NULLPTR));
        streamStoppingIn->setText(QApplication::translate("OutputTimer", "OutputTimer.Stream.StoppingIn", Q_NULLPTR));
        streamTime->setText(QApplication::translate("OutputTimer", "00:00:00", Q_NULLPTR));
        recordingLabel->setText(QApplication::translate("OutputTimer", "OutputTimer.Record", Q_NULLPTR));
        hoursLabel_2->setText(QApplication::translate("OutputTimer", "Hours", Q_NULLPTR));
        minutesLabel_2->setText(QApplication::translate("OutputTimer", "Minutes", Q_NULLPTR));
        secondsLabel_2->setText(QApplication::translate("OutputTimer", "Seconds", Q_NULLPTR));
        outputTimerRecord->setText(QApplication::translate("OutputTimer", "Start", Q_NULLPTR));
        recordStoppingIn->setText(QApplication::translate("OutputTimer", "OutputTimer.Record.StoppingIn", Q_NULLPTR));
        recordTime->setText(QApplication::translate("OutputTimer", "00:00:00", Q_NULLPTR));
        autoStartStreamTimer->setText(QApplication::translate("OutputTimer", "OutputTimer.Stream.EnableEverytime", Q_NULLPTR));
        autoStartRecordTimer->setText(QApplication::translate("OutputTimer", "OutputTimer.Record.EnableEverytime", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OutputTimer: public Ui_OutputTimer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUT_2D_TIMER_H
