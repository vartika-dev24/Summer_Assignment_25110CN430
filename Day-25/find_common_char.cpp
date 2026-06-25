#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,common=0;
    char ch='\0';
    cout<<"Enter number of words: ";
    cin>>n;
    cin.ignore();
    string* words=new string[n];
    string temp="";

    for(int i=0;i<n;i++)
    {
    cout<<"Enter word "<<i+1<<": ";
    getline(cin,words[i]);
    }

    cout<<"The common characters are: "<<endl;

    for(int i=0;i<words[0].length();i++)//taking a character from first word
    {
        ch=words[0][i];
        if(ch=='0')
        continue;
        int match=1;
        for(int k=1;k<n;k++)//comparing that character with character of the next word
        {
            for(int j=0;j<words[k].length();j++)
            {   
                if(ch==words[k][j])
                {
                    match++;
                    words[k][j]='0';//to mark that its already used
                    break;
                }
                
            }
        }
         if(match==n)
        {
         cout<<ch<<" ";  //printing each character that is common
         common++;
        }
    }
    if(common==0)
    cout<<"No common characters in strings"<<endl;
delete[] words;
return 0;
}