#include "infodialog.h"
#include "ui_infodialog.h"

InfoDialog::InfoDialog(QWidget *parent) : QDialog(parent), ui(new Ui::InfoDialog)
{
    ui->setupUi(this);

    setWindowTitle("Elgato Stream Deck Plugin");
    ui->lb_ver->setText(QString("Plugin Version: %1").arg(VERSION_STR));
}

InfoDialog::~InfoDialog()
{
    delete ui;
}
