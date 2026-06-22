#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string:";
    getline(cin,str);
    int word=1;
    int len=str.length();
    for(int i=0;i<len;i++)
    {
        if(str[i]==' ' && (i+1==len || str[i+1]==' '))
        word++;

    }
    cout<<"The number of words in the sentence are: "<<word<<endl;
    return 0;
}