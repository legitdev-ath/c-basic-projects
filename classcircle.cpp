#include<iostream>
using namespace std;
    
    class Circle
    {   private: float x,y,radius;
        public:
        Circle(){
            float x=0.0;
            float y=0.0;
            float radius=0.0;
        }
        void getData(){
            cout<<"Enter the value of X co-ordinate : ";
            cin>>x;
            cout<<"Enter the value of Y co-ordinate : ";
            cin>>y;
            cout<<"Enter the value of Radius : ";
            cin>>radius;
            }
        void print(){
            cout<<"X co-ordinate : "<<x<<endl;
            cout<<"Y co-ordinate : "<<y<<endl;
            cout<<"Radius of circle : "<<radius<<endl;
            }
        void Area(){
            cout<<"The Area of Circle is : "<<(3.142*radius*radius)<<" sq.units"<<endl;
        }
        void Circumference(){
            cout<<"The Circumference of Circle is : "<<(3.142*2*radius)<<" units"<<endl;
        }
        
    };
    int main(){
        Circle Obj1;
        Obj1.getData();
        Obj1.print();
        Obj1.Area();
        Obj1.Circumference();
        return 0;
    }
    