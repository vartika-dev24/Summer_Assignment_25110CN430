#include <iostream>
#include <string>

using namespace std;

// 1. Defining the clear blueprint for a single book record
struct LibrarySystem
{
    string title;
    string author;
    int bookID;
};

int main()
{
    LibrarySystem book[20]; 
    int choice;
    int total = 0; 

    do
    {   cout << "xxxxx Library Management System xxxxx" << endl;
        cout << "1. Add a new book record" << endl;
        cout << "2. Display all books in library" << endl;
        cout << "3. Search for a book by Book ID" << endl;
        cout << "4. Exit library system" << endl;
        cout << "Enter your choice(1/2/3/4): ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
                if (total >= 20)
                {
                    cout <<"Library catalogue full! " << endl;
                    break;
                }

                cout <<"Enter title of the book: ";
                cin.ignore(); 
                getline(cin, book[total].title);
                cout << "Enter author of the book: ";
                getline(cin, book[total].author);
                cout << "Enter Book ID: ";
                cin >> book[total].bookID;
                cout << "New book record added successfully!\n" << endl;
                total++;
                break;
            }
            case 2:
            {
                if (total==0)
                {
                    cout <<"\nLibrary catalogue is empty"<<endl;
                    break;
                }
                cout << "\n    LIBRARY CATALOGUE    " <<endl;
                for (int i = 0; i < total; i++)
                {
                    cout <<"\nBook " << i + 1 << " :"<<endl;
                    cout <<"Title    : " <<book[i].title<<endl;
                    cout <<"Author   : " <<book[i].author<<endl;
                    cout <<"Book ID  : " <<book[i].bookID<<"\n" << endl;
                }
                break;
            }
            case 3:
            {
                int id;
                cout<< "\nEnter Book ID to search: ";
                cin>>id;
                for (int i = 0; i < total; i++)
                {
                    if (id==book[i].bookID)
                    {
                        cout << "\nBook Record Identified! :" << endl;
                        cout << "Title    : " << book[i].title << endl;
                        cout << "Author   : " << book[i].author << endl;
                        cout << "Book ID  : " << book[i].bookID << "\n" << endl;
                        break; 
                    }
                    cout << "\nBook record not found in system storage.\n" << endl;
                }
                break;
            }
            case 4:
            {
               cout <<"\nExiting Library Management System."<< endl;
                break;
            }
            default:
                cout <<"\nInvalid choice input! Choose amongst 1 to 4"<<endl;
                break;
        }

    } while (choice != 4);

    return 0;
}