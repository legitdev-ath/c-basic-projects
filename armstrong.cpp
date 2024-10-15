#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,num;
    cout<<"Enter a three digit number =";
    cin>>num;
    a=num%10;
    b=num/10;
    c=b %10;
    d=b/10;
    e=d%10;
    int x=(a*a*a)+(c*c*c)+(e*e*e);
    if (x==num)
    cout<<"Yes, it is an armstrong number!!";
    else 
    cout <<"No, it is not an armstrong number!!";
    return 0;
}