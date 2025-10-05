
#include "school.h"
using namespace std;

int main() {
    School mySchool("Future School", "Cairo", "Dr. Ahmed");

    Student s1("Ali", 16, "Male", "Cairo", "01012345678", "ali@mail.com", 101, "10th", 3.9);
    Teacher t1("Mona", 35, "Female", "Giza", "01198765432", "mona@mail.com", 201, "Math", 7500);
    Staff st1("Omar", 40, "Male", "Cairo", "0101111111", "omar@mail.com", 301, "Clerk", 4000);
    Course c1("MTH101", "Mathematics", "Mona");
    Classroom cr1(12, 30);
    Exam e1("Midterm", "MTH101", "2025-10-10");

    mySchool.addStudent(s1);
    mySchool.addTeacher(t1);
    mySchool.addStaff(st1);
    mySchool.addCourse(c1);
    mySchool.addClassroom(cr1);
    mySchool.addExam(e1);

    mySchool.displayInfo();

    return 0;
}
