cmake_minimum_required(VERSION 3.8)

project(Realty)

find_package(fmt REQUIRED)

add_executable(${PROJECT_NAME} src/main.cpp

        src/Client/Client.h
        src/Client/Client.cpp

        src/Phone/Phone.h
        src/Phone/Phone.cpp

        src/Client/User/User.h
        src/Client/User/User.cpp

        src/Client/Admin/Admin.h
        src/Client/Admin/Admin.cpp
)

target_link_libraries(${PROJECT_NAME} fmt::fmt)
