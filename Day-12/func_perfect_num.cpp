#include <iostream>
#include<cmath>
using namespace std;
int perfect_num(int num)
{
    int sum=0;
    for(int i=1;i<num;i++)
    {
            if(num%i==0)
            {
                sum=sum+i;
            }
    }
    if(sum==num)
    cout<<"The number is a perfect number"<<endl;
    else 
    cout<<"The number is not a perfect number"<<endl;
}
int main()
{   
    int num;
    cout<<"Enter a number= ";
    cin>>num;
    perfect_num(num);
    return 0;
}