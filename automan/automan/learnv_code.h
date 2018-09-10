#ifndef LEARNV_CODE_H
#define LEARNV_CODE_H

#include <QObject>
#include "opencv2/core.hpp"
#include "opencv2/imgcodecs.hpp"
#include <QList>
#include <QDebug>
#include "net_cli.h"

class learnV_code : public QObject
{
    Q_OBJECT
public:
    explicit learnV_code();
     ~learnV_code();
    virtual void set_conf(QList<QString>);
    virtual void run();
public slots:

signals:


private:
    QString captch_URL;
    QString login_URL;
    QString check_URL;
    QString database_HOST;
    QString database_PORT;
    QString query_URL;
    net_cli * net;

};

#endif // LEARNV_CODE_H
