#include<iostream>
using namespace std;
int main()
{
    int n,largest,smallest;
    cout<<"Enter number of elements= ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i<<"= ";
        cin>>arr[i];

    }
    largest=arr[0];
    smallest=arr[0];
    for(int k=1;k<n;k++)
    {   
        if(arr[k]>largest)
        largest=arr[k];
        if(arr[k]<smallest)
        smallest=arr[k];
    }
    cout<<"Largest number in the array= "<<largest<<endl;
    cout<<"Smallest number in the array= "<<smallest;
    return 0;
}