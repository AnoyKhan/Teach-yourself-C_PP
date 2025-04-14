# include <iostream>
using namespace std;
class samp
{
    int i, j;
    public :
    // inline constructor
    samp (int a, int b) { i = a; j = b; }
    int divisible () { return !(i%j); }
};