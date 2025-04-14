/*
Write a program that converts feet to inches. Prompt the user for feet and display the
equivalent number of inches. Have your program repeat this process until the user enters
0 for the number of feet.
 */

#include <iostream>
using namespace std;
int main() {
    int feet,inches,InchesPerFoot= 12;
    while (true) {
        cout << "Enter the number of feet (0 to exit): ";
        cin >> feet;
        if (feet == 0) {
            cout << "Exiting program..." << endl;
            break;
        }
        inches = feet * InchesPerFoot;
        cout << feet << " feet is equal to " << inches << " inches." <<endl;
    }
    return 0;
}
