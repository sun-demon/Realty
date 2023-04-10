cmake_minimum_required(VERSION 3.8)

project(Realty)

find_package(fmt REQUIRED)
find_package(ImageMagick COMPONENTS Magick++)

include_directories(include include/interface)

add_executable(${PROJECT_NAME} src/main.cpp

        include/Client/Client.h
            src/Client/Client.cpp

        include/Phone/Phone.h
            src/Phone/Phone.cpp

        include/Client/User/User.h
            src/Client/User/User.cpp

        include/Client/Admin/Admin.h
            src/Client/Admin/Admin.cpp

        include/Add/Add.h
            src/Add/Add.cpp

        include/interface/IRunnable.h

        include/Menu/Menu.h
            src/Menu/Menu.cpp

        include/DataBase/DataBase.h
            src/DataBase/DataBase.cpp
        src/Add/Add.cpp)

target_link_libraries(${PROJECT_NAME} fmt::fmt ImageMagick::Magick++)
