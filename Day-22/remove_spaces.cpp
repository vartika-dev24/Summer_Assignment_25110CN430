#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    string string;
    int len=str.length();
    for(int i=0;i<len;i++)
    {
        if(str[i]!=' ')
        {
            string+=str[i];
        }
        else 
        continue;
    }
    cout<<"String without spaces: "<<string<<endl;
    return 0;

}