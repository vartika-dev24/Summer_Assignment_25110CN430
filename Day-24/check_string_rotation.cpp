#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1,str2;
    cout<<"Enter string 1: ";
    getline(cin,str1);
    cout<<"Enter string 2: ";
    getline(cin,str2);

    if(str1.length()!=str2.length())    //rotation not possible if lengths are different
    {
        cout<<"Strings cannot be compared"<<endl;
        return 0;
    }
    string str=str1+str1; //concatenating string 1 to check existence of string 2 in it
    for(int i=0;i<str1.length();i++)
    {   int check=1;
        for(int j=0;j<str2.length();j++)
        {   int check=1;
            if(str2[j]!=str[i+j])   //checking if the characters match
            {
                check=0;
                break;
            }
        }
        if(check)
        {cout<<"The given strings are rotation of each other"<<endl;
        return 0;
        }
    }
    cout<<"The strings are not rotations of each other"<<endl;
    return 0;
}