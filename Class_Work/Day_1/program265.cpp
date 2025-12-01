//Specific programming

#include<iostream>
using namespace std;

double Maximum(double No1, double No2)
{
    if(No1 > No2)
    {
        return No1;
    }
    else
    {
        return No2;
    }
}

int main()
{
    double dValue1 = 10;
    double dValue2 = 11;
    double dRet = 0;

    dRet = Maximum(dValue1,dValue2);

    cout<<dRet;

    return 0;
}