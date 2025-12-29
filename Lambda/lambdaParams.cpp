#include <iostream>
#include <functional>
using namespace std;

void myFunction(function<void()> func) {
  func();
  func();
}

int main() {
  auto message = []() {
    cout << "Hello, C++\n";
  };

  myFunction(message);
  return 0;
}
