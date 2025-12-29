#include <iostream>
#include <functional>
using namespace std;

int main() {
    int count = 10;

    for (int i = 0; i < count; i++)    {

        auto message = []() {
          cout << "Hello, C++\n";
        };

        message();
    }
    

  return 0;
}
