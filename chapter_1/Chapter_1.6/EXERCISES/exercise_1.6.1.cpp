#include <iostream>
using namespace std;

void f() {  // Define function before usage
    cout << "This will work now!";
}

int main() {
    f();
    return 0;
}
