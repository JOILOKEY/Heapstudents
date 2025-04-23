#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

class Address {
private:
    std::string street;
    std::string city;
    std::string state;
    std::string zip;

public:
    Address(); 
    void init(const std::string& st, const std::string& c, const std::string& s, const std::string& z);
    void printAddress() const;
};

#endif

