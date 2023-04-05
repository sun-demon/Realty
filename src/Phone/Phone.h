#ifndef REALTY_PHONE_H
#define REALTY_PHONE_H


#include <string>

namespace Realty {
	/**
	 * @author Sun Demon
	 */
	class Phone {
	public:
        [[maybe_unused]] Phone(int city, int station, int subscriber);

		[[nodiscard]] int getCity() const;
		[[nodiscard]] int getStation() const;
		[[nodiscard]] int getSubscriber() const;

		void setCity(int city);
		void setStation(int station);
		void setSubscriber(int subscriber);

		[[nodiscard]] std::string toString() const;

	private:
		int _city;
		int _station;
		int _subscriber;
	};
}


#endif //REALTY_PHONE_H