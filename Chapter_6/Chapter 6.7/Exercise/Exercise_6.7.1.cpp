# include <iostream>
# include <cstring>
# include <cstdlib>
using namespace std;
class strtype
{
    char *p;
    int len ;
public :
strtype ( char *s);
    ~ strtype ()
    {cout << " Freeing " << ( unsigned ) p << '\n';
        delete [] p;
    }
    char *get () { return p; }
    strtype & operator =( strtype &ob);
    char & operator []( int i);
};
strtype :: strtype ( char *s)
{
    int l ;
    l = strlen (s)+1;
    p = new char [l];
    if (!p)
    {
        cout << " Allocation error \n";
        exit (1) ;
    }
    len = l;
    strcpy (p, s);
}
// Assign an object .
strtype & strtype :: operator =( strtype &ob)
{
    // see if more memory is needed
    if(len < ob.len ) // need to allocate more memory
    {
        delete [] p;
        p = new char (ob.len);
        if (!p)
        {
            cout << " Allocation error \n";
            exit (1) ;
        }
    }
    len = ob.len ;
    strcpy (p, ob.p);
    return * this ;
}
// Index characters in string .
char & strtype :: operator []( int i)
{
    if(i <0 || i>len -1)
    {
        cout << "\nIndex value of ";
        cout << i << " is out -of - bounds .\n";
        exit (1) ;
    }
    return p[i];
}
int main ()
{
    strtype a(" Hello "), b(" There ");
    cout << a.get () << '\n';
    cout << b.get () << '\n';
    a = b; // now p is not overwritten
    cout << a.get () << '\n';
    cout << b.get () << '\n';
    // access characters using array indexing
    cout << a[0] << a[1] << a[2] << '\n';
    // assign characters using array indexing
    a[0] = 'x';
    a[1] = 'y';
    a[2] = 'z';
    cout << a.get () << '\n';
    return 0;
}