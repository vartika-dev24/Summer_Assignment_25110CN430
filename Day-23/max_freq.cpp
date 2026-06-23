#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    int count[256] = {0};
    for (int i = 0; i < str.length(); i++)
     {
        count[str[i]]++;
    }

    int maxCount =0;
    char maxChar;

    for (int i = 0; i < str.length(); i++)
     {
        if (maxCount < count[str[i]]) {
            maxCount = count[str[i]];
            maxChar = str[i];
        }
    }
    cout << "Given string: "<<str<<endl;
    cout << "Maximum occurring character is: "<< maxChar<<endl;
    return 0;
}