#ifndef APP_H
#define APP_H

#include <QObject>

class app : public QObject
{
    Q_OBJECT
public:
    explicit app(QObject *parent = nullptr);
    //载入应用配置文件
private:
     load_conf();

    //初始化app
     initial_app();

    //启动应用
     app_start();
signals:

public slots:
};

#endif // APP_H
