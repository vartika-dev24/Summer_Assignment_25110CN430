#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter 2 numbers= ";
    cin>>n1>>n2;
     while(n2!=0)
     {
        int num=n2;
        n2=n1%n2;
        n1=num;
     }
     cout<<"GCD of input number= "<<n1<<endl;
     return 0;

}