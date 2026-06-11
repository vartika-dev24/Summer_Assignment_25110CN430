#include<iostream>
#include<cmath>
using namespace std;
int prime(int x)
{
    int fact=0;
    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            fact++;
        }
    }
    if(fact==2)
        cout<<"The number is a Prime number";
    else 
    cout<<"The number is not a Prime number";
}
int main()
{
    int x;
    cout<<"Enter a number= ";
    cin>>x;
    prime(x);
}