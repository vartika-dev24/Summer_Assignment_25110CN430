#include<iostream>
using namespace std;
int main()
{
    int first,last;
    cout<<"Enter starting number= ";
    cin>>first;
    cout<<"Enter last number= ";
    cin>>last;

    for(int i=first;i<=last;i++)
    {
        int count=0;
        for(int x=1;x<=i;x++)
        {
            if(i%x==0)              // checking if number is prime
            {
                count++;

            }
        }
        if(count==2)
        cout<<i<<" ";               //printing the prime numbers

    } 
    return 0;
}