#include "database.h"

Database::Database() {
    connection = mysql_init(NULL);
}

Database::~Database() {
    mysql_close(connection);
}

bool Database::connect() {
    if (!mysql_real_connect(connection, "localhost", "username", "password", "database_name", 0, NULL, 0)) {
        fprintf(stderr, "Failed to connect to database: Error: %s\n", mysql_error(connection));
        return false;
    }
    return true;
}

bool Database::login(const std::string& username, const std::string& password) {
    // Your login authentication code here
    // Example: Execute SQL query to check username and password
    return true; // Return true if login is successful, false otherwise
}
