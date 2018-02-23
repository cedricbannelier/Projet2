#ifndef DATABASE_H
#define DATABASE_H

class database
{
public:
    database();
private:
    QSqlDatabase m_db;
};

#endif // DATABASE_H
