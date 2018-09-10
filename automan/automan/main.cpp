#include <QCoreApplication>
#include <QDebug>
#include <cstdio>
#include <Qlist>
#include <QFile>
#include <QSettings>
#include <QStandardPaths>
#include "learnv_code.h"

using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    char input;
    QSettings *setting = new QSettings("D:\\1.ini",QSettings::IniFormat);
    QList<QString> configs;
    configs.append(setting->value("captch_url").toString());
    configs.append(setting->value("check_url").toString());
    configs.append(setting->value("login_url").toString());
    /*setting->setValue("version","1072693770.50210.0000");
    setting->setValue("captch_url","https://kyfw.12306.cn/passport/captcha/captcha-image?login_site=E&module=login&rand=sjrand");
    setting->setValue("check_url","https://kyfw.12306.cn/passport/captcha/captcha-check");
    setting->setValue("login_url","https://kyfw.12306.cn/passport/web/login");*/
    delete(setting);


    /*int console_type = 0;
    do{
        gets(&input);
        if(!strcmp(&input,"YES")){
            console_type = 1;
            break;
        }else if(!strcmp(&input,"NO")){
            console_type = 2;
            break;
        }
    }
    while(1);*/
    learnV_code *app = new learnV_code();

    app->set_conf(configs);
    app->run();

    return a.exec();
}
