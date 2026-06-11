#include<iostream>
using namespace std;
int sum(int x,int y)
{
    return x+y;
}
int main()
{       int x,y;
    cout<<"Enter 2 numbers= ";
    cin>>x>>y;
    cout<<"Sum of the given numbers= "<<sum(x,y);
    return 0;
}