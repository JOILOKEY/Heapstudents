#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "address.h"
#include "date.h"

class Student {
private:
    std::string firstName;
    std::string lastName;
    Address address;
    Date dateOfBirth;
    Date startDate;
    int creditHours;

public:
    Student(std::string firstName, std::string lastName, Address address, Date dob, Date startDate, int credits);
    void printStudent() const;
};

#endif


