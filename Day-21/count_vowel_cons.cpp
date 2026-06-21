#include<iostream>
#include<string>
using namespace std;
int main()
{
     string str,str1;

    cout<<"Enter a string: ";
    getline(cin,str);
    int len;
    int vowel=0,cons=0;
    len=str.length();
    for(int i=0;i<len;i++)
    {
        if(str[len]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        vowel++;
        else if(str[i]!=' ')
        cons++;
    }
    cout<<"The number of vowels in the string are: "<<vowel<<endl;
    cout<<"The number of consonants in the string are: "<<cons<<endl;
    return 0;
}