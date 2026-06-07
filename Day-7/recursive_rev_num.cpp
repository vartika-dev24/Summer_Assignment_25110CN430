#include <iostream>
using namespace std;
int reverse(int n, int rev=0)
{   
    if(n==0)
    return rev;
    rev=(rev*10)+(n%10);
    return reverse(n/10, rev);
 
   }
   


int main()
{ 
    int n,m;
    cout<<"Enter number= ";
    cin>>n;
   if(n==0)
   cout<<"Reverse number= 0"<<endl; 
   else
    cout<<"Reverse num= "<<reverse(n)<<endl;
return 0;
}