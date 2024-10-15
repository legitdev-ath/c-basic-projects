#include <iostream>
using namespace std;

class Person
{
public:
    virtual void print()
    {
        cout << "The name of the person is Atharv." << endl;
    }
};

class Student : public Person
{
public:
    void print()
    {
        cout << "The name of the student is Vedant." << endl;
    }
};

int main()
{
    Person *p;  // declare a ptr to a Person object
    Person P1;  // person obj
    p = &P1;    // addr of P1 to ptr p
    p->print(); // call print method

    Student S1; // obj of student
    p = &S1;    // addr of S1 to ptr p
    p->print();
    return 0;
}