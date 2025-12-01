//Specific programming

#include<iostream>
using namespace std;

int Add(int iNo1, int iNo2)
{
    int iAns;
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