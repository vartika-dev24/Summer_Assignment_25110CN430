#include <iostream>
using namespace std;
int main()
{
    int n , sumOfnNumbers=0;
    cout<<"Enter a number= ";
    cin>>n;
    
for(int i=1;i<=n;i++)
{
    sumOfnNumbers=sumOfnNumbers+i;
}
   cout<<"Sum of N natural numbers= "<<sumOfnNumbers<<endl;
   return 0;
}