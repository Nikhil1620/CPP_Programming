//Generic programming

#include<iostream>
using namespace std;

template <class T>
T Maximum(T Arr[], int iSize)
{
    int iCnt = 0;
    T iMax = 0;

    iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
}


int main()
{
    int Brr[]  = {10,20,30,40,50};
    int iRet = 0;

    iRet = Maximum(Brr,5);

    cout<<"Maximum number is : "<<iRet<<"\n";

    return 0;
}