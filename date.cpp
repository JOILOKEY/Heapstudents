#include "date.h"
#include <iostream>
#include <sstream>

Date::Date() : month(0), day(0), year(0) {}

void Date::init(const std::string& dateStr) {
    std::stringstream ss(dateStr);
    std::string token;

    getline(ss, token, '/');
    month = std::stoi(token);
    getline(ss, token, '/');
    day = std::stoi(token);
    getline(ss, token);
    year = std::stoi(token);
}

void Date::printDate() const {
    static const std::string monthNames[] = {
        "Invalid", "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    if (month >= 1 && month <= 12) {
        std::cout << monthNames[month] << " " << day << ", " << year << std::endl;
    } else {
        std::cout << "Invalid Date" << std::endl;
    }
}

