#include <iostream>;
#include <string>;

class Abonent
{
public:
    Abonent(const string& name, const string& own, const string& number, const string& career) : firm_name(name), owner(own), phone_number(number), career(career) {};

    string GetFirmName() const {
        return firm_name.c_str();
    }

    string GetOwnerName() const {
        return owner.c_str();
    }

    string GetPhone() const {
        return phone_number.c_str();
    }

    string GetCareer() const {
        return career.c_str();
    }
private:
    string firm_name;
    string owner;
    string phone_number;
    string career;
};