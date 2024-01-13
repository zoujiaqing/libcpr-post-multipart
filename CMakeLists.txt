cmake_minimum_required (VERSION 3.0)

project (demo)
add_compile_options(-std=c++17 -Wall)

include_directories(
    /opt/homebrew/Cellar/curl/8.5.0/include
    /opt/homebrew/Cellar/cpr/1.10.5/include
)

link_libraries(curl cpr)

link_directories(
    /opt/homebrew/Cellar/curl/8.5.0/lib
    /opt/homebrew/Cellar/cpr/1.10.5/lib
)

add_executable(main main.cc)
