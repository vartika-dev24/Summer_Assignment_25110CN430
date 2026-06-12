#include<iostream>
using namespace std;
int fibonacci(int n)
{   
   int first=0,second=1;
cout<<first<<" "<<second<<" ";              //printing the first two default numbers

    for(int i=3;i<=n;i++)                 //since two terms are printed hence iteration works upto n-2
    {
        int temp=first+second;
        first=second;
        second=temp;
        cout<<second<<" ";
    }
   
}
int main()
{
     int n;
    cout<<"Enter number of terms= ";
    cin>>n;
    fibonacci(n);
}