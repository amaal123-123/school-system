#ifndef TEACHER_H
#define TEACHER_H

#include "person.h"

class Teacher : public Person {
private:
    int teacherID;
    string subjectSpecialization;
    float salary;

public:
    Teacher(string n="", int a=0, string g="", string addr="", string phone="", string mail="",
            int id=0, string sub="", float sal=0.0)
        : Person(n, a, g, addr, phone, mail), teacherID(id), subjectSpecialization(sub), salary(sal) {}

    void displayInfo() override {
        Person::displayInfo();
        cout << "Teacher ID: " << teacherID << endl;
        cout << "Subject: " << subjectSpecialization << endl;
        cout << "Salary: " << salary << endl;
    }
};

#endif
