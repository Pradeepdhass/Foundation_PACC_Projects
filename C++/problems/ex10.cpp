#include <iostream>
using namespace std;
class Person {
private:
    string firstName;
    string lastName;
public:
    void setData(string fn, string ln) {
        firstName = fn;
        lastName = ln;
    }
    void getData() {
        cout << "First Name: " << firstName << endl;
        cout << "Last Name: " << lastName << endl;
        cout << "Full Name: " << firstName << " " << lastName << endl;
    }
};

int main() {
    Person p1;
    string fn, ln;
    cout << "Enter First Name: ";
    cin >> fn;
    cout << "Enter Last Name: ";
    cin >> ln;
    p1.setData(fn, ln);
    p1.getData();
    return 0;
}