#include <iostream>
using namespace std;

int main() {
    string food = "Rice and Dal";
    string &meal = food;
    meal = "Palak";
    cout << meal << "\n";
    cout << food << "\n";
    return 0;
}