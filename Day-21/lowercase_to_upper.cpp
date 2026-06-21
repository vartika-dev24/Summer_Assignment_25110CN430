#include<iostream>
#include<string>
using namespace std;
int main ()
{
    string str,str1;
    cout<<"Enter a string: ";
    getline(cin,str);
    int len;
    len=str.length();
    for(int i=0;i<len;i++)
    {
        if(str[i]>='a' && str[i]<='z')
        str1+=str[i]-32;
        else
        str1+=str[i];
    }
    cout<<"The string after converting lowercase to uppercase: "<<str1<<endl;
    return 0;
}