#ifndef REALTY_ADD_H
#define REALTY_ADD_H


#include <Magick++.h>

namespace Realty {
    class Add {
        Add(std::vector<Magick::Image> images, ...);

        [[nodiscard]] const std::vector<Magick::Image>& getImages() const;
    private:
        std::vector<Magick::Image> images_;
    };
}


#endif //REALTY_ADD_H
