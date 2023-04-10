#include "Client/Client.h"

#include <utility>

namespace Realty {
    Client::Client(std::size_t id,
                   std::string login, const std::string& password)
      : id_(id),
        login_(std::move(login)), passwordHash_(hash(password)) {}

    std::size_t        Client::getID()           const { return id_; }
    const std::string& Client::getLogin()        const { return login_; }
    std::size_t        Client::getPasswordHash() const { return passwordHash_; }

    void Client::setID      (std::size_t id)              { id_           = id; }
    void Client::setLogin   (const std::string& login)    { login_        = login; }
    void Client::setPassword(const std::string& password) { passwordHash_ = hash(password); }

    std::size_t Client::hash(const std::string& password) {
        return std::hash<std::string>{}("Prefix" + password + "suffix");
    }
}
