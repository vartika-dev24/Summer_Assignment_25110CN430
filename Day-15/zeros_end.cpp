#include<iostream>
using namespace std;
int main()
{
    int n,find=0;
    cout<<"Enter the number of elements in the array= ";
    cin>>n;
    int* arr=new int[n];
    
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<" = ";
        cin>>arr[i];

    } 
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {    arr[find]=arr[i];
            find++;
        }
    }
    for(int i=find;i<n;i++)
    {
        arr[i]=0;

    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}