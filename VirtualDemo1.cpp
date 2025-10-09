#include<iostream>
using namespace std;

class Base
{   
    public:
        int i,j;

        void fun()
        {
            cout<<"inside fun";
        }

        void gun()
        {
            cout<<"inside gun";
        }   

        virtual void sun()
        {
            cout<<"inside sun";
        }

        virtual void bun()
        {
            cout<<"inside bun";
        }
};

class Derived : public Base
{
    public:
        int x;
        void gun()
        {
            cout<<"inside Derived gun\n";
        }

        void sun()
        {
            cout<<"inside Derived sun\n";
        }

        virtual void run()
        {
            cout<<"inside Derived run\n";
        }

        virtual void mun()
        {
            cout<<"inside Derived mun\n";
        }

};

int main()
{
    Base*bp1 = new Base();    //No Casting

    Derived*dp1 = new Derived();  // No Casting

    Base*bp2 = new Derived();    // upcasting

    Derived*dp2 = new Base();    // Down Casting
    
    return 0;
}