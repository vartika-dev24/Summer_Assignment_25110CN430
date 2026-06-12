#include<iostream>
using namespace std;
int palindrome(int a)
{
    int n,m,rev=0;
    n=a;
    while(n!=0)
    {
        m=n%10;
        rev=rev*10+m;
        n/=10;
    }
    if(rev==a)
    cout<<"The number is Palindrome";
    else
    cout<<"The number is not Palindrome";
}
int main()
{
    int num;
    cout<<"Enter a number= ";
    cin>>num;
    palindrome(num);
    return 0;
}