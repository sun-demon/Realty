#include "Phone/Phone.h"

#include <fmt/format.h>

namespace Realty {
    Phone::Phone(int city, int station, int subscriber)
      : city_(city), station_(station), subscriber_(subscriber) {}

    int Phone::getCity()       const { return city_; }
    int Phone::getStation()    const { return station_; }
    int Phone::getSubscriber() const { return subscriber_; }

    void Phone::setCity      (int city)       { city_       = city; }
    void Phone::setStation   (int station)    { station_    = station; }
    void Phone::setSubscriber(int subscriber) { subscriber_ = subscriber; }

    std::string Phone::toString() const {
        return fmt::format("+7({}){}-{}", city_, station_, subscriber_);
    }
}
