#include <iostream>
#include <string>
using namespace std;

class MyClass{
    public:
        int myNum;
};


int main() {
    MyClass myNewObj;

    myNewObj.myNum = 20;
    cout << myNewObj.myNum << "\n";

  return 0;
}
