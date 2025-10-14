class base
{
    int x;
public :
void setx (int n) { x = n; }
    void showx () { cout << x << '\n'; }
};
// Inherit as public - this has an error !
class derived : public base
{
    int y;
public :
void sety (int n) { y = n; }
    /*
    Cannot access private member of base class .
    x is a private member of base and not available
    within derived .
    */
    void show_sum () { cout << x+y << '\n'; } // Error !
    void showy () { cout << y << '\n'; }
};