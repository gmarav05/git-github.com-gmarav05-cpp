#include <iostream>  
#include <string>
using namespace std;  

struct Car {
    string brand;
    int year;
};

void myFunction(Car &c) {
    c.year++;
}

int main() {  
    Car myCar = {"Toyota", 1989};  
    myFunction(myCar);
    cout << myCar.brand << "\n";
    cout << myCar.year << "\n";
  return 0;
}  
