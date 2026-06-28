#include <iostream>
#include <string>
using namespace std;
struct BankSystem
{
    string name;
    int accountNum;
    double balance;
};
int main()
{
    BankSystem account[20]; 
    int choice;
    int total = 0; 
    do
    {
        cout<<"xxxxx Bank Account System xxxxx" << endl;
        cout<<"1. Open a new bank account" << endl;
        cout<<"2. Display all account records" << endl;
        cout<<"3. Deposit money into an account" << endl;
        cout<<"4. Withdraw money from an account" << endl;
        cout<<"5. Exit banking system" << endl;
        cout<<"Enter your choice(1/2/3/4/5): ";
        cin>> choice;
        switch(choice)
        {
            case 1:
            {
                if (total>=20)
                {
                    cout<<"System capacity full!"<<endl;
                    break;
                }

                cout<<"Enter name of the account holder: ";
                cin.ignore(); 
                getline(cin, account[total].name);
                cout << "Enter a unique Account Number: ";
                cin >> account[total].accountNum;
                cout << "Enter initial deposit amount: ";
                cin >> account[total].balance;
                cout << "Account created successfully!\n" << endl;
                total++;
                break;
            }
            case 2:
            {
                if (total==0)
                {
                    cout << "\nNo active bank accounts found " << endl;
                    break;
                }

                cout << "\n    REGISTERED BANK ACCOUNTS    " << endl;
                for (int i=0;i<total;i++)
                {
                    cout<< "\nAccount Record " <<i + 1 << " :" << endl;
                    cout<<"Holder Name   : " <<account[i].name << endl;
                    cout<<"Account Number: " <<account[i].accountNum << endl;
                    cout<<"Current Balance: Rs. "<<account[i].balance << "\n" << endl;
                }
                break;
            }
            case 3:
            {
                if (total==0)
                {
                    cout << "\n No accounts available." << endl;
                    break;
                }
                int id;
                double depositAmount;
                cout<<"\nEnter Account Number for deposit: ";
                cin>>id;

                for (int i = 0; i < total; i++)
                {
                    if (id==account[i].accountNum)
                    {
                        cout<<"Enter amount to deposit: Rs. ";
                        cin>>depositAmount;
                        account[i].balance = account[i].balance + depositAmount;
                        cout << "Deposit successful! New Balance: Rs. " << account[i].balance << "\n" << endl;
                        break;
                    }
                    cout << "\nAccount number not found.\n" << endl;
                }
                break;
            }
            case 4:
            {
                if (total==0)
                {
                    cout<<"\nNo accounts available for withdrawals." << endl;
                    break;
                }

                int id;
                double withdrawAmount;
                cout << "\nEnter Account Number for withdrawal: ";
                cin>>id;

                for (int i=0;i<total;i++)
                {
                    if (id==account[i].accountNum)
                    {
                        cout << "Enter amount to withdraw: Rs. ";
                        cin >> withdrawAmount;

                        if (withdrawAmount<=account[i].balance)
                        {
                            account[i].balance = account[i].balance - withdrawAmount;
                            cout<<"Withdrawal successful! Remaining Balance: Rs. " << account[i].balance << "\n" << endl;
                        }
                        else
                        {
                            cout << "Transaction Failed: Insufficient funds available!\n" << endl;
                        }
                        break;
                    }
                       cout << "\nError: Account number not found.\n" << endl;

                }
                break;
            }
            case 5:
            {
                cout << "\n Exiting bank account system. " << endl;
                break;
            }
            default:
                cout << "\nInvalid choice input! Choose amongst 1 to 5" << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}