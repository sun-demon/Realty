#ifndef REALTY_DATABASE_H
#define REALTY_DATABASE_H


#include <vector>

#include "Add/Add.h"
#include "Client/User/User.h"

namespace Realty {
    class DataBase {
        class Connection {
            std::size_t connectionID;
            std::size_t userID;
        };
    public:
        static update() {

        }


    private:
        DataBase();
        ~DataBase();

        static DataBase * instance;
        std::vector<User> users_;
        std::vector<Add>  adds_;
        std::vector<Connection> connections_;
    }
}


#endif //REALTY_DATABASE_H
