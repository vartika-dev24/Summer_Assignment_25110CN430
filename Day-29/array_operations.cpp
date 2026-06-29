#include <iostream>

using namespace std;

int main()
{
    int arr[10]; 
    int choice; 
    int total=0;
    do
    {
        cout<< "xxxxx Array Operations System xxxxx" << endl;
        cout<<"1. Insert an element" << endl;
        cout<<"2. Display all elements" << endl;
        cout<<"3. Search for an element" << endl;
        cout<<"4. Exit system" << endl;
        cout<<"Enter your choice(1/2/3/4): ";
        cin>>choice;

        switch (choice)
        {
            case 1:
            {
                if (total>=10)
                {
                    cout << "Array is full! Cannot insert more elements." << endl;
                    break;
                }
                cout << "Enter the integer value to insert: ";
                cin >> arr[total];

                cout << "Element inserted successfully!\n" << endl;
                total++; 
                break;
            }

            case 2:
            {
                if (total== 0)
                {
                    cout << "\nArray is currently empty" << endl;
                    break;
                }

                cout << "\n--- CURRENT ARRAY ELEMENTS ---" << endl;
                cout << "[ ";
                for (int i = 0; i < total; i++)
                {
                    cout<<arr[i] << " ";
                }
                cout <<"]\n" << endl;
                break;
            }

            case 3:
            {
                if (total==0)
                {
                    cout << "\nArray is empty. Nothing to search." << endl;
                    break;
                }

                int targetNum;
                cout << "\nEnter the number you want to search for: ";
                cin >> targetNum;

                for (int i = 0; i < total; i++)
                {
                    if (targetNum == arr[i])
                    {
                        cout << "Element " << targetNum << " found at index position: " << i << "\n" << endl;
                        break; 
                    }
                     cout << "Element " << targetNum << " not found in the array.\n" << endl;
                }

                break;
            }

            case 4:
            {
                cout << "\nExiting array operations terminal." << endl;
                break;
            }
            default:
                cout << "\nInvalid choice input! Choose amongst 1 to 4" << endl;
                break;
        }
    } while (choice != 4);
    return 0;
}