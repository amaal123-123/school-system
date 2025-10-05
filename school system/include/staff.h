#ifndef STAFF_H
#define STAFF_H

#include "person.h"

class Staff : public Person {
private:
    int staffID;
    string role;
    float salary;

public:
    Staff(string n="", int a=0, string g="", string addr="", string phone="", string mail="",
          int id=0, string r="", float sal=0.0)
        : Person(n, a, g, addr, phone, mail), staffID(id), role(r), salary(sal) {}

    void displayInfo() override {
        Person::displayInfo();
        cout << "Staff ID: " << staffID << endl;
        cout << "Role: " << role << endl;
        cout << "Salary: " << salary << endl;
    }
};

#endif
