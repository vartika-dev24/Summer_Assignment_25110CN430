#include<iostream>
#include<string>
using namespace std;
int main()
{
     string str;
    cout<<"Enter a string:";
    getline(cin,str);
    int* freq=new int[256]();
    for(int i=0;i<str.length();i++)
    {
        char ch= str[i];
        freq[ch]++;
    }
    for(int i=0;i<256;i++)
    {
        if(freq[i]>0)
        cout<<char(i)<<" : "<<freq[i]<<endl;
    }
    delete[] freq;
    return 0;
}