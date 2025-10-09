#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;
        static int x;  

        Demo()
        {
            this->i=0;
            this->j=0;
        }

        Demo(int a,int b)
        {
            this->i=a;
            this->j=b;
        }

        void fun()
        {
            cout<<"Inside fun\n";
            cout<<"Value of i is : "<<this-> i<<"\n";
            cout<<"Value of j is : "<<this-> j<<"\n";
            cout<<"Value of x is : "<<x<<"\n";
        }

        static void Gun()
        {
            cout<<"Inside Gun\n";

        }


};

int Demo :: x = 11;

int main()
{
    Demo :: Gun();
    cout<<"value of X is : "<<Demo::x<<"\n";

    Demo obj(10,20);

    obj.fun();

    return 0;
}