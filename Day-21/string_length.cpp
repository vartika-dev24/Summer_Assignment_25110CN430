#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string:";
    getline(cin,str);
    int len=0;
    while(str[len]!='\0' )
   {  
        len++;
  }
  cout<<"The length of the string is: "<<len<<endl;
  return 0;
}