#include <iostream>
#include <fmt/format.h>
#include "Client/User/User.h"
#include "Client/Admin/Admin.h"

using namespace Realty;

int main()
{
	User user{ 0, "login",
                      "password",
                      "Surname",
                      "Name",
                      "Patronymic",
               {800, 555, 3535}};
	std::cout << fmt::format("User:\r\n"
                                  "id={}\r\n"
                                  "login={}\r\n"
                                  "passwordHash={}\r\n"
                                  "surname={}\r\n"
                                  "name={}\r\n"
                                  "patronymic={}\r\n"
                                  "phone={}\r\n",
                             user.getID(),
                             user.getLogin(),
                             user.getPasswordHash(),
                             user.getSurname(),
                             user.getName(),
                             user.getPatronymic(),
                             user.getPhone().toString()) << "\r\n";

    Admin admin{0, "login", "password", 0};
    std::cout << fmt::format("Admin:\r\n"
                                  "id={}\r\n"
                                  "login={}\r\n"
                                  "passwordHash={}\r\n"
                                  "level={}\r\n",
                              admin.getID(),
                              admin.getLogin(),
                              admin.getPasswordHash(),
                              admin.getLevel()) << std::endl;
	return 0;
}
