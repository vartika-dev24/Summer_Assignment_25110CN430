#include<iostream>
using namespace std;
int main ()
{
    int num,fact=1,m,a,sum=0;
    cout<<"Enter a number= ";
    cin>>num;
    a=num;
    while(a!=0)
    {
        m=a%10;
        if(m==0)
        fact=1;
        for(int i=1;i<=m;i++)
        {
            fact=fact*i;
        }
            sum=sum+fact;
            a=a/10;
            fact=1;
    }
    if(sum==num)
    {
        cout<<"The number is a strong number"<<endl;

    }
    else 
    {
        cout<<"The number is not a strong number"<<endl;
    }
    return 0;

    }