#include <iostream>
using namespace std;
int main()
{
        int num,fact,largest_fact=0;
        cout<<"Enter a number= ";
        cin>>num;
        for(int i=1;i<=num;i++)
        {       fact=0;
            if(num%i==0)
            {
                for(int j=1;j<=i;j++)
                {
                    if(i%j==0)
                    fact++;
                }
                if (fact==2)
                   largest_fact=i;
                
            }
    
        }
        cout<<"The largest prime factor is= "<<largest_fact<<endl;
        return 0;
}