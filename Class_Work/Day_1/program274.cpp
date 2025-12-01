//Generic programming

#include<iostream>
using namespace std;

template <class T>
int CountNumber(T Arr[], int iSize,T No)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == No)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int Brr[]  = {10,20,30,40,50,10};
    int iRet = 0;

    iRet = CountNumber(Brr,6,10);

    cout<<"The count of number is : "<<iRet<<"\n";

    return 0;
}