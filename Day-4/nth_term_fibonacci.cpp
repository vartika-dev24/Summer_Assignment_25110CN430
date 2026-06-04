#include <iostream>
using namespace std;
int main()
{
    int n,first=0,second=1;
    cout<<"Enter which term to find= ";
    cin>>n;
    
    if(n==1)
    {
        cout<<"The term is= "<<first;
    }
    if(n==2)
    {
        cout<<"The term is= "<<second;
    }
        for(int i=3;i<=n;i++)
        {       
            int temp=first + second;
            first=second;
            second=temp;
        }    
                     cout<<"The term is= "<<second<<endl;
                    

       
}