#include<iostream>
using namespace std;
int main()
{
    int n,even=0,odd=0;
    cout<<"Enter number of elements= ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<"= ";
        cin>>arr[i];
    }
    for(int k=0;k<n;k++)
    {
        if(arr[k]%2==0)
            even++;
        else 
            odd++;
    }
    cout<<"Number of even numbers in array= "<<even<<endl;
    cout<<"Number of odd numbers in array= "<<odd;
    return 0;
}