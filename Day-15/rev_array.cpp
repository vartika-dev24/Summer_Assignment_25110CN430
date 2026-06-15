#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of terms= ";
    cin>>n;
    int arr[n];
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<" = ";
        cin>>arr[i];

    }
    for(int k=0;k<n;k++)
    {
        a[k]=arr[n-1-k];
    }
cout<<"Reversed array= ";
for(int x=0;x<n;x++)
{
    cout<<a[x]<<" ";
}
return 0;
}