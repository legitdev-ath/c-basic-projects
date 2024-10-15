#include <iostream>
#include <string>
using namespace std;

// func to reverse a string
string reverse(string &x)
{
    int n = x.length(); // get string length

    // loop for string reversal
    for (int i = 0; i < n / 2; i++)
    {
        char temp = x[i];
        x[i] = x[n - 1 - i];
        x[n - 1 - i] = temp;
    }
    return x;
}

int main()
{
    string abc;

    cout << "Enter a string : ";
    getline(cin, abc);                              // read input string
    reverse(abc);                                   // call rev func
    cout << "Reversed string is : " << abc << endl; // disp rev str
    return 0;
}