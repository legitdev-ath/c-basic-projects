#include <iostream>
using namespace std;

// function to calculate gcd of two numbers
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

// function to calculate lcm two numbers
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm(num1, num2) << endl;
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
    return 0;
} //just doing timepass 