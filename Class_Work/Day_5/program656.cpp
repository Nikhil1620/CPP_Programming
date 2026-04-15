// Input 4
// Output : 4   3   2   1

// Import Packeges

#include<iostream>
using namespace std;

void Display(int iNo)
{
    if(iNo >= 1)
    {
        cout<<iNo<<"\n";
        iNo--;
        Display(iNo);
    }
}

int main()
{
    Display(3);

    return 0;
}
