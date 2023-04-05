#include "Client.h"

#include <utility>

Realty::Client::Client(std::size_t id, std::string login, const std::string& password)
: _id(id), _login(std::move(login)), _passwordHash(hash(password)) {}

std::size_t Realty::Client::getID() const { return _id; }
const std::string& Realty::Client::getLogin() const { return _login; }
std::size_t Realty::Client::getPasswordHash() const { return _passwordHash; }

void Realty::Client::setID(std::size_t id) { _id = id; }
void Realty::Client::setLogin(const std::string& login) { _login = login; }
void Realty::Client::setPassword(const std::string& password) { _passwordHash = hash(password); }

std::size_t Realty::Client::hash(const std::string& password) {
	return std::hash<std::string>{}("Prefix" + password + "suffix");
}
