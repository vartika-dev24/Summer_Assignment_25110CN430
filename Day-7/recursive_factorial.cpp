#include<iostream>
using namespace std;
int factorial(int num);         // function definition 

int main()
{       int num;
    cout<<"Enter a number= ";
    cin>>num;
    cout<<factorial(num)<<endl;
    return 0;
}
int factorial(int n)
{
    if(n<=1)
    return 1;
    else 
    return n*factorial(n-1);        //base condition 
}