#ifndef GOTOCELLDIALOG_H
#define GOTOCELLDIALOG_H

#include <QDialog>
#include "ui_gotocelldialog.h"

class GotoCellDialog: public QDialog, public Ui::GotoCellDialog {
    Q_OBJECT;

public:
    GotoCellDialog(QWidget *parent = 0);

private slots:
    void onLineEditTextChanged();
};

#endif
