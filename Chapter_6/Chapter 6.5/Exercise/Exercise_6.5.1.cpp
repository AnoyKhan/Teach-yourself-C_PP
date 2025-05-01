// Overload the - and / relative to coord class .
# include <iostream>
using namespace std;
class coord
{
    int x, y; // coordinate values
public:
    coord () { x=0; y=0; }
    coord (int i, int j) { x=i; y=j; }
    void get_xy (int &i, int &j) { i=x; j=y; }
    friend coord operator -( coord ob1 , coord ob2 );
    friend coord operator /( coord ob1 , coord ob2 );
};
// Overload - relative to coord class using friend .
coord operator -( coord ob1 , coord ob2)
{
    coord temp ;
    temp .x = ob1 .x - ob2 .x;
    temp .y = ob1 .y - ob2 .y;
    return temp ;
}
// Overload / relative to coord class using friend .
coord operator /( coord ob1 , coord ob2)
{
    coord temp ;
    temp .x = ob1 .x / ob2 .x;
    temp .y = ob1 .y / ob2 .y;
    return temp ;
}
int main ()
{
    coord o1 (10 , 10) , o2 (5 , 3) , o3;
    int x, y;
    o3 = o1 - o2;
    o3. get_xy (x, y);
    cout << "(o1 -o2) X: " << x << ", Y: " << y << "\n";
    o3 = o1 / o2;
    o3. get_xy (x, y);
    cout << "(o1/o2) X: " << x << ", Y: " << y << "\n";
    return 0;
}