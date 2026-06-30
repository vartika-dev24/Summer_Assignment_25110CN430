#include<iostream>
#include<string>
using namespace std;
int main()
{   string name[10];
    int id[10];
    string designation[10];
    double salary[10];
    int choice;
    int total=0;
    do
   {
    cout<<" xxxxx Employee Record System xxxxx"<<endl;
    cout<<"1. Add new employee record"<<endl;
    cout<<"2. Display employee record"<<endl;
    cout<<"3. Search employee by Company ID"<<endl;
    cout<<"4. Exit Employee Management System\n"<<endl;
    cout<<"Enter your choice(1/2/3/4): ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            if(total>=10)
            { cout<<"Employee record full!"<<endl;
            break;
            }
            cout<<"Enter name of the Employee: ";
             cin.ignore();
            getline(cin,name[total]);
            cout<<"Enter Employee's new ID: ";
            cin>>id[total];
            cout<<"Enter Designation of the Employee: ";
            cin.ignore();
            getline(cin,designation[total]);
            cout<<"Enter Salary: ";
            cin>>salary[total];
            cout<<"New record added!\n"<<endl;
            total++;
            break;
        }
        case 2:
        {
            if(total==0)
            {
                cout<<"\nEmployee record is empty"<<endl;
                break;
            }
             cout<<"\n     EMPLOYEE RECORD "<<endl;
            for(int i=0;i<total;i++)
            {  
                cout<<"\nName of Employee      : "<<name[i]<<endl;
                cout<<"Employee's Company ID : "<<id[i]<<endl;
                cout<<"Designation           : "<<designation[i]<<endl;
                cout<<"Salary                : "<<salary[i]<<"\n"<<endl;
            }
            break;
        }
        case 3:
        {   int inputID,i;
            cout<<"\nEnter Company ID of Employee: ";
            cin>>inputID;
            for(i=0;i<total;i++)
            {
                if(inputID==id[i])
                {
                    cout<<"\nEmployee record found! :"<<endl;
                    cout<<"\nName of Employee      : "<<name[i]<<endl;
                    cout<<"Employee's Company ID : "<<id[i]<<endl;
                    cout<<"Designation           : "<<designation[i]<<endl;
                    cout<<"Salary                : "<<salary[i]<<"\n"<<endl;
                    break;
                }
            }
            if(i==total)
            cout<<"\nEmployee record not found\n"<<endl;
            break;
        }
        case 4:
        {
            cout<<"\nExiting Employee Management System"<<endl;
            break;
        }
        default:
        cout<<"\nInvalid choice input! Choose amongst 1 to 4"<<endl;
        break;
    }

   } while(choice!=4);
   return 0;
}