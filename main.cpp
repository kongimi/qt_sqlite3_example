#include <QCoreApplication>
#include "dbmanager.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    DbManager my_db("/home/pi/sourcecode/test_sqlite3/test_db/test.db");
    my_db.AddRecord("Test");

    return a.exec();
}
