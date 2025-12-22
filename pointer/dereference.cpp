#include <iostream>
using namespace std;

int main() {
    string food = "Rice and Dal";

    string* ptr = &food;

    cout << food << "\n";
    cout << ptr << "\n";
    cout << *ptr << "\n";
    return 0;
}

// *ptr is the dereference which store the address of food variable.