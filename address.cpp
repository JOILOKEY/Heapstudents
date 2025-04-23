#include <iostream>
#include "address.h"

Address::Address() : street(""), city(""), state(""), zip("") {}

void Address::init(const std::string& st, const std::string& c, const std::string& s, const std::string& z) {
    street = st;
    city = c;
    state = s;
    zip = z;
}

void Address::printAddress() const {
    std::cout << street << std::endl;
    std::cout << city << " " << state << ", " << zip << std::endl;
}

