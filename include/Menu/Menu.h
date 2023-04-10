#ifndef REALTY_MENU_H
#define REALTY_MENU_H


#include <string>
#include <vector>
#include "IRunnable.h"

namespace Realty {
    /**
     * @author Sun Demon
     */
    class Menu : IRunnable {
    public:
        class Item {
            using Function = void (*)();
        public:
            Item(std::string name, Function function);

            [[nodiscard]] const std::string& getName()     const;
            [[nodiscard]] const Function&    getFunction() const;

            void setName    (const std::string& name);
            void setFunction(const Function&    function);

        private:
            std::string name_;
            void (*function_)();
        };

        Menu(std::string name, std::vector<Item> items);

        [[nodiscard]] const std::string&       getName()  const;
        [[nodiscard]] const std::vector<Item>& getItems() const;

        void setName(const std::string& name);
        void setItems(const std::vector<Item>& items);

        void run() override;

    private:
        std::string name_;
        std::vector<Item> items_;
    };
}


#endif //REALTY_MENU_H
