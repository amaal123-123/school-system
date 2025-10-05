
#ifndef EXAM_H
#define EXAM_H

#include <iostream>
#include <string>
using namespace std;

class Exam {
private:
    string examName;
    string courseCode;
    string examDate;

public:
    Exam(string name="", string code="", string date="")
        : examName(name), courseCode(code), examDate(date) {}

    void displayInfo() {
        cout << "Exam Name: " << examName << endl;
        cout << "Course Code: " << courseCode << endl;
        cout << "Exam Date: " << examDate << endl;
    }
};

#endif
