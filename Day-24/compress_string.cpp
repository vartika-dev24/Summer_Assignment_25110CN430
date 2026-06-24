#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str,compressed;
    char ch='\0';
    int shift;
    cout<<"Enter string: ";
    getline(cin,str);
    int len=str.length();
    int* freq=new int[256]();
    for(int i=0;i<str.length();i++)
    {
        char ch= str[i];
        freq[ch]++;
    }
        for(int i=0;i<str.length();i++)
        {   ch=str[i];
           
            if(freq[ch]!=0)
            {
                compressed+=ch+to_string(freq[ch]);
                freq[ch]=0;
            }
        
        }
    if(compressed.length()>=str.length())
    compressed=str;
    cout<<"The compressed string: "<<compressed<<endl;
    return 0;
}