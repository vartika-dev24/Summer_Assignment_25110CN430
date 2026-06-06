#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int bin_num,count=0,c,dec_num=0,m;
    cout<<"Enter a binary number= ";
    cin>>bin_num;
    c=bin_num;
    cout<<"Binary form= "<<bin_num<<endl;
    while(bin_num!=0)
{       m=bin_num%10;
        dec_num=dec_num+(m*pow(2,count));
        count++;
        bin_num/=10;

}
         cout<<"Decimal form= "<<dec_num<<endl;
                return 0;
}