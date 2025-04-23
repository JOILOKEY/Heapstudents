#include "student.h"
#include <iostream>

Student::Student(std::string firstName, std::string lastName, Address address, Date dob, Date start, int credits)
    : firstName(firstName), lastName(lastName), address(address), dateOfBirth(dob), startDate(start), creditHours(credits) {}

void Student::printStudent() const {
    std::cout << firstName << " " << lastName << std::endl;
    address.printAddress();
    std::cout << "DOB: ";
    dateOfBirth.printDate();
    std::cout << "Grad: ";
    startDate.printDate();
    std::cout << "Credits: " << creditHours << std::endl;
    std::cout << "____________________________________" << std::endl;
    std::cout << lastName << ", " << firstName << std::endl;
}


