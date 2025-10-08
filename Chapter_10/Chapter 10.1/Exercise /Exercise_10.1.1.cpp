#include <iostream>
using namespace std;

class Base {
    int x;
public:
    void setX(int i) { x = i; }
    int getX() { return x; }
};

class Derived : public Base {
    int y;
public:
    void setY(int i) { y = i; }
    int getY() { return y; }
};

int main() {
    Base* p;
    Base bObj;
    Derived dObj;

    p = &bObj;
    p->setX(10);
    cout << "Base object x: " << p->getX() << '\n';

    p = &dObj;
    p->setX(99);
    dObj.setY(88);
    cout << "Derived object x: " << p->getX() << '\n';
    cout << "Derived object y: " << dObj.getY() << '\n';

    return 0;
}
int main() {
    Derived*
    Base obj;

    return 0;
}
