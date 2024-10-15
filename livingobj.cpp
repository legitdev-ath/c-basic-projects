#include<iostream>
using namespace std;

    class Ratio
    {
        public:

        void print(){
            cout<<"THE OBJECT IS ALIVE\n"
                <<endl;
        }

        //constructor of ratio class
        Ratio()
        {
            cout<<"\nOBJECT IS BORN\n"
                <<endl;
        }

        //destructor of ratio class
        ~Ratio()
        {
            cout<<"OBJECT IS DEAD\n"
                <<endl;
        }
    };

int main()
{
    Ratio Obj; // object of ratio class
    Obj.print();
    return 0;
}