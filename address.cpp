#include "address.h"
#include "date.h"
#include <iostream>

Address::Address() : street(""), apt(""), city(""), state(""), zip(0) {}

Address::Address(const std::string& street, const std::string& apt, const std::string& city, const std::string& state, int zip)
    : street(street), apt(apt), city(city), state(state), zip(zip) {}

void Address::init(const std::string& st, const std::string& c, const std::string& s, int z) {
    street = st;
    city = c;
    state = s;
    zip = z;
}

void Address::printAddress() const {
    std::cout << street << std::endl;
    std::cout << city << " " << state << ", " << zip << std::endl;
}

