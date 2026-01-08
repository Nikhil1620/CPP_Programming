#include<iostream>
using namespace std;
template<class T>

T Addtion(T No1, T No2)
{
    T Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    float Value1 = 0.0f;
    float Value2 = 0.0f;
    float Ret = 0.0f;

    cout<<"Enter the first number : \n";
    cin>>Value1;

    cout<<"Enter the Second number : \n";
    cin>>Value2;

    Ret = Addtion(Value1, Value2);

    cout<<"The Addition is : "<<Ret<<"\n";


    return 0;
}