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
    for(int i=0;i<row;i++)
    {
        mat1[i]=new int[col];
    }

    int** transpose=new int*[col];
    for(int i=0;i<col;i++)
    {   
        transpose[i]=new int [row];
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
            transpose[j][i]=mat1[i][j];
    }
   }
    for(int i=0;i<col;i++)
   {   for(int j=0;j<row;j++)
    {
        cout<<transpose[i][j]<<" ";
    }
    cout<<endl;
    cout<<"The transpose of the matrix: "<<endl;
    }
    for(int i=0;i<row;i++)
    {
        delete[] mat1[i];
    }
delete[] mat1;
for(int i=0;i<col;i++)
    {
        delete[] transpose[i];
    }
delete[] transpose;
return 0;
}
