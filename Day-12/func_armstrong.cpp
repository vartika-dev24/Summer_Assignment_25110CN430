#include<iostream>
#include<cmath>
using namespace std;
int armstrong(int num)
{  int power=0,sum=0;
     int a= num;
    int b=num;
    while(a!=0)         //for number of digits to be used a power
    {
       a=a/10;
       power++;
    }
    while(b!=0)         //for finding the sum of digits raised to the number of digits
    {
        int m=b%10;
        sum=sum+round(pow(m,power));
        b=b/10;
    }
    if(sum==num)        //to check if number is armstrong number
    
        cout<<"The number is an Armstrong number"<<endl;
     else 
        cout<<"The number is not an Armstrong number"<<endl;
}
    
int main()
{
     int num;
    cout<<"Enter a number= ";
    cin>>num;
    armstrong(num);
    return 0;
}