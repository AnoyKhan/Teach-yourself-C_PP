#include <iostream>
using namespace std;
class area_c1
{
    public :
    double height ;
    double width ;
};
class rectangle : public area_c1
{
    public :
    rectangle ( double h, double w);
    double area ();
};
class isosceles : public area_c1
{
    public :
    isosceles ( double h, double w);
    double area ();
};
rectangle :: rectangle ( double h, double w)
{
    height = h;
    width = w;
}
isosceles :: isosceles ( double h, double w)
{
    height = h;
    width = w;
}
double rectangle :: area ()
{
    return width * height ;
}
double isosceles :: area ()
{
    return 0.5 * width * height ;
}
int main ()
{
    rectangle b(10.0 , 5.0) ;
    isosceles i(4.0 , 6.0) ;
    cout << " Rectangle : " << b. area () << "\n";
    cout << " Triangle : " << i. area () << "\n";
    return 0;
}