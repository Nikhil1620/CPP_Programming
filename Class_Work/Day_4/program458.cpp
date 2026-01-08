#include<iostream>
using namespace std;

double Addtion(double No1, double No2)
{
    double Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    double Value1 = 0;
    double Value2 = 0;
    double Ret = 0;

    cout<<"Enter the first number : \n";
    cin>>Value1;

    cout<<"Enter the Second number : \n";
    cin>>Value2;

    Ret = Addtion(Value1, Value2);

    cout<<"The Addition is : "<<Ret<<"\n";


    return 0;
}