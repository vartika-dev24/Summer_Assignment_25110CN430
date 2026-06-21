#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str,str1;
    cout<<"Enter a string: ";
    getline(cin,str);
    int len=0;
    while(str[len]!='\0' )
   {  
        len++;
  }
  for(int i=len-1;i>=0;i--)
  {     str1+=str[i];

  }
  cout<<"The reverse of the string is: "<<str1<<endl;
  return 0;
}