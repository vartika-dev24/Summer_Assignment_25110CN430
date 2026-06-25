#include<iostream>
using namespace std;
int main()
{
    int n1,n2,temp,swap;
    cout<<"Enter number of elements for sorted array 1: ";
    cin>>n1;
    cout<<"Enter number of elements for sorted array 2: ";
    cin>>n2;

    int* arr1=new int[n1];
    int* arr2=new int[n2];
    int* arr=new int[n1+n2]();
    for(int i=0;i<n1;i++)
    {
        cout<<"Enter element "<<i+1<<" :";
        cin>>arr1[i];
    }
    for(int i=0;i<n2;i++)
    {
        cout<<"Enter element "<<i+1<<" :";
        cin>>arr2[i];
    }
    //sorting arrays by bubble sort
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n1-1-i;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
            temp = arr1[j];
            arr1[j]=arr1[j+1];
            arr1[j+1]= temp;
            }
        }
    }
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n2-1-i;j++)
        {
            if(arr2[j]>arr2[j+1])
            {
            swap = arr2[j];
            arr2[j]=arr2[j+1];
            arr2[j+1]= swap;
            }
        }
    }
    //merging arrays
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {   if(arr1[i]<arr2[j])
        arr[k++]=arr1[i++];
        else 
        arr[k++]=arr2[j++];
    }
    while(i<n1)
    {
        arr[k++]=arr1[i++];
    }
    while(j<n2)
    {
        arr[k++]=arr2[j++];
    }
        cout<<"The merged sorted array is: "<<endl;
     for(int k=0;k<n1+n2;k++)
     {
        cout<<arr[k]<<" ";
     }
    
    delete[] arr1;
    delete[] arr2;
    delete[] arr;
    return 0;
     }
    
