#include <iostream>
using namespace std;

int main() {
    string food = "Rice and Dal";
    string &meal = food;
    cout << &meal << "\n";
    cout << food << "\n";
    return 0;
}

// &meal gives me the memory address of that variable on the computer memory stored.