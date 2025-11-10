/////////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
/////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Base
{   
    public:
        int i,j;
        int Addition(int a, int b)
        {
            return a+b;    //Concrete
        }
        
        virtual int Substraction(int a, int b) = 0;   //abstarct
};

class Derived : public Base    //Error
{
    public:
        int x;
        
};

/////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function for the Application
//
/////////////////////////////////////////////////////////////////////////////

int main()
{

    Base*bp = new Derived();    // upcasting

    
    

    return 0;

}
