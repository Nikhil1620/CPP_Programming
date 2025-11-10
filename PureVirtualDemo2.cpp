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

class Derived : public Base    
{
    public:
        int x;
        int Substraction(int a, int b)     //Concrete
        {
            return a-b;
        }

        int Multiplication(int a, int b)    // Concrete
        {
            return a*b;
        }
};

/////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function for the Application
//
/////////////////////////////////////////////////////////////////////////////

int main()
{

    Base*bp = new Derived();    // upcasting

    int iRet = 0;
    
        iRet = bp->Addition(11,10);   //21
        cout<<iRet<<"\n";

        iRet = bp->Substraction(11,10);   //1
        cout<<iRet<<"\n";
        // iRet = bp->Multiplication(11,10);   //Error

    return 0;

}
