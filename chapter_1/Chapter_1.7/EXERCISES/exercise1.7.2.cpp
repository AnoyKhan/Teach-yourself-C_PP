#include <iostream>
#include <cstdlib>  // for atof, atoi, atol
using namespace std;

template <typename T>
T convert(const char *s);

template <>
double convert<double>(const char *s) {
    return atof(s);
}

template <>
int convert<int>(const char *s) {
    return atoi(s);
}

template <>
long convert<long>(const char *s) {
    return atol(s);
}

int main() {
    cout << convert<int>("123") << endl;
    cout << convert<double>("123.45") << endl;
    cout << convert<long>("1234567890") << endl;
    return 0;
}
