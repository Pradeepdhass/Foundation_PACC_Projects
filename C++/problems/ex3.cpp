#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter the marks: ";
    cin >> num;

    if (num >=90 )
        cout << "Grade A";
    else if  (num >=75)
        cout <<" Grade B";
    else if (num >=50)
        cout << "Grade C";
    else
        cout<<"Fail";
    return 0;
}
