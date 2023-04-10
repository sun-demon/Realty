#include "Client/Admin/Admin.h"

namespace Realty {
    Admin::Admin(std::size_t id,
                 std::string login, const std::string& password,
                 std::size_t level)
      : Client(id, std::move(login), password),
        level_(level) {}

    std::size_t Admin::getLevel() const { return level_; }

    void Admin::setLevel(std::size_t level) { level_ = level; }
}
