#include <iostream>
#include <sstream>
#include "date.h"

using namespace std;

void Date::init(string mmddyyyy) {
    
    stringstream ss(mmddyyyy);
    string temp;

    getline(ss, temp, '/');
    month = stoi(temp);
    getline(ss, temp, '/');
    day = stoi(temp);
    getline(ss, temp);
    year = stoi(temp);
}

void Date::printDate() const {
    static const string months[] = {
        "", "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    cout << months[month] << " " << day << ", " << year << endl;
}

