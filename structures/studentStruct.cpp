#include <iostream>
#include <string>
using namespace std;

struct student {
    string name;
    int age;
    char grade;
};

int main() {

    student myStudent;

    myStudent.name = "Arav";
    myStudent.age = 20;
    myStudent.grade = 'A';

    cout << "Name: " << myStudent.name << "\n";
    cout << "Age: "  << myStudent.age << "\n";
    cout << "Grade: " << myStudent.grade << "\n";



}