#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
using namespace std;

class Course {
private:
    string courseCode;
    string courseName;
    string teacherName;

public:
    Course(string code="", string name="", string teacher="")
        : courseCode(code), courseName(name), teacherName(teacher) {}

    void displayInfo() {
        cout << "Course Code: " << courseCode << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Teacher: " << teacherName << endl;
    }
};

#endif
