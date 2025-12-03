#include<iostream>
using namespace std;
void Display()
{
    auto iCnt = 0;   

    cout<<"JayGanesh..."<<iCnt<<"\n"; 
    iCnt++;
    Display();
    
}

int main()
{
    Display();

    return 0;
}
