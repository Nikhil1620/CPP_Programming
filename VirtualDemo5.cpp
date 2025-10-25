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

        void fun()
        {
            cout<<"inside fun\n";
        }

        void gun()
        {
            cout<<"inside gun\n";
        }   

        virtual void sun()
        {
            cout<<"inside sun\n";
        }

        virtual void bun()
        {
            cout<<"inside bun\n";
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

        void run()
        {
            cout<<"inside Derived run\n";
        }

        virtual void mun()
        {
            cout<<"inside Derived mun\n";
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

    bp->fun();    //Base fun
    bp->gun();    //Base gun
    bp->sun();    //Derived sun
    //bp->run();    //Error
    //bp->mun();    //Error
    bp->bun();    //Base bun
    

    return 0;

}
