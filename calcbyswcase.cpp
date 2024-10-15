#include <iostream>
using namespace std;

int main() {
  int num1, num2, result;
  char operation;

  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  cout << "Enter the operation you want to perform (+, -, *, /): ";
  cin >> operation;

  switch (operation) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      result = num1 / num2;
      break;
    default:
      cout << "Invalid operation!" << endl;
      return 1;
  }

  cout << "The result of the operation is: " << result << endl;

  return 0;
}
