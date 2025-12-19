#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<string> cars = {"Tata", "BMW", "Tesla"};
  
  cars.push_back("Toyota");
  
  for (string car : cars) {
    cout << car << "\n";
  }

   cout << sizeof(cars) / sizeof(cars[0]) << "\n";
  return 0;
}