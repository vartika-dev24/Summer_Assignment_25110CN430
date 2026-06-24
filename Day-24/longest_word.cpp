#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string:";
    getline(cin,str);
    string word="",longestWord="";
     for (int i=0; i<=str.length();i++) 
     {
        if (i==str.length() || str[i]==' ') //checks for longest word by comparing length of each word
         {
            if (word.length()>longestWord.length()) 
            {
                longestWord= word;
            }
            word = ""; //re-initializes for a new word to be stored after comparing 
        } 
        else
         {
            word+= str[i]; //stores each word until it reaches a space
        }
    }
    cout << "The longest word is: "<<longestWord<<endl;
    return 0;
}
