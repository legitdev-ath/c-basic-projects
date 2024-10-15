#include<iostream>
    using namespace std;

    void Swap(int*a, int*b)
    {
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;
    }

    int main()
    {
        int x,y;
        cout<<"Enter two numbers to swap : ";
        cin>>x>>y;
        cout<<"Before swap : "<<x<<" "<<y<<endl;
        Swap(&x,&y);
        cout<<"After swap : "<<x<<" "<<y;
        return 0;
    }