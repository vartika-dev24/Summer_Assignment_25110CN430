#include<iostream>
using namespace std;
int main()
{
    int n,search;
    cout<<"Enter number of elements= ";
    cin>>n;
    int arr[n];
    cout<<"Enter number to be searched= ";
    cin>>search;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i<<"= ";
        cin>>arr[i];

    }
    for(int k=0;k<n;k++)
    {
        if(arr[k]==search)
        cout<<"Number is found at "<<"position "<<k<<endl;
        if(k==n)
        cout<<"Number is not present in the array"<<endl;
    }
    return 0;

}