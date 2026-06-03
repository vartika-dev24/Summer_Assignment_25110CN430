#include <iostream>
using namespace std;
int main()
{
    int n,fact=0;
    cout<<"Enter a number= ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        fact++;
    }
    if(fact==2)         //checking if the number has two factors i.e. 1 and the number itself
    cout<<"prime"<<endl;
    else 
    cout<<"not"<<endl;
    return 0;
}