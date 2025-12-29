#include <iostream>
#include <functional>
using namespace std;

int main() {
    int x = 10;

        auto message = [&x]() {
          cout << x;
        };

        message();
    

  return 0;
}
