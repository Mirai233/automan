#include "learnv_code.h"

learnV_code::learnV_code() : QObject()
{
    net = new net_cli();
}


learnV_code::~learnV_code()
{

}


void learnV_code::set_conf(QList<QString> configs)
{
    if(!configs.isEmpty()){
        login_URL = configs.back();
        configs.pop_back();
        check_URL = configs.back();
        configs.pop_back();
        captch_URL = configs.back();
    }
}


void learnV_code::run()
{

    net->set_target(captch_URL);
    net->run(1);

}
