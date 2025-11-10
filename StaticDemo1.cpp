/////////////////////////////////////////////////////////////////////////////
//
// Required Header Files
//
/////////////////////////////////////////////////////////////////////////////

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
        }

        static void Gun()
        {
            cout<<"Inside Gun\n";

        }


};

/////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function for the Application
//
/////////////////////////////////////////////////////////////////////////////

int Demo :: x = 11;

int main()
{
    Demo :: Gun();
    cout<<"value of X is : "<<Demo::x<<"\n";

    return 0;

}
