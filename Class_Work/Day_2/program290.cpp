#include<iostream>
using namespace std;

void Display()
{
    static int iCnt = 0;

    if(iCnt != 4)
    {
        cout<<"JayGanesh...\n";
        iCnt++;
        Display();
    }
    
}

int main()
{
    Display();

    return 0;
}
