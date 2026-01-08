#include<iostream>
using namespace std;

template <class T>

class Arithematic
{
    public:
        T No1;
        T No2;
    
        Arithematic(T A, T B)
        {
            No1 = A;
            No2 = B;
        }

        T Addition()
        {
            T Ans = 0;
            Ans = No1 + No2;
            return Ans;
        }

        T Subtraction()
        {
            T Ans = 0;
            Ans = No1 - No2;
            return Ans;
        }
};

int main()
{
    Arithematic <int> iobj(11,10);

    cout<<"Addition is : "<<iobj.Addition()<<"\n";
    cout<<"Subtraction is : "<<iobj.Subtraction()<<"\n";

    Arithematic <double> dobj(11.4564,10.7812);
    
    cout<<"Addition is : "<<dobj.Addition()<<"\n";
    cout<<"Subtraction is : "<<dobj.Subtraction()<<"\n";
    
    return 0;
}