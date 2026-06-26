#include<iostream>
using namespace std;
int main()
{
    int choice;
    double balance=5000.00; 
    int currentPin=1234;
    int enteredPin;
    cout<<"Enter Pin"<<endl;
    cin>>enteredPin;
    if(enteredPin!=currentPin)
    {
        cout<<"INVALID PIN"<<endl;
        return 0;
    }
    do
    {
    cout<<endl<<"xxxxxxxxxxxxxxx ";
    cout<<"ATM STIMULATION ";
    cout<<"xxxxxxxxxxxxxxx"<<endl;
    cout<<"1. Check Balance "<<endl;
    cout<<"2. Deposit Cash "<<endl;
    cout<<"3. Withdraw Cash "<<endl;
    cout<<"4. Exit stimulation "<<endl;
    cout<<"Enter choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"Balance: "<<balance;
        break;
        
        case 2:
        { double deposit;
        cout<<"Enter amount to be deposited: ";
        cin>>deposit;
        balance+=deposit;
        cout<<"Total balance: "<<balance<<endl;
        break;
        }

        case 3:
        {   double withdraw;
            cout<<"Enter amount to withdraw: ";
            cin>>withdraw;
            balance-=withdraw;
            cout<<"Total balance: "<<balance<<endl;
            break;
        }
        case 4:
        cout<<"Thank You!"<<endl;
        break;
        default:
        cout<<"INVALID CHOICE"<<endl;        
    } 
    }while(choice!=4);
    return 0;
}