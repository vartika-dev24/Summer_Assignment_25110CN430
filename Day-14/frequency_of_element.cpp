#include<iostream>
using namespace std;
int main()
{
    int n,freq=0;
     cout<<"Enter number of elements= ";
    cin>>n;
    int arr[n];
     for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i<<"= ";
        cin>>arr[i];

    }
    int find;
    cout<<"Enter the element you need to find the frequency of= ";
    cin>>find;
    for(int k=0;k<n;k++)
    {
        if(arr[k]==find)
        freq++;
    }
    cout<<"The frequency of the element "<<find<<" is = "<<freq<<endl;
    return 0;
}