// This fragment contains an error
#include<iostream>
using namespace std;
int main ()
{
    myclass ob1 , ob2 ;
    ob1 .a = 10; // ERROR ! cannot access private member
    ob2 .a = 99; // by non - member functions .
    cout << ob1 . get_a () << "\n";
    cout << ob2 . get_a () << "\n";
    return 0;
}