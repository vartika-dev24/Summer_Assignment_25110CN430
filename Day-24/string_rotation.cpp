#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str,rotation;
    char ch='\0';
    int freq[256]={0};
    int shift;
    cout<<"Enter string: ";
    getline(cin,str);
    int len=str.length();
    cout<<"Enter number of shifts you want in the string: ";
    cin>>shift;
    shift=shift%len;
    rotation= str.substr(shift)+str.substr(0,shift);
    cout<<"The string after rotation: "<<rotation<<endl;
    return 0;
}
