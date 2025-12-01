//Generic programming

#include<iostream>
using namespace std;

template <class T>
T Maximum(T No1, T No2, T No3)
{
    if((No1 > No2) && (No1 > No3))
    {
        return No1;
    }
    else if((No2 > No1) && (No2 > No3))
    {
        return No2;
    }
    else
    {
        return No3;

    }

}

int main()
{
    int iValue1 = 10;
    int iValue2 = 11;
    int iValue3 = 51;
    int iRet = 0;

    float fValue1 = 10.0f;
    float fValue2 = 11.0f;
    float fValue3 = 51.0f;
    float fRet = 0.0f;

    double dValue1 = 10.0;
    double dValue2 = 11.0;
    double dValue3 = 51.0;
    double dRet = 0;

    iRet = Maximum(iValue1,iValue2,iValue3);
    cout<<"Maximum of int : "<<iRet<<"\n";

    fRet = Maximum(fValue1,fValue2,fValue3);
    cout<<"Maximum of float : "<<fRet<<"\n";

    dRet = Maximum(dValue1,dValue2,dValue3);
    cout<<"Maximum of double : "<<dRet<<"\n";

    return 0;
}