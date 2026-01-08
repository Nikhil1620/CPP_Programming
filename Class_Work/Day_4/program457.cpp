#include<iostream>
using namespace std;

int Addtion(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    int Value1 = 0;
    int Value2 = 0;
    int Ret = 0;

    cout<<"Enter the first number : \n";
    cin>>Value1;

    cout<<"Enter the Second number : \n";
    cin>>Value2;

    Ret = Addtion(Value1, Value2);

    cout<<"The Addition is : "<<Ret<<"\n";


    return 0;
}