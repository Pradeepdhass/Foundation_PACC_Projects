#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> numbers;

    numbers.push_back("10");
    numbers.push_back("20");    
    numbers.push_back("30");

    for (auto x : numbers) {
        cout << x << endl;
    }

    return 0;
}