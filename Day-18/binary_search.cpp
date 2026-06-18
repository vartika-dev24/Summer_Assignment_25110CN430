#include<iostream>
using namespace std;
int main()
{
    int n,middle,first,last,search;
    cout<<"Enter number of elements: ";
    cin>>n;
    int *arr=new int[n];
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
           { int swap=arr[j];
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
    cout<<endl;
     cout<<"Enter the number to be searched: ";
    cin>>search;
   
    first=0;
    last=n-1;
    middle=(first+last)/2;
    if(arr[middle]==search)
    {
        cout<<"The number is found at position: "<<middle;
    }

    while(first<=last)
    {
    if(arr[middle]>search)
     {  last=middle-1; }
    else 
     {  first=middle+1; }

       middle=(first+last)/2;
       if(arr[middle]==search)
    {
        cout<<"The number is found at position: "<<middle;
        break;
    }
}
if(first>last)
cout<<"The number is not found"<<endl;

    return 0;
}