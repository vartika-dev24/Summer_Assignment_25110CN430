#include <iostream>
#include <string>
using namespace std;

int main()
{
    string bookTitle[10];
    string bookAuthor[10];
    int bookID[10];
    
    int choice;
    int total=0; 
    do
    {
        cout<<"xxxxx Mini Library System xxxxx"<<endl;
        cout<<"1. Add a new book"<<endl;
        cout<<"2. Display all books"<<endl;
        cout<<"3. Search for a book by Book ID"<<endl;
        cout<<"4. Exit system"<<endl;
        cout<<"Enter your choice(1/2/3/4): ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                if (total>=10)
                {
                    cout<<"Library is full! " << endl;
                    break;
                }
                cout << "Enter title of the book: ";
                cin.ignore(); 
                getline(cin, bookTitle[total]);
                cout << "Enter author of the book: ";
                getline(cin, bookAuthor[total]);
                cout << "Enter unique Book ID: ";
                cin >> bookID[total];
                cout << "New book added successfully!\n" << endl;
                total++;
                break;
            }
            case 2:
            {   
                if (total == 0)
                {
                    cout<<"\nLibrary is completely empty"<<endl;
                    break;
                }
                int i;
                cout<<"\n--- CURRENT BOOK CATALOGUE ---"<<endl;
                for (i=0; i < total; i++)
                {
                    cout<<"\nBook Position "<<i + 1 << " :" << endl;
                    cout<<"Title  : " << bookTitle[i] << endl;
                    cout<<"Author : " << bookAuthor[i] << endl;
                    cout<<"Book ID: " << bookID[i] << "\n" << endl;
                }
                break;
            }
            case 3:
            {
                if (total==0)
                {
                    cout<<"\nLibrary is empty. Nothing to search." << endl;
                    break;
                }

                int id,i;        
                cout<<"\nEnter Book ID to search: ";
                cin>>id;
                for(i=0;i<total;i++)
                {
                    if (id==bookID[i])
                    {
                        cout<<"\nBook Identified! :" << endl;
                        cout<<"Title  : " << bookTitle[i] << endl;
                        cout<<"Author : " << bookAuthor[i] << endl;
                        cout<<"Book ID: " << bookID[i] << "\n" << endl;
                        break; 
                    }
                   
                }
                if(i==total)
                 cout<<"\nBook ID not found.\n" << endl;
                break;
            }
            case 4:
            {
                cout << "\nExiting Mini Library System." << endl;
                break;
            }
            default:
                cout << "\nInvalid choice input! Choose amongst 1 to 4" << endl;
                break;
        }
    } while (choice != 4);
    return 0;
}