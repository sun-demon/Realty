#ifndef REALTY_ADMIN_H
#define REALTY_ADMIN_H


#include "Client/Client.h"

namespace Realty {
	/**
	 * @author Sun Demon
	 */
	class Admin : public Client {
    public:
		Admin(std::size_t id,
              std::string login, const std::string& password,
              std::size_t level);

		[[nodiscard]] std::size_t getLevel() const;

		void setLevel(std::size_t level);

    private:
		std::size_t level_;
	};
}


#endif //REALTY_ADMIN_H