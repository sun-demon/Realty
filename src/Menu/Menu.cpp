#include <fmt/format.h>
#include <iostream>
#include "Menu/Menu.h"

namespace Realty {
    Menu::Item::Item(std::string name, Menu::Item::Function function)
            : name_(std::move(name)), function_(function) {}

    const std::string&          Menu::Item::getName()     const { return name_; }
    const Menu::Item::Function& Menu::Item::getFunction() const { return function_; }

    void Menu::Item::setName    (const std::string&          name)     { name_     = name; }
    void Menu::Item::setFunction(const Menu::Item::Function& function) { function_ = function; }


    Menu::Menu(std::string name, std::vector<Item> items)
      : name_(std::move(name)), items_(std::move(items)) {}

    const std::string&             Menu::getName()  const { return name_; }
    const std::vector<Menu::Item>& Menu::getItems() const { return items_; }

    void Menu::setName (const std::string&        name) { name_  = name; }
    void Menu::setItems(const std::vector<Item>& items) { items_ = items; }

    void Menu::run() {
        while (true) {
            std::cout << fmt::format("{}:\r\n", getName());
            for (int i = 1; i <= getItems().size(); ++i)
                std::cout << fmt::format("{}) - {}\r\n", i, getItems()[i].getName());
            std::cout << "0) - exit\r\n";
            std::cout << "\r\n > " << std::flush;

            std::size_t item;
            std::cin >> item;
            if (item == 0)
                return;
            getItems().at(item).getFunction()();
        }
    }
}
