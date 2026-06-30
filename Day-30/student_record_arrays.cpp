#include<iostream>
using namespace std;
   
int main()
{   string name[10];
    int rollNum[10];
    int marks[10];
    char grade[10];
    int choice;
    int total=0;
    do
   {
    cout<<" xxxxx Student Record System xxxxx"<<endl;
    cout<<"1. Add a student record"<<endl;
    cout<<"2. Display student record"<<endl;
    cout<<"3. Find student by roll number"<<endl;
    cout<<"4. Exit student record system"<<endl;
    cout<<"Enter your choice(1/2/3/4): ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            if(total>=10)
            { cout<<"Student record full!"<<endl;
            break;
            }
            cout<<"Enter name of the student: ";
             cin.ignore();
            getline(cin,name[total]);
            cout<<"Enter roll number: ";
            cin>>rollNum[total];
            cout<<"Enter marks of the student out of 100: ";
            cin>>marks[total];
            cout<<"Enter grade obtained: ";
            cin>>grade[total];
            cout<<"New record added!"<<endl;
            total++;
            break;
        }
        case 2:
        {
            if(total==0)
            {
                cout<<"Student record is empty"<<endl;
                break;
            }
            for(int i=0;i<total;i++)
            {
                cout<<"\nName of Student: "<<name[i]<<endl;
                cout<<"Roll Number: "<<rollNum[i]<<endl;
                cout<<"Marks obtained: "<<marks[i]<<endl;
                cout<<"Grade: "<<grade[i]<<"\n"<<endl;
            }
            break;
        }
        case 3:
        {   int roll,i;
            cout<<"\nEnter roll number of student: ";
            cin>>roll;
            for( i=0;i<total;i++)
            {
                if(roll==rollNum[i])
                {
                    cout<<"Student record found! :"<<endl;
                    cout<<"Name of Student: "<<name[i]<<endl;
                    cout<<"Roll Number: "<<rollNum[i]<<endl;
                    cout<<"Marks obtained: "<<marks[i]<<endl;
                    cout<<"Grade: "<<grade[i]<<"\n"<<endl;
                    break;
                }
            }
            if(i==total)
             cout<<"\nStudent record not found\n"<<endl;
            break;
        }
        case 4:
        {
            cout<<"\nExiting student record system"<<endl;
            break;
        }
        default:
        cout<<"Invalid choice input! Choose amongst 1 to 4"<<endl;
        break;
    }

   } while(choice!=4);
   return 0;
}