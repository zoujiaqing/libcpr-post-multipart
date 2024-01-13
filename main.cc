#include <iostream>
#include <vector>
#include <memory>
#include <cpr/cpr.h>

int main() {
    auto url = "http://127.0.0.1:8080/upload"; 

    const std::string filePath("Makefile");

    auto r = cpr::Post(
        cpr::Url{url},
        cpr::Multipart{
            {"token", "phdQ19ign7Epsh128cf9yfoncbjgufbl"},
            {"file", cpr::File{filePath}}
        }
    );

    std::cout << r.status_code << std::endl;
    std::cout << r.text << std::endl;

    return 0;
}
