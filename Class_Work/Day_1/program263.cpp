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

    float fValue1 = 10.0f;
    float fValue2 = 11.0f;
    float fRet = 0.0f;

    double dValue1 = 10.0;
    double dValue2 = 11.0;
    double dRet = 0;

    iRet = Add(iValue1,iValue2);
    cout<<"Addition of int : "<<iRet<<"\n";

    fRet = Add(fValue1,fValue2);
    cout<<"Addition of float : "<<fRet<<"\n";

    dRet = Add(dValue1,dValue2);
    cout<<"Addition of double : "<<dRet<<"\n";

    return 0;
}