//Generic programming

#include<iostream>
using namespace std;

template <class T>
T Add(T iNo1, T iNo2)
{
    T iAns;
    iAns = iNo1 + iNo2;
    return iAns;
}

int main()
{
    int iValue1 = 10;
    int iValue2 = 11;
    int iRet = 0;

    iRet = Add(iValue1,iValue2);

    cout<<iRet;

    return 0;
}