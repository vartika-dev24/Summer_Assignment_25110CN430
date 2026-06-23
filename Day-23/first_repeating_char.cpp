#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    char ch='\0';
    int freq[256]={0};
    cout<<"Enter string: ";
    getline(cin,str);
    int len=str.length();
    for(int i=0;i<len;i++)
    {
       freq[str[i]]++;

    }
    for(int i=0;i<len;i++)
    {
        if(freq[str[i]]>1)
       { ch=str[i];
        break;
    }
    }
    if(ch!='\0')
    cout<<"The first repeating character in the string: "<<ch<<endl;
    else
    cout<<"All characters are non-repeating themselves"<<endl;
    return 0;
    
}