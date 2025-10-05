#ifndef CLASSROOM_H
#define CLASSROOM_H

#include <iostream>
using namespace std;

class Classroom {
private:
    int roomNumber;
    int capacity;

public:
    Classroom(int num=0, int cap=0) : roomNumber(num), capacity(cap) {}

    void displayInfo() {
        cout << "Room Number: " << roomNumber << endl;
        cout << "Capacity: " << capacity << endl;
    }
};

#endif
