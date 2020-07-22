#include <QCoreApplication>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QFile file("../config.json");
    file.open(QIODevice::WriteOnly);
    QJsonObject obj;
    QJsonArray arr;
    arr.append("id");
    arr.append("name");
    arr.append("secondName");
    obj["nameTable"] = "Table";
    obj["structureTable"] = arr;
    QJsonDocument doc(obj);
    file.write(doc.toJson());


    return 0;
}
