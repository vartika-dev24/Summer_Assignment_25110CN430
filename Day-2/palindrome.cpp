#include<iostream>
using namespace std;
int main()
{
    int n, rev=0;
    cout<<"Enter a number= ";
    cin>>n;
int num=n;
        while(n!=0)
        {
            int m=n%10;
            rev=rev*10+m;
            n=n/10;
        }
            
        if(rev==num)
        cout<<"The input number is a palindrome number"<<endl;
        else 
        cout<<"The input number is not a palindrome number"<<endl;

        return 0;
}