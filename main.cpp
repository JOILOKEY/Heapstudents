#include <iostream>
#include "address.h"
#include "date.h"
#include "student.h"

void testStudent();

int main() {
    std::cout << "Hello!" << std::endl;

    Date today;
    today.init("01/27/1997");
    today.printDate();

    Address addr1;
    addr1.init("123 W Main St", "Muncie", "IN", 47303);
    addr1.printAddress();

    testStudent();

    return 0;
}

void testStudent() {
    Address addr;
    addr.init("32181 Johnson Course Apt. 389", "New Jamesside", "IN", 59379);

    Date dob;
    dob.init("02/17/2004");

    Date grad;
    grad.init("05/15/2027");

    Student student("Danielle", "Johnson", addr, dob, grad, 65);
    student.printStudent();
}

