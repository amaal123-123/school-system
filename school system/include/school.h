
#ifndef SCHOOL_H
#define SCHOOL_H

#include <iostream>
#include <vector>
#include "student.h"
#include "teacher.h"
#include "staff.h"
#include "course.h"
#include "classroom.h"
#include "exam.h"
using namespace std;

class School {
private:
    string schoolName;
    string address;
    string principalName;
    vector<Student> students;
    vector<Teacher> teachers;
    vector<Staff> staffMembers;
    vector<Course> courses;
    vector<Classroom> classrooms;
    vector<Exam> exams;

public:
    School(string name="", string addr="", string principal="")
        : schoolName(name), address(addr), principalName(principal) {}

    void addStudent(const Student& s) { students.push_back(s); }
    void addTeacher(const Teacher& t) { teachers.push_back(t); }
    void addStaff(const Staff& st) { staffMembers.push_back(st); }
    void addCourse(const Course& c) { courses.push_back(c); }
    void addClassroom(const Classroom& cr) { classrooms.push_back(cr); }
    void addExam(const Exam& e) { exams.push_back(e); }

    void displayInfo() {
        cout << "School: " << schoolName << endl;
        cout << "Address: " << address << endl;
        cout << "Principal: " << principalName << endl;
        cout << "\n--- Students ---" << endl;
        for (auto &s : students) s.displayInfo();
        cout << "\n--- Teachers ---" << endl;
        for (auto &t : teachers) t.displayInfo();
        cout << "\n--- Staff ---" << endl;
        for (auto &st : staffMembers) st.displayInfo();
        cout << "\n--- Courses ---" << endl;
        for (auto &c : courses) c.displayInfo();
        cout << "\n--- Classrooms ---" << endl;
        for (auto &cr : classrooms) cr.displayInfo();
        cout << "\n--- Exams ---" << endl;
        for (auto &e : exams) e.displayInfo();
    }
};

#endif
