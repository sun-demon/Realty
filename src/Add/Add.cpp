#include "Add/Add.h"

namespace Realty {
    Add::Add(std::size_t id, std::size_t userID,
             std::vector<Magick::Image> images,
             unsigned int nRooms, unsigned double square,
             unsigned int floor, unsigned int nFloors,
             unsigned int price, std::string district, std::string address)
      : id_(id), userID_(userID),
        images_(std::move(images)),
        nRooms_(nRooms), square_(square),
        floor_(floor), nFloors_(nFloors),
        price_(price), district_(std::move(district)) {}

    std::size_t                        Add::getID()          const { return id_; }
    std::size_t                        Add::getUserID()      const { return userID_; }
    const std::vector<Magick::Image> & Add::getImages()      const { return images_; }
    unsigned int                       Add::getCountRooms()  const { return nRooms_; }
    unsigned double                    Add::getSquare()      const { return square_; }
    unsigned int                       Add::getFloor()       const { return floor_; }
    unsigned int                       Add::getCountFloors() const { return nFloors_; }
    unsigned int                       Add::getPrice()       const { return price_; }
    const std::string &                Add::getDistrict()    const { return district_; }
    const std::string &                Add::getAddress()     const { return address_; }

    void Add::setID         (std::size_t                id)       { id_       = id; }
    void Add::setUserID     (std::size_t                userID)   { userID_   = userID; }
    void Add::setImages     (std::vector<Magick::Image> images)   { images_   = images; }
    void Add::setCountRooms (unsigned int               nRooms)   { nRooms_   = nRooms; }
    void Add::setSquare     (unsigned double            square)   { square_   = square; }
    void Add::setFloor      (unsigned int               floor)    { floor_    = floor; }
    void Add::setCountFloors(unsigned int               nFloors)  { nFloors_  = nFloors; }
    void Add::setPrice      (unsigned int               price)    { price_    = price; }
    void Add::setDistrict   (std::string                district) { districs_ = distric; }
    void Add::setAddress    (std::string                address)  { address_  = address; }
}
