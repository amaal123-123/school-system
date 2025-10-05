#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"

class Student : public Person {
private:
    int studentID;
    string gradeLevel;
    float GPA;

public:
    Student(string n="", int a=0, string g="", string addr="", string phone="", string mail="",
            int id=0, string gradeLvl="", float gpa=0.0)
        : Person(n, a, g, addr, phone, mail), studentID(id), gradeLevel(gradeLvl), GPA(gpa) {}

    void displayInfo() override {
        Person::displayInfo();
        cout << "Student ID: " << studentID << endl;
        cout << "Grade Level: " << gradeLevel << endl;
        cout << "GPA: " << GPA << endl;
    }
};

#endif
