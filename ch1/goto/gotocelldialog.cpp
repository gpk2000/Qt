
#include "gotocelldialog.h"

GotoCellDialog::GotoCellDialog(QWidget *parent) : QDialog(parent) {
    setupUi(this);

    QRegExp regExp("[A-Za-z][1-9][0-9]{0,2}");
    lineEdit->setValidator(new QRegExpValidator(regExp, this));

    connect(okButton, SIGNAL(clicked()), this, SLOT(accept()));
    connect(cancelButton, SIGNAL(clicked()), this, SLOT(reject()));
    connect(lineEdit, SIGNAL(textChanged(const QString &)), this, SLOT(onLineEditTextChanged()));
}

void GotoCellDialog::onLineEditTextChanged() {
    okButton->setEnabled(lineEdit->hasAcceptableInput());
}
