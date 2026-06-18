#include<iostream>
using namespace std;
int main()
{
    int n,swap;
    cout<<"Enter number of elements: ";
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<" :";
        cin>>arr[i];

    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
           { swap=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=swap;
           }
        }
    }
    cout<<"The sorted array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    delete[] arr;
    return 0;
    
}