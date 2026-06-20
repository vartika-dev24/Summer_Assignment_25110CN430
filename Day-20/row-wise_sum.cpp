#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter number of rows for matrix 1: ";
    cin>>row;
    cout<<"Enter number of columns for matrix 1: ";
    cin>>col;

    int** mat1=new int*[row];

    for(int i=0;i<row;i++)
    {
        mat1[i]=new int[col];
    }

    for(int i=0;i<row;i++)
    { for(int j=0;j<col;j++)
      {  cout<<"Enter element ["<<i+1<<" "<<j+1<<"] :";
         cin>>mat1[i][j];
      }
    }
    cout<<endl;
    cout<<"Row wise sum: "<<endl;
   
     for(int i=0;i<row;i++)
   {    int sum=0;
      for(int j=0;j<col;j++)
    {  
        sum+=mat1[i][j];
        
    }
     cout<<sum<<" ";
   }

   for(int i=0;i<row;i++)
    {
        delete[] mat1[i];
    } 
    delete[] mat1;
    return 0;
}