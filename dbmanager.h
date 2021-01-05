#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QtSql>

class DbManager
{
public:
    DbManager(const QString& path);
    bool AddRecord(const QString &name);

private:
    QSqlDatabase m_db;
};

#endif // DBMANAGER_H
