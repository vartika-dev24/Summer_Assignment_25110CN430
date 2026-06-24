#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string:";
    getline(cin,str);
    string word="",longestWord="";
     for (int i = 0; i <= str.length(); i++) 
     {
        if (i == str.length() || str[i] == ' ')
         {
            if (word.length()>longestWord.length()) 
            {
                longestWord= word;
            }
            word = ""; 
        } 
        else
         {
            word+= str[i]; 
        }
    }
    cout << "The longest word is: "<<longestWord<<endl;
    return 0;
}