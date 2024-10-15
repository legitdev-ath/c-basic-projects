#include<iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter the value of the Radius : ";
    cin >> r;

    float pi;
    pi = 3.14;

    float a;
    a = pi * r * r;
    cout << "The area of the circle is : " << a << " cm2.\n";
    return 0;
}
