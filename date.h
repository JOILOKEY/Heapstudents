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
    Date(int m, int d, int y);  
    void init(const std::string& dateStr); //  Format: "MM/DD/YYYY"
    void printDate() const;
};

#endif



