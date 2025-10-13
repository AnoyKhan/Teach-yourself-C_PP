// This function can thrown NO exceptions !
void Xhandler (int test ) throw ()
{
    /*
    The following statements no longer work . Instead ,
    they will cause an abnormal program termination .
    */
    if( test ==0)
        throw test ;
    if( test ==0)
        throw 'a';
    if( test ==2)
        throw 123.23;
}
// Example of rethrowing an exception .
# include <iostream>
using namespace std;
void Xhandler ()
{
    try
    {
        throw " hello "; // throw a const char *
    }
    catch ( const char *) // catch a const char *
    {
        cout << " Caught const char * inside Xhandler \n";
        throw ; // rethrow const char * out of function
    }
}
int main ()
{
    cout << " start \n";
    try
    {
        Xhandler ();
    }
    catch ( const char *)
    {
        cout << " Caught const char * inside main \n";
    }
    cout << "end ";
    return 0;
}