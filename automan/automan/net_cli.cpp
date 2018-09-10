#include "net_cli.h"

net_cli::net_cli() : QObject()
{
    Manager = new QNetworkAccessManager(this);

}

void net_cli::run(qint32 type)
{
    switch (type) {
    case 1:
    connect(Manager,SIGNAL(finished(QNetworkReply*)),this,SLOT(reply_captch(QNetworkReply*)));
    QNetworkRequest request(url);
    request.setAttribute(QNetworkRequest::HttpPipeliningAllowedAttribute, true);
    Manager->get(request);
        break;

    }
}

void net_cli::stop()
{

}


int net_cli::set_target(QString target)
{
    url = QUrl(target);
    int ret = 0;
    if(!url.isEmpty()){
        ret = 1;
    }
    return ret;
}

void net_cli::reply_captch(QNetworkReply *reply)
{
    disconnect(Manager,SIGNAL(finished(QNetworkReply*)),this,SLOT(reply_captch(QNetworkReply*)));
    reply->ignoreSslErrors();
    if(reply->error() == QNetworkReply::NoError){
        qDebug() << reply->readAll();
    }

}

void net_cli::reply_login(QNetworkReply *reply)
{

}

void net_cli::reply_check(QNetworkReply *reply)
{

}
