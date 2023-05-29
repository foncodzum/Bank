#ifndef TEST_BANK_H
#define TEST_BANK_H

#include <QObject>


class test_bank : public QObject
{
    Q_OBJECT
public:
    explicit test_bank(QObject *parent = nullptr);

private slots:
    void getsId();

signals:

public slots:
};

#endif // TEST_BANK_H
