#include <iostream>
using namespace std;

int main() {
    int myAge = 15;
    int votingAge = 18;

    if (myAge >= votingAge) {
        cout << myAge << "Eligible";
    } else {
        cout << "Not eligible";

    }

    return 0;
}