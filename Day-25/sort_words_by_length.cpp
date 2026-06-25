#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of words you want to sort by length: ";
    cin>>n;
    cin.ignore();
    string* words=new string[n];
    string temp="";
    for(int i=0;i<n;i++)
    {
    cout<<"Enter word "<<i+1<<": ";
    getline(cin,words[i]);
    }
//checks the length and compares with the next word
    for(int i=0;i<n-1;i++)
    {  for(int j=0;j<n-1-i;j++)
        {
        if(words[j].length()>words[j+1].length()) //sorting by bubble sort
        {
            temp=words[j];
            words[j]=words[j+1];
            words[j+1]=temp;
        }
        }
            
    }
    for(int k=0;k<n;k++)
    {
        cout<<words[k]<<" ";
    }
    delete[] words;
    return 0;
}    