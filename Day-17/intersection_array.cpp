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
    int pos=0;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(arr1[i]==arr2[j])
          { arr[pos]=arr1[i];     
            pos++;
            break;
          }
         
        }
    }
    cout<<"The intersection of arrays= "<<endl;
   for(int i=0;i<pos;i++)
   {
    cout<<arr[i]<<" ";
   }
   return 0;
}