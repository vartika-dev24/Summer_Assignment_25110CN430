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
    int largest=arr[0];
    int second_largest=arr[1];
    for(int k=1;k<n;k++)
    {         
        if(arr[k]>largest)
      {  
        second_largest=largest;
        largest=arr[k];
      }
      else if(arr[k]>second_largest && arr[k]!=largest)
      {
        second_largest=arr[k];
      }
    }
    cout<<"Second largest num= "<<second_largest<<endl;
    return 0;
}