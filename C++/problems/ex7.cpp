#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    Student s1;

    s1.rollNo = 101;
    s1.name = "PradeepDhass";
    s1.marks = 89.5;

    cout << "Roll no : " << s1.rollNo << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}