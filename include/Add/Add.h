#ifndef REALTY_ADD_H
#define REALTY_ADD_H


#include <Magick++.h>

namespace Realty {
    class Add {
        Add(std::size_t id, std::size_t userID,
            std::vector<Magick::Image> images,
            unsigned int nRooms, unsigned double square,
            unsigned int floor, unsigned int nFloors,
            unsigned int price, std::string district, std::string address);

        std::size_t                        getID()          const;
        std::size_t                        getUserID()      const;
        const std::vector<Magick::Image> & getImages()      const;
        unsigned int                       getCountRooms()  const;
        unsigned double                    getSquare()      const;
        unsigned int                       getFloor()       const;
        unsigned int                       getCountFloors() const;
        unsigned int                       getPrice()       const;
        const std::string &                getDistrict()    const;
        const std::string &                getAddress()     const;

	    void setID         (std::size_t                id);
        void setUserID     (std::size_t                userID);
        void setImages     (std::vector<Magick::Image> images);
        void setCountRooms (unsigned int               nRooms);
        void setSquare     (unsigned double            square);
        void setFloor      (unsigned int               floor);
        void setCountFloors(unsigned int               nFloors);
        void setPrice      (unsigned int               price);
        void setDistrict   (std::string                district);
        void setAddress    (std::string                address);

    private:
        std::size_t     		   id_;
        std::size_t		           userID_;
        std::vector<Magick::Image> images_;
        unsigned int		       nRooms_;
        unsigned double 	       square_;
        unsigned int 		       floor_;
        unsigned int 		       nFloors_;
        unsigned int 		       price_;
        std::string 		       district_;
        std::string		           address_;
    };
}


#endif //REALTY_ADD_H
