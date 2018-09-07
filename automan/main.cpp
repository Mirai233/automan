#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickView>
#include <QQmlContext>
#include <QDebug>
#include <app.h>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    //QQmlApplicationEngine engine;
    //engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    //if (engine.rootObjects().isEmpty())
    //  return -1;
    QQuickView Qlauch;
    Qlauch.setSource(QUrl(QStringLiteral("qrc:/main.qml")));
    Qlauch.setFlags(Qt::FramelessWindowHint);
    Qlauch.rootContext()->setContextProperty("mainwindow",&Qlauch);
    Qlauch.show();
    qDebug() << Qlauch.height() ;


    return app.exec();
}
