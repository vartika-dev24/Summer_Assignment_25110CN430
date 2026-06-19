#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter number of rows for matrix 1 and 2: ";
    cin>>row;
    cout<<"Enter number of columns for matrix 1 and 2:";
    cin>>col;

    int** mat1=new int*[row];
    int sum=0,sum1=0;

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
   
     for(int i=0;i<row;i++)
{      for(int j=0;j<col;j++)
    {  
        if(i==j)
            sum+=mat1[i][j];
         if(i+j == row-1)
        {
            sum1+=mat1[i][j];
        }

    }
}
cout<<"The given array: "<<endl;
for(int i=0;i<row;i++)
{   for(int j=0;j<col;j++)
    {
        cout<<mat1[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
cout<<"Sum of the diagonals: "<<sum<<endl;
cout<<"Sum of the second diagonal: "<<sum1<<endl;
for(int i=0;i<row;i++)
{
    delete[] mat1[i];
}
delete[] mat1;
return 0;
}
