#include<iostream>
using namespace std;
int max(int x,int y,int z)
{
    int max;
  
    if (x>y && x>z)
   cout<<"Greatest num= "<<x;
   else if(y>z)
   cout<<"Greatest num= "<<y;
   else 
   cout<<"Greatest num= "<<z;   
}
int main()
{   int x,y,z;
    cout<<"Enter 3 numbers= ";
    cin>>x>>y>>z;
    max(x,y,z);
    return 0;
}