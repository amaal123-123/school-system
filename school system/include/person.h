#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
    string gender;
    string address;
    string phoneNumber;
    string email;

public:
    Person(string n="", int a=0, string g="", string addr="", string phone="", string mail="")
        : name(n), age(a), gender(g), address(addr), phoneNumber(phone), email(mail) {}

    virtual void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Address: " << address << endl;
        cout << "Phone: " << phoneNumber << endl;
        cout << "Email: " << email << endl;
    }
};

#endif
