# include <iostream>
# include <cstring>
# include <cstdlib>
using namespace std;
struct strtype
{
    strtype ( char *ptr );
    ~ strtype ();
    void show ();
    private :
    char *p;
    int len ;
};
strype :: strype ( char *ptr )
{
    len = strlen (ptr);
    p = ( char *) malloc (len +1);
    if (!p)
    {
        cout << " Allocation error \n";
        exit (1) ;
    }
    strcpy (p, ptr);
}
strtype ::~ strtype ()
{
    cout << " Freeing p\n";
    free (p);
}
void strtype :: show ()
{
    cout << p << " - length : " << len ;
    cout << "\n";
}
int main()
{
    strtype s1(" This is a test ."), s2("I like C++");
    s1. show ();
    s2. show ();
    return 0;
}
int main()
{
    union
    {
        unsigned char bytes [8];
        double value ;
    };
    int i;
    value = 859345.324;
    // display the bytes within a double
    for (i=0; i <8; i++)
        cout << (int ) bytes [i] << " ";
    return 0;
}