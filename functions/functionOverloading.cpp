#include <iostream>  
using namespace std;  

int myFunction(int a, int c) {
    return a+c;


}


int myFunction(int b) {
   return b++;
}

int main() {  
    int myNum1 = myFunction(1, 8);
    int myNum2 = myFunction(3);
    cout << myNum1 << "\n";
    cout << myNum2 << "\n";
  return 0;
}  
