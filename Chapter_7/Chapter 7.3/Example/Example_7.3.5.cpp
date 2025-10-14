/*
It is not necessary for the derived class’ constructor to actually use an argument in order
to pass one to the base class. If the derived class does not need an argument, it ignores
the argument and simply passes it along. For example, in this fragment, parameter n is
not used by derived(). Instead, it is simply passed to base():
 */
class base
{
    int i;
public :
base (int n)
{
    cout << " Constructing base class \n";
    i = n;
}
    ~ base () { cout << " Destructing base class \n"; }
    void showi () { cout << i << ’\n’; }
};
class derived : public base
{
    int j;
public :
derived (int n) : base (n) // pass arg to base class .
{
    cout << " Constructing derived class \n";
    j = 0;
}
    ~ derived () { cout << " Destructing derived class \n"; }
    void showj () { cout << j << '\n'; }
};