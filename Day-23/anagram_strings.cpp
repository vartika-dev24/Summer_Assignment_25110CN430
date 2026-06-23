#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str,str1;
    char ch='\0';
    int freq[256]={0};
    int freq1[256]={0};
    cout<<"Enter string: ";
    getline(cin,str);
    cout<<"Enter string: ";
    getline(cin,str1);
    int len=str.length();
    int len1=str1.length();
    
if(len!=len1)
{ 
    cout<<"The strings are not anagram strings"<<endl;
    return 0;
}
for(int i=0;i<len;i++)
    {
       freq[str[i]]++;
       }
    for(int i=0;i<len1;i++)
    {
       freq1[str1[i]]++;
       }


    for(int i=0;i<256;i++)
    {
        if(freq[i]!=freq1[i])
       { cout<<"The strings are not anagram strings"<<endl;
        return 0;
       }
    }
    cout<<"The strings are anagram strings"<<endl;
return 0;
    
    }