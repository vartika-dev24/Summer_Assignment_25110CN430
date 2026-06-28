#include <iostream>
#include <string>
using namespace std;
struct ContactSystem
{
    string name;
    string phone;
    string email;
};
int main()
{
    ContactSystem contact[20]; 
    int choice;
    int total = 0; 
    do
    {
        cout<<"xxxxx Contact Management System xxxxx"<<endl;
        cout<<"1. Add a new contact"<<endl;
        cout<<"2. Display all contacts"<<endl;
        cout<<"3. Search contact by name"<<endl;
        cout<<"4. Exit contact system" <<endl;
        cout<<"Enter your choice(1/2/3/4): ";
        cin>>choice;
        switch (choice)
        {
            case 1:
            {
                if (total >= 20)
                {
                    cout << "Contact book full! Cannot add more numbers." << endl;
                    break;
                }
                cout << "Enter name of the contact: ";
                cin.ignore(); 
                getline(cin, contact[total].name);
                cout << "Enter phone number: ";
                getline(cin, contact[total].phone);
                cout << "Enter email address: ";
                getline(cin, contact[total].email);
                cout << "New contact saved successfully!\n" << endl;
                total++;
                break;
            }
            case 2:
            {
                if (total==0)
                {
                    cout <<"\n Contact book is empty" << endl;
                    break;
                }

                cout << "\n--- SAVED CONTACTS ---" << endl;
                for (int i=0;i<total;i++)
                {
                    cout<<"\nContact "<<i + 1<<" :" << endl;
                    cout<<"Name   : " << contact[i].name << endl;
                    cout<<"Phone  : " << contact[i].phone << endl;
                    cout<<"Email  : " << contact[i].email << "\n" << endl;
                }
                break;
            }
            case 3:
            {
                if (total==0)
                {
                    cout<<"\nContact book is empty." << endl;
                    break;
                }
                string searchName;
                cout << "\nEnter name to search: ";
                cin.ignore(); 
                getline(cin,searchName);
                for (int i=0;i<total;i++)
                {
                    if (searchName==contact[i].name)
                    {
                        cout<<"\nContact Record Identified :"<< endl;
                        cout<<"Name   : "<<contact[i].name <<endl;
                        cout<<"Phone  : "<<contact[i].phone<<endl;
                        cout<<"Email  : "<<contact[i].email<<"\n" << endl;
                        break; 
                    }
                    cout<<"\nName not found in contacts.\n" << endl;
                }
                break;
            }
            case 4:
            {
                cout<<"\nClosing contact application." << endl;
                break;
            }
            default:
                cout<<"\nInvalid choice input! Choose amongst 1 to 4" << endl;
                break;
        }

    }while (choice != 4);

    return 0;
}