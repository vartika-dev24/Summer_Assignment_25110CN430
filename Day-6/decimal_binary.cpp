#include<iostream>
using namespace std;
int main()
{
    int dec_num,bin_num=0,m=1;
    cout<<"Enter a decimal number= ";
    cin>>dec_num;
    cout<<"Decimal form= "<<dec_num<<endl;
    while(dec_num!=0)
    {
        bin_num=bin_num+(m*(dec_num%2));
        dec_num/=2;
        m=m*10;
    }
    
    cout<<"Binary form= "<<bin_num<<endl;
    return 0;
}