#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname, int age) {
  cout << fname << " is " << age << " years old. \n";
}

int main() {
  myFunction("Alice", 13);
  myFunction("Bob", 14);
  return 0;
}
