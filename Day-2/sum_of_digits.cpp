#include<iostream>
using namespace std;
int main()
{
    int n, sum=0;

        cout<<"Enter a number= ";
        cin>>n;
        while(n!=0)
    {
        int m=n%10;
        sum=sum+m;
        n=n/10;
    } 
        cout<<"The sum of digits= "<<sum<<endl;
        return 0;
}