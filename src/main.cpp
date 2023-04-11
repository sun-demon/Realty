#include <iostream>

using namespace Realty;

int main() {
    User user {
        0,
        "login", "password",
        "Surname", "Name", "Patronymic",
        { 800, 555, 3535 }
    };

    Add add {
        0, 0,
        std::vector<Magick::Image>(),
        2, 16.3,
        4, 5,
        12000, "Zentral", "Kaluga, Rileeva, 2, 32"
    };

    fmt::format("User :\r\n"
                "   id :    {}",
                "   login : {}",
                "   passwordHash : {}",
                "   surname : {}",
                "   name :         {}")
}