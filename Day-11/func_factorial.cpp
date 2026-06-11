#include<iostream>
using namespace std;
int factorial(int x)
{
    int fact=1;
    for(int i=1;i<=x;i++)
    {
        fact*=i;
    }
    cout<<"Factorial of the given number= "<<fact;
}
int main()
{
    int x;
    cout<<"Enter a number= ";
    cin>>x;
    factorial(x);
    return 0;
}