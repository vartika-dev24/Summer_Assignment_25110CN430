#include<iostream>
using namespace std;
int sumOfDigits(int n,int sum=0)
{    
    if(n==0)
    return sum;
    sum=sum+(n%10);
    return sumOfDigits(n/10,sum);

}
int main()
{
    int n;
    cout<<"Enter a number= ";
    cin>>n;
    cout<<"Sum of digits= "<<sumOfDigits(n)<<endl;
    return 0;
}