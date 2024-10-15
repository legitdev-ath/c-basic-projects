#include <iostream>
using namespace std;

// Function to multiply two integers and return the result
int multiply(int a, int b) {
    return a * b;
}

int main() {
    int x, y;
    cout << "Enter two integers to multiply: ";
    cin >> x >> y;

    // Call the multiply function and print the result
    int result = multiply(x, y);
    cout << "Result: " << result << endl;

    return 0;
}