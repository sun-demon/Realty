#include <iostream>
#include "Menu/Menu.h"

using namespace Realty;

void logIn();
void logUp();

void  createAdd();
void  changeAdd();
void destroyAdd();
void searchByQuery();

int main() {
    Menu authorizeMenu {"Authorization",
        { {"log in", logIn},
          {"log up", logUp} }
    };

    authorizeMenu.run();

    return 0;
}

void logIn() {
    while (true) {
        std::string login, password;
        std::cout << "Input login: " << std::flush;
        std::cin >> login;
        std::cout << "Input password: " << std::flush;
        std::cin >> password;

        if (DataBase.getInstance().);
    }
}

void logUp() {

}