#include<iostream>
using namespace std;
int main()
{
    int n , product=1;
    cout<<"Enter a number= ";
    cin>>n;

        while(n!=0)
        {
            int m=n%10;
            product=product*m;
            n=n/10;
        }
            cout<<"Product of digits= "<<product<<endl;
            return 0;

}