#ifndef DATE_H
#define DATE_H

#include <string>

class Date {
private:
    int month;
    int day;
    int year;

public:
    Date(); 
    void init(const std::string& dateStr); // mm/dd/yyyy
    void printDate() const;
};

#endif

