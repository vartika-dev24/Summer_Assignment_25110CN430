#include<iostream>
#include<string>
using namespace std;
int main()

{ 
    int project;
    string name[10];
      do{
    cout<<" xxxx MANAGEMENT SYSTEM xxxx"<<endl;
    cout<<"1. Employee Management System "<<endl;
    cout<<"2. Student Record System "<<endl;
    cout<<"3. Library Record System "<<endl;
    cout<<"4. Exit Management System "<<endl;
    cout<<"Enter choice of application (1/2/3/4): ";
    cin>>project;
    switch(project)
    {
        case 1:
        {
                
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
            cout<<"\nExiting Employee Management System\n"<<endl;
            break;
        }
        default:
        cout<<"\nInvalid choice input! Choose amongst 1 to 4"<<endl;
        break;
        }
     }while(choice!=4);
     break;
  }
    case 2:
    {
        
       int rollNum[10];
       int marks[10];
       char grade[10];
       int choice;
       int total=0;
      do
     {
        cout<<"\n xxxxx Student Record System xxxxx"<<endl;
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
                cout<<"\nExiting student record system\n"<<endl;
                break;
            }
            default:
            cout<<"Invalid choice input! Choose amongst 1 to 4"<<endl;
            break;
        }

      } while(choice!=4);
      break;
    }
    case 3: 
    {
        string bookTitle[10];
       string bookAuthor[10];
       int bookID[10];
    
            int choice;
            int total=0; 
            do
            {
                cout<<"\n xxxxx Mini Library System xxxxx"<<endl;
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
                        cout << "\nExiting Mini Library System.\n" << endl;
                        break;
                    }
                    default:
                        cout << "\nInvalid choice input! Choose amongst 1 to 4" << endl;
                        break;
                }
            } while (choice != 4);
            break;
            }
            case 4:
            cout<<"\nExiting Management System! \n"<<endl;
            break;
            default:
            cout<<"Choose Between 1-3 "<<endl;
            break;
   }
   
}while(project!=4);
return 0;
}