#include "Add/Add.h"

namespace Realty {
    Add::Add(std::vector<Magick::Image> images, ...)
      : images_(std::move(images)) {}

    const std::vector<Magick::Image>& Add::getImages() const {
        return images_;
    }
}
