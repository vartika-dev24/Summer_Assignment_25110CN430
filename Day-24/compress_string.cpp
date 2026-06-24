#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str,compressed;
    char ch='\0';
    cout<<"Enter string: ";
    getline(cin,str);
    int len=str.length();
    int* freq=new int[256]();
    for(int i=0;i<str.length();i++) //checking individual frequency of each character
    {
        char ch= str[i];
        freq[ch]++;
    }
        for(int i=0;i<str.length();i++)
        {   ch=str[i];
           
            if(freq[ch]!=0)
            {
                compressed+=ch+to_string(freq[ch]); //printing new compressed string 
                freq[ch]=0; //re-initializing for the same character to avoid counting again
            }
        
        }
    if(compressed.length()>=str.length())   //gives the original string since the compressed string should be smaller than it
    compressed=str;
    cout<<"The compressed string: "<<compressed<<endl;
    return 0;
}
