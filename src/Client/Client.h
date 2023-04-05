#ifndef REALTY_CLIENT_H
#define REALTY_CLIENT_H


#include <cstddef>
#include <string>

namespace Realty {
	/**
	 * @author Sun Demon
	 */
	class Client {
	public:
		Client(std::size_t id, std::string login, const std::string& password);

		[[nodiscard]] std::size_t getID() const;
		[[nodiscard]] const std::string& getLogin() const;
		[[nodiscard]] std::size_t getPasswordHash() const;

		void setID(std::size_t id);
		void setLogin(const std::string& basicString);
		void setPassword(const std::string& password);

	private:
		static std::size_t hash(const std::string& password);

		std::size_t _id;
		std::string _login;
		std::size_t _passwordHash;
	};
}


#endif //REALTY_CLIENT_H