#include<iostream>
using namespace  std;

int main()
{
    int length = 0;
    int*Arr = NULL;

    cout<<"Enter the Number of Elements : \n";
    cin>>length;

    Arr = new int(length);
    
    if(Arr == NULL)
    {
        cout<<"Unable to allocate the memory\n";
    }
    else
    {
        cout<<"Memory gets successfully allocated\n";
    }

    //Step 2: use the memory

    //step 3 : Deallocate the memory
    delete []Arr;

    return 0;
}