#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

class Address {
private:
    std::string street;
    std::string apt;
    std::string city;
    std::string state;
    int zip;

public:
    Address();
    Address(const std::string& street, const std::string& apt, const std::string& city, const std::string& state, int zip);

    void init(const std::string& street, const std::string& city, const std::string& state, int zip);

    void printAddress() const;
};

#endif

