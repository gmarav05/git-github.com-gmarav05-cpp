#include <iostream>
#include <string>
using namespace std;

int main() {
  struct {
    int myNum;
    string myString;
  } myStructure;

  struct {
    int num;
    string myString;
  } myStruct, myStruct1, myStruct2;


  myStructure.myNum = 1;
  myStructure.myString = "Hello World!";

  myStruct.num = 1;
  myStruct.myString = "C++ is the pretty good language.";

  cout << myStructure.myNum << "\n";
  cout << myStructure.myString << "\n";

  cout << myStruct.num << "\n";
  cout << myStruct.myString << "\n";
  return 0;
}
