#include<iostream>
using namespace std;
struct Student
{
    string name;
    int rollNum;
    int marks;
    char grade;
};
int main()
{   Student student[20];
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
            if(total>=20)
            { cout<<"Student record full!"<<endl;
            break;
            }
            cout<<"Enter name of the student: ";
             cin.ignore();
            getline(cin,student[total].name);
            cout<<"Enter roll number: ";
            cin>>student[total].rollNum;
            cout<<"Enter marks of the student out of 100: ";
            cin>>student[total].marks;
            cout<<"Enter grade obtained: ";
            cin>>student[total].grade;
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
                cout<<"Name of Student: "<<student[i].name<<endl;
                cout<<"Roll Number: "<<student[i].rollNum<<endl;
                cout<<"Marks obtained: "<<student[i].marks<<endl;
                cout<<"Grade: "<<student[i].grade<<"\n"<<endl;
            }
            break;
        }
        case 3:
        {   int roll;
            cout<<"Enter roll number of student: ";
            cin>>roll;
            for(int i=0;i<total;i++)
            {
                if(roll==student[i].rollNum)
                {
                    cout<<"Student record found! :"<<endl;
                    cout<<"Name of Student: "<<student[i].name<<endl;
                    cout<<"Roll Number: "<<student[i].rollNum<<endl;
                    cout<<"Marks obtained: "<<student[i].marks<<endl;
                    cout<<"Grade: "<<student[i].grade<<"\n"<<endl;
                    break;
                }
                cout<<"Student record not found"<<endl;
            }
            break;
        }
        case 4:
        {
            cout<<"Exiting student record system"<<endl;
            break;
        }
        default:
        cout<<"Invalid choice input! Choose amongst 1 to 4"<<endl;
        break;
    }

   } while(choice!=4);
   return 0;
}