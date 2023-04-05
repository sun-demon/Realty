#include <fmt/format.h>
#include "Phone.h"

Realty::Phone::Phone(int city, int station, int subscriber)
: _city(city), _station(station), _subscriber(subscriber) {}

int Realty::Phone::getCity() const { return _city; }
int Realty::Phone::getStation() const { return _station; }
int Realty::Phone::getSubscriber() const { return _subscriber; }

void Realty::Phone::setCity(int city) { this->_city = city; }
void Realty::Phone::setStation(int station) { this->_station = station; }
void Realty::Phone::setSubscriber(int subscriber) { this->_subscriber = subscriber; }

std::string Realty::Phone::toString() const {
	return fmt::format("+7({}){}-{}", _city, _station, _subscriber);
}