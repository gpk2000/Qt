#ifndef FINDDIALOG_H
#define FINDDIALOG_H

#include <QDialog>

class QLabel;
class QLineEdit;
class QCheckBox;
class QPushButton;

class finddialog : public QDialog
{
    Q_OBJECT

public:
    finddialog(QWidget *parent = nullptr);

signals:
    void findNext(const QString &str, Qt::CaseSensitivity cs);
    void findPrevious(const QString &str, Qt::CaseSensitivity cs);

private slots:
    void findClicked();
    void enableFindButton(const QString &text);

private:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *closeButton;
    QPushButton *findButton;
    QCheckBox *caseCheckBox;
    QCheckBox *backwardCheckBox;

    ~finddialog();
};
#endif // FINDDIALOG_H
