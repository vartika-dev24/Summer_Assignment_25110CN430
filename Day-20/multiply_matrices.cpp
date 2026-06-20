#include<iostream>
using namespace std;
int main()
{
    int row1,col1,row2,col2;
    cout<<"Enter number of rows for matrix 1: ";
    cin>>row1;
    cout<<"Enter number of columns for matrix 1:";
    cin>>col1;
    cout<<"Enter number of rows for matrix 2: ";
    cin>>row2;
    cout<<"Enter number of columns for matrix 2:";
    cin>>col2;

    if(col2==row2)
    {
    int** mat1=new int*[row1];
    int** mat2=new int*[row2];
    int** multiple=new int*[row1];

    for(int i=0;i<row1;i++)
    {
        mat1[i]=new int[col1];
         multiple[i]=new int[col2]();
    }  
    for(int i=0;i<row2;i++)  
    {
        mat2[i]=new int[col2];
       
    }

    for(int i=0;i<row1;i++)
    { for(int j=0;j<col1;j++)
      {  cout<<"Enter element ["<<i+1<<" "<<j+1<<"] :";
         cin>>mat1[i][j];
      }
    }
    cout<<endl;
    for(int i=0;i<row2;i++)
    { for(int j=0;j<col2;j++)
      {  cout<<"Enter element ["<<i+1<<" "<<j+1<<"] :";
         cin>>mat2[i][j];
      }
    }
    for(int i=0;i<row1;i++)
    { for(int j=0;j<col1;j++)
       {      for(int k=0;k<col2;k++)
          {  
            multiple[i][k]+=mat1[i][j]*mat2[j][k];

          }
       }
    }
for(int i=0;i<row1;i++)
{   for(int j=0;j<col2;j++)
    {
        cout<<multiple[i][j]<<" ";
    }
    cout<<endl;
}
 for(int i=0;i<row1;i++)
    {
        delete[] mat1[i];
        delete[] multiple[i];
    }
    delete[] mat1;
    delete[] multiple;
    for(int i=0;i<row2;i++)
      { 
         delete[] mat2[i];
      }
      delete[] mat2;}
      else
      cout<<"Undefined matrix";
return 0;
}