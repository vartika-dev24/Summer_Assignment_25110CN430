#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements in array= ";
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter element "<<i<<"= ";
        cin>>arr[i];

    }
    for(int k=1;k<=n;k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}