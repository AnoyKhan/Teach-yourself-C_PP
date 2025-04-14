# include <iostream>
# include <cstdlib>
using namespace std;
// Overload sleep to accept integer or char * argument
void sleep (int n);
void sleep ( char *n);
// Change this value to fit your processor speed .
# define DELAY 100000
int main ()
{
    cout << ".";
    sleep (3);
    cout << ".";
    sleep ("2");
    cout << ".";
    return 0;
}
// Sleep () with integer argument .
void sleep (int n)
{
    long i;
    for ( ; n; n--)
        for (i=0; i< DELAY ; i++);
}
// Sleep () with char * argument .
void sleep ( char *n)
{
    long i;
    int j;
    j = atoi (n);
    for ( ; j; j--)
        for (i=0; i< DELAY ; i++);
}