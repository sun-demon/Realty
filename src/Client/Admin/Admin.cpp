#include "Admin.h"

Realty::Admin::Admin(std::size_t id, const std::string& login, const std::string& password, std::size_t level)
: Client(id, login, password), _level(level) {}

std::size_t Realty::Admin::getLevel() const { return _level; }
void Realty::Admin::setLevel(std::size_t level) { _level = level; }