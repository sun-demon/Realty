#include "User.h"

#include <utility>

Realty::User::User(std::size_t id, const std::string& login, const std::string& password, std::string surname, std::string name, std::string patronymic, const Phone& number)
: Client(id, login, password), _surname(std::move(surname)), _name(std::move(name)), _patronymic(std::move(patronymic)), _number(number) {}

const std::string& Realty::User::getSurname() const { return _surname; }
const std::string& Realty::User::getName() const { return _name; }
const std::string& Realty::User::getPatronymic() const { return _patronymic; }
const Realty::Phone& Realty::User::getPhone() const { return _number; }

void Realty::User::setSurname(const std::string& surname) { _surname = surname; }
void Realty::User::setName(const std::string& name) { _name = name; }
void Realty::User::setPatronymic(const std::string& patronymic) { _patronymic = patronymic; }
void Realty::User::setPhone(const Realty::Phone& number) { _number = number; }