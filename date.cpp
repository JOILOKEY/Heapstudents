#include "date.h"
#include <iostream>
#include <sstream> 

Date::Date() : month(0), day(0), year(0) {}

Date::Date(int m, int d, int y) : month(m), day(d), year(y) {}

void Date::init(const std::string& dateStr) {
    char slash;
    std::istringstream iss(dateStr);
    iss >> month >> slash >> day >> slash >> year;
}

void Date::printDate() const {
    const std::string months[] = { "January", "February", "March", "April", "May",
            "June", "July", "August", "September", "October", "November", "December" };

    if (month >= 1 && month <= 12)
        std::cout << months[month - 1] << " " << day << ", " << year << std::endl;
    else
        std::cout << "Invalid date" << std::endl;
}

