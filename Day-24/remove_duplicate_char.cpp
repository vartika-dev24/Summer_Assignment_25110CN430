#include<iostream>
#include<string>
using namespace std;
int main()
{
     string str,newStr;
    cout<<"Enter a string:";
    getline(cin,str);
    int* freq=new int[256]();
    for(int i=0;i<str.length();i++)
    {
        char ch= str[i];
        freq[ch]++;
    }
    for(int i=0;i<str.length();i++)
    {
        char ch= str[i];
        if(freq[ch]>0)
        {
        newStr+=ch;
        freq[ch]=0;
        }
    }
    cout<<"The string without duplicate characters: "<<newStr<<endl;
    return 0;
}