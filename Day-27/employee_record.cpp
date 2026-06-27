#include<iostream>
#include<string>
using namespace std;
struct Employee
{
    string name;
    int id;
    string designation;
    double salary;
};
int main()
{   Employee employee[20];
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
            if(total>=20)
            { cout<<"Employee record full!"<<endl;
            break;
            }
            cout<<"Enter name of the Employee: ";
             cin.ignore();
            getline(cin,employee[total].name);
            cout<<"Enter Employee's new ID: ";
            cin>>employee[total].id;
            cout<<"Enter Designation of the Employee: ";
            cin.ignore();
            getline(cin,employee[total].designation);
            cout<<"Enter Salary: ";
            cin>>employee[total].salary;
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
            for(int i=0;i<total;i++)
            {   cout<<"\n     EMPLOYEE RECORD "<<endl;
                cout<<"\nName of Employee      : "<<employee[i].name<<endl;
                cout<<"Employee's Company ID : "<<employee[i].id<<endl;
                cout<<"Designation           : "<<employee[i].designation<<endl;
                cout<<"Salary                : "<<employee[i].salary<<"\n"<<endl;
            }
            break;
        }
        case 3:
        {   int inputID;
            cout<<"\nEnter Company ID of Employee: ";
            cin>>inputID;
            for(int i=0;i<total;i++)
            {
                if(inputID==employee[i].id)
                {
                    cout<<"\nEmployee record found! :"<<endl;
                    cout<<"\nName of Employee      : "<<employee[i].name<<endl;
                    cout<<"Employee's Company ID : "<<employee[i].id<<endl;
                    cout<<"Designation           : "<<employee[i].designation<<endl;
                    cout<<"Salary                : "<<employee[i].salary<<"\n"<<endl;
                    break;
                }
                cout<<"\nEmployee record not found\n"<<endl;
            }
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