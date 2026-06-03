#include<iostream>
using namespace std;
int main()
{
    int n1,n2,factor;
    cout<<"Enter 2 numbers= ";
    cin>>n1>>n2;
        factor=(n1>n2)? n1:n2;
         while(true)
         {
            if(factor% n1==0 && factor%n2==0)
            {
                    cout<<"LCM of 2 numbers= "<<factor<<endl;
                    break;
            }
         factor++;              //to find factors of the number
        
         }

        return 0;
}