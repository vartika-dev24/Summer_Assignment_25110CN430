#include<iostream>
#include<cmath>
using namespace std;

int armstrong(int x)
{ int power=0,a,b,sum=0;
    a=x;
    b=x;
    while(b!=0)
    {
        b=b/10;
        power++;
    }
    while(a!=0)
{
    int m=a%10;
    sum=sum+round(pow(m,power));
    a=a/10;
}
if(sum==x)
{
    return 1;
}
else 
return 0;

}
int main()
{
     int n1,n2;
     cout<<"Enter first and last number of range= ";
     cin>>n1>>n2;
        for(int i=n1;i<=n2;i++)
        {
            if(armstrong(i))
            {
                    cout<<i<<" ";
            }
        }
        
}