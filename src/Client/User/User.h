#ifndef REALTY_USER_H
#define REALTY_USER_H


#include "../Client.h"
#include "../../Phone/Phone.h"

namespace Realty {
	/**
	 * @author Sun Demon
	 */
	class User : public Client {
	public:
		User(std::size_t id, const std::string& login, const std::string& password, std::string surname, std::string name, std::string patronymic, const Phone& number);

		[[nodiscard]] const std::string& getSurname() const;
		[[nodiscard]] const std::string& getName() const;
		[[nodiscard]] const std::string& getPatronymic() const;
		[[nodiscard]] const Phone& getPhone() const;

		void setSurname(const std::string& surname);
		void setName(const std::string& name);
		void setPatronymic(const std::string& patronymic);
		void setPhone(const Phone& number);

	private:
		std::string _surname;
		std::string _name;
		std::string _patronymic;
		Phone _number;
	};
}


#endif //REALTY_USER_H