#include <iostream>
#include <cmath>

using namespace std;

// Overloaded function to compute square root for int
double sroot(int num) {
    return sqrt(num);
}

// Overloaded function to compute square root for long
double sroot(long num) {
    return sqrt(num);
}

// Overloaded function to compute square root for double
double sroot(double num) {
    return sqrt(num);
}

int main() {
    int intNum = 16;
    long longNum = 2500L;
    double doubleNum = 20.25;

    cout << "Square root of " << intNum << " is " << sroot(intNum) << endl;
    cout << "Square root of " << longNum << " is " << sroot(longNum) << endl;
    cout << "Square root of " << doubleNum << " is " << sroot(doubleNum) << endl;

    return 0;
}
