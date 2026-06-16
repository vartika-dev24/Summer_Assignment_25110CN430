#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,missing_num,swap;
    cout<<"Enter number of elements= ";
    cin>>n;
    int* arr= new int[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<"= ";
        cin>>arr[i];

    }
    // sorting the array
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
           { swap=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=swap;
           }
        }
    }
    int diff= min(arr[1]-arr[0],arr[2]-arr[1]);
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]-arr[i]>diff)
        {    
            cout<<"The missing number in the array= "<<arr[i]+diff<<endl;
            
            
        }
        cout<<"No missing number"<<endl;
        delete[] arr;
        return 0;
    }
}
  