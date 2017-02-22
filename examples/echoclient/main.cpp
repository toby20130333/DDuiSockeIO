#include "echoclient.h"
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    EchoClient *echoClient = new EchoClient;
    echoClient->open(QUrl("http://172.18.1.168:9000/"));
    return app.exec();
}
