#include "Client/User/User.h"

#include <utility>

namespace Realty {
    User::User(std::size_t id,
           std::string login, const std::string &password,
           std::string surname, std::string name, std::string patronymic,
           Phone number)
      : Client(id, std::move(login), password),
        surname_(std::move(surname)), name_(std::move(name)), patronymic_(std::move(patronymic)),
        number_(number) {}

    const std::string& User::getSurname()    const { return surname_; }
    const std::string& User::getName()       const { return name_; }
    const std::string& User::getPatronymic() const { return patronymic_; }
    const Phone&       User::getPhone()      const { return number_; }

    void User::setSurname   (const std::string& surname)    { surname_    = surname; }
    void User::setName      (const std::string& name)       { name_       = name; }
    void User::setPatronymic(const std::string& patronymic) { patronymic_ = patronymic; }
    void User::setPhone     (const Phone&       number)     { number_     = number; }
}
