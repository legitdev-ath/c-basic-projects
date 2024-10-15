#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int arr[10]; // Declare array of size 10
    cout << "Enter 10 numbers for an array : " << endl;
    for (i = 0; i < 10; i++)
    {
        cin >> arr[i]; // input the array
    }
    cout << "The array is : " << endl;
    for (i = 0; i < 10; i++)
    {
        cout << arr[i]; // output the array
    }
    cout << endl;
    // Bubblesort...
    for (i = 0; i < 10 - 1; i++)
    {
        for (j = 0; j < 10 - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            { // ascending(>),descending(<)for j and j+1
                // swap the elements if in wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "The sorted array is : " << endl;
    for (i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}