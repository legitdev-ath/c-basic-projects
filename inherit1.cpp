#include <iostream>
using namespace std;

class Car
{

public:
    int a = 1;

    virtual void print1()
    {
        cout << a << endl;
    }
};
class BMW : public Car
{
public:
    int b = 2;

    void print2()
    {
        cout << b << endl;
    }
};
class PORSCHE : public Car, public BMW
{
public:
    int a = 3;
    void print3()
    {
        cout << a << endl;
    }
};

int main()
{
    Car obj1;
    obj1.print1();

    BMW obj2;
    obj2.print1();
    obj2.print2();

    PORSCHE obj3;

    obj3.print2();
    obj3.print3();

    return 0;
}