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
    int** mat2=new int*[row];
    int** sub=new int*[row];

    for(int i=0;i<row;i++)
    {
        mat1[i]=new int[col];
        mat2[i]=new int[col];
        sub[i]=new int [col];
    }

    for(int i=0;i<row;i++)
    { for(int j=0;j<col;j++)
      {  cout<<"Enter element ["<<i+1<<" "<<j+1<<"] :";
         cin>>mat1[i][j];
      }
    }
    cout<<endl;
    for(int i=0;i<row;i++)
    { for(int j=0;j<col;j++)
      {  cout<<"Enter element ["<<i+1<<" "<<j+1<<"] :";
         cin>>mat2[i][j];
      }
    }
     for(int i=0;i<row;i++)
{      for(int j=0;j<col;j++)
    {  
            sub[i][j]=mat1[i][j]-mat2[i][j];

    }
}
for(int i=0;i<row;i++)
{   for(int j=0;j<col;j++)
    {
        cout<<sub[i][j]<<" ";
    }
    cout<<endl;
}
 for(int i=0;i<row;i++)
    {
        delete[] mat1[i];
        delete[] mat2[i];
        delete[] sub[i];
    }
delete[] mat1;
delete[] mat2;
delete[] sub;
return 0;
}
