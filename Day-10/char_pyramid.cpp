#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    for(i=65;i<=69;i++)
    {   
         for(k=69;k>i;k--)
            {
                cout<<" ";
            }
            for(j=65;j<=i;j++)
            {
                cout<<char(j);
            }
            for(j=i-1;j>=65;j--)
            {
                cout<<char(j);
            }
            cout<<endl;
    } 
}