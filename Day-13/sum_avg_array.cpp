#include<iostream>
using namespace std;
int main()
{
    int n,sum=0, avg=0;
    cout<<"Enter number of elements= ";
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter element "<<i<<"= ";
        cin>>arr[i];
    }
    for(int k=0;k<n;k++)      //sum of elements
    {
         sum+=arr[k];
    }
        avg=sum/n;
        cout<<"Sum of elements of array= "<<sum<<endl;
        cout<<"Average of elements of array= "<<avg;
        return 0;
}
 