#ifndef DATABASE_H
#define DATABASE_H

#include <mariadb/mysql.h>
#include <string>

class Database {
public:
    Database();
    ~Database();
    bool connect();
    bool login(const std::string& username, const std::string& password);

private:
    MYSQL *connection;
};

#endif // DATABASE_H
