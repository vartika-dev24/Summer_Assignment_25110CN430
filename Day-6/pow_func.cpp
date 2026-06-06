#include <iostream>
using namespace std;
int main()
{
    int base,power,res=1;
    cout<<"Enter base= ";
    cin>>base;
    cout<<"Enter power= ";
    cin>>power;
    for(int i=1;i<=power;i++)
    {
        res*=base;
    }
    cout<<"The x^n form without power function gives= "<<res<<endl;
    return 0;
}