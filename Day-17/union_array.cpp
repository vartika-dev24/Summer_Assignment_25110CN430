#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter elements of array 1= ";
    cin>>n1;
    cout<<"Enter elememts of array 2= ";
    cin>>n2;
    int* arr1=new int[n1];
    int* arr2=new int[n2];
    int* arr=new int[n1+n2];
    for(int i=0;i<n1;i++)
    {
        cout<<"Enter element "<<i+1<<" =";
        cin>>arr1[i];
    } 
    cout<<endl;
    for(int i=0;i<n2;i++)
    {
        cout<<"Enter element "<<i+1<<" =";
        cin>>arr2[i];
    }
    for(int i=0;i<n1;i++)
    {
             arr[i]=arr1[i];
    }
    int pos=n1;
        for(int k=0;k<n2;k++)
        {   if(k==0 && arr1[n1-1]==arr2[0])
            continue;
            arr[pos]=arr2[k];
            pos++;
    }
    cout<<"The union of array: "<<endl;
    for(int i=0;i<pos;i++)
    {
        cout<<arr[i]<<" ";
        
    }
    delete[] arr1;
    delete[] arr2;
    delete[] arr;
    return 0;
}
