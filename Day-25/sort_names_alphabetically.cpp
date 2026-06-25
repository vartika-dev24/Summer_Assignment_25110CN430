#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of names you want to sort: ";
    cin>>n;
    cin.ignore();
    string* names=new string[n];
    string temp="";
    for(int i=0;i<n;i++)
    {
    cout<<"Enter name "<<i+1<<": ";
    getline(cin,names[i]);
    }
    //converts the names into lowercase
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<names[i].length();j++)
        {
            if( names[i][j] >= 'A' && names[i][j] <= 'Z' )
            {  
                 names[i][j]=names[i][j]+32;
            }
            
        }

    }
    for(int i=0;i<n-1;i++)  //checks the characters through bubble sort
    {  for(int j=0;j<n-1-i;j++)
        {
        if(names[j]>names[j+1])
        {
            temp=names[j];
            names[j]=names[j+1];
            names[j+1]=temp;
        }
        }
            
    }
    for(int k=0;k<n;k++)
    {
        cout<<names[k]<<" ";
    }
    delete[] names;
    return 0;
}    