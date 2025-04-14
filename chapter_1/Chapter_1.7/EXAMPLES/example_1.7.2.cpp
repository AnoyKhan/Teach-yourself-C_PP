# include <iostream>
using namespace std;
void date ( char * date ); // date as a string
void date (int month , int day , int year ); // date as numbers
int main ()
{
    date (" 8/23/99 ");
    date (8 , 23 , 99) ;
    return 0;
}
// Date as string .
void date ( char * date )
{
    cout << " Date : " << date << "\n";
}
// Date as integers .
void date (int month , int day , int year )
{
    cout << " Date : " << month << "/";
    cout << day << "/" << year << "\n";
}