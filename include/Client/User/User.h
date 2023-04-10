#ifndef REALTY_USER_H
#define REALTY_USER_H


#include "Client/Client.h"
#include "Phone/Phone.h"

namespace Realty {
	/**
	 * @author Sun Demon
	 */
	class User : public Client {
    public:
		User(size_t id,
             std::string login, const std::string& password,
             std::string surname, std::string name, std::string patronymic,
             Phone number);

        [[nodiscard]] const std::string& getSurname()    const;
		[[nodiscard]] const std::string& getName()       const;
		[[nodiscard]] const std::string& getPatronymic() const;
		[[nodiscard]] const Phone&       getPhone()      const;

		void setSurname   (const std::string& surname);
		void setName      (const std::string& name);
		void setPatronymic(const std::string& patronymic);
		void setPhone     (const Phone&       number);

	private:
		std::string surname_;
		std::string name_;
		std::string patronymic_;
		Phone       number_;
	};
}


#endif //REALTY_USER_H