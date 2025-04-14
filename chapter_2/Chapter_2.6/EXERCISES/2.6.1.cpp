# include <iostream>
using namespace std;
// Overload abs () three ways :
// abs () for ints
inline int abs(int n)
{
    cout << "In integer abs ()\n";
    return n <0 ? -n : n;
}
// abs () for longs
inline long abs(long n)
{
    cout << "In long abs ()\n";
    return n <0 ? -n : n;
}
// abs () for doubles
inline double abs(double n)
{
    cout << "In double abs ()\n";
    return n <0 ? -n : n;
}
int main ()
{
    cout << " Absolute value of -10: " << abs( -10) << "\n";
    cout << " Absolute value of -10L: " << abs(-10L) << "\n";
    cout << " Absolute value of -10.01: " << abs(-10.01) << "\n";
    return 0;
}