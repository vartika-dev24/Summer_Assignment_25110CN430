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
        int smallest=i;

        for(int j=i+1;j<n;j++)
        {
            if(arr[smallest]>arr[j])
            {  
                smallest=j;

            }
        }
         int swap=arr[smallest];
                arr[smallest]=arr[i];
                arr[i]=swap;
    }
    cout<<"The sorted array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    delete[] arr;
    return 0;
    
}
