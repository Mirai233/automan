#ifndef NET_CLI_H
#define NET_CLI_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <Qdir>
#include <QRegExp>
#include <QNetworkCookie>
#include <QNetworkCookieJar>
#include <QDebug>


class net_cli : public QObject
{
    Q_OBJECT
public:
    explicit net_cli();
    virtual void run(qint32);
    virtual void stop();
    virtual int set_target(QString);
    QByteArray captch_data;
public slots:
    void reply_captch(QNetworkReply*);
    void reply_check(QNetworkReply*);
    void reply_login(QNetworkReply*);
signals:

private:
    QNetworkAccessManager * Manager;
    QUrl url;
    QString Reply_str ;
    QNetworkCookieJar *cjar;
    QList<QNetworkCookie> Cookies;
};

#endif // NET_CLI_H
