#include<iostream>
using namespace std;
template<class T>

T Addition(T No1, T No2)
{
    T Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    cout<<"Addition of Characters : "<<Addition('a', 'b')<<"\n";
    cout<<"Addition of Integers : "<<Addition(10, 11)<<"\n";
    cout<<"Addition of Floats : "<<Addition(12.2f, 13.3f)<<"\n";
    cout<<"Addition of double : "<<Addition(34.4567, 13.456)<<"\n";

    return 0;
}