#include <iostream>
#include <string>
using namespace std;

int main() {
  string cars[5] = {"Tesla", "Tata" ,"Toyota", "BMW", "Ferrari"};
    for (string car: cars) {
        cout << car << "\n";
    }
  return 0;
}
