#include<iostream>
using namespace std;
int main()
{
    int n;
     cout<<"Enter number of elements= ";
    cin>>n;
    int arr[n];
     for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i<<"= ";
        cin>>arr[i];

    }
    for(int k=0;k<n;k++)
    {
        for(int j=k+1;j<n;j++)
    {
        if(arr[k]==arr[j])
        cout<<"The duplicate number in the array"<<" is = "<<arr[k]<<endl;
        
    }
}
    return 0;
}