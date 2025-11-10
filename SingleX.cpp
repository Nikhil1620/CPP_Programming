/////////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
/////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Base   //8
{
    public:
        int i,j;

        void fun()
        {
            cout<<"Inside base fun\n";
        }
};

class Derived : public Base    //12
{
    public:
        int x;

        void gun()
        {
            cout<<"Inside base gun\n";
        }
};

/////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function for the Application
//
/////////////////////////////////////////////////////////////////////////////

int main()
{
    Base bobj;
    Derived dobj;

    bobj.fun();

    dobj.fun();
    dobj.gun();

    return 0;

}

