#include <iostream>
#include <string>
using namespace std;
int main()
{
    string originStr;
    int choice;

    cout << "Enter your main string to begin: ";
    getline(cin, originStr);
    do
    {
        cout << "\nxxxxx String Operations System xxxxx" << endl;
        cout << "Current String: \"" <<originStr << "\"" << endl;
        cout << "------------------------------------" << endl;
        cout << "1. Find length of the string" << endl;
        cout << "2. Reverse the string" << endl;
        cout << "3. Concatenate (join) another string" << endl;
        cout << "4. Exit system" << endl;
        cout << "Enter your choice(1/2/3/4): ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
                cout << "\nLength of the string is: " << originStr.length() << " characters\n" << endl;
                break;
            }

            case 2:
            {
                string reversedStr = "";
                for (int i = originStr.length()- 1; i >= 0; i--)
                {
                    reversedStr=reversedStr + originStr[i];
                }
                
                originStr= reversedStr; 
                cout << "\nString successfully reversed!\n" << endl;
                break;
            }

            case 3:
            {
                string addStr;
                cout << "\nEnter string to add to the end: ";
                cin.ignore(); 
                getline(cin, addStr);
                originStr = originStr + addStr;
                cout << "\nStrings concatenated successfully!\n" << endl;
                break;
            }
            case 4:
            {
                cout << "\nExiting string operations system." << endl;
                break;
            }
            default:
                cout << "\nInvalid choice input! Choose amongst 1 to 4" << endl;
                break;
        }
    } while (choice != 4);
    return 0;
}