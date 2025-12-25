#include <iostream>
#include <string>
using namespace std;

void myFunction(string country = "Norway") {
  cout << country << "\n";
}

int main() {
  myFunction("Japan");
  myFunction("India");
  myFunction();
  return 0;
}
