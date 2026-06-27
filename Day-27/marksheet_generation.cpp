#include <iostream>
#include <string>
using namespace std;
struct MarksheetSystem
{
    string name;
    int rollNum;
    double physics;
    double chemistry;
    double math;
    double totalMarks;
    double percentage;
    char grade;
};

int main()
{
    MarksheetSystem student[20]; 
    int choice;
    int total = 0;
    do
    {
        cout<<"xxxxx Marksheet Generation System xxxxx" << endl;
        cout<<"1. Add student marks" << endl;
        cout<<"2. Display all marksheets" << endl;
        cout<<"3. Find marksheet by Roll Number" << endl;
        cout<<"4. Exit system" << endl;
        cout<<"Enter your choice(1/2/3/4): ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
                if (total>=20)
                {
                    cout <<"Cannot add more records." << endl;
                    break;
                }

                cout << "Enter name of the student: ";
                cin.ignore();
                getline(cin, student[total].name);
                cout << "Enter Roll Number: ";
                cin >> student[total].rollNum;
                cout << "Enter Physics marks (out of 100): ";
                cin >> student[total].physics;
                cout << "Enter Chemistry marks (out of 100): ";
                cin >> student[total].chemistry;
                cout << "Enter Math marks (out of 100): ";
                cin >> student[total].math;

                student[total].totalMarks = student[total].physics + student[total].chemistry + student[total].math;
                student[total].percentage = (student[total].totalMarks) / 3;

                //grading system
                if (student[total].percentage >= 90) {
                    student[total].grade = 'A';
                } else if (student[total].percentage >= 75) {
                    student[total].grade = 'B';
                } else if (student[total].percentage >= 50) {
                    student[total].grade = 'C';
                } else {
                    student[total].grade = 'F';
                }

                cout << "Marksheet generated successfully!\n" << endl;
                total++;
                break;
            }

            case 2:
            {
                if (total == 0)
                {
                    cout << "\nStudent Marksheet system is empty" << endl;
                    break;
                }

                for (int i = 0; i < total; i++)
                {
                    cout << "\n================================"<< endl;
                    cout << "        MARKSHEET " <<i + 1 << endl;
                    cout << "================================"<< endl;
                    cout << "Name       : " << student[i].name<< endl;
                    cout << "Roll Num   : " << student[i].rollNum << endl;
                    cout << "--------------------------------" << endl;
                    cout << "Physics    : " << student[i].physics << " / 100" << endl;
                    cout << "Chemistry  : " << student[i].chemistry << " / 100" << endl;
                    cout << "Math       : " << student[i].math << " / 100" << endl;
                    cout << "--------------------------------" << endl;
                    cout << "Total Marks: " << student[i].totalMarks << " / 300" << endl;
                    cout << "Percentage : " << student[i].percentage << "%" << endl;
                    cout << "Final Grade: " << student[i].grade << endl;
                    cout << "================================\n" << endl;
                }
                break;
            }

            case 3:
            {
                int rollSearch;
                cout << "\nEnter student Roll Number to fetch marksheet: ";
                cin >>rollSearch;
                for (int i = 0; i < total; i++)
                {
                    if (rollSearch==student[i].rollNum)
                    {
                        cout<<"\n================================" <<endl;
                        cout<<"      MATCHING MARKSHEET FOUND  " <<endl;
                        cout<<"================================"<< endl;
                        cout<<"Name       : " <<student[i].name<< endl;
                        cout<<"Roll Num   : " <<student[i].rollNum<<endl;
                        cout<<"--------------------------------" << endl;
                        cout<<"Physics    : " <<student[i].physics << endl;
                        cout<<"Chemistry  : " <<student[i].chemistry <<endl;
                        cout<<"Math       : " <<student[i].math <<endl;
                        cout<<"--------------------------------" << endl;
                        cout<<"Total Marks: " <<student[i].totalMarks << endl;
                        cout<<"Percentage : " <<student[i].percentage << "%" << endl;
                        cout<<"Final Grade: "<<student[i].grade << endl;
                        cout<<"================================\n"<< endl;
                        break;
                    }
                      cout << "\nStudent record not found\n" << endl;
                }
                break;
            }
            case 4:
            {
                cout << "\nExiting Marksheet Generation System" << endl;
                break;
            }
            default:
                cout << "\nInvalid choice input! Choose amongst 1 to 4" << endl;
                break;
        }
    } while (choice != 4);
    return 0;
}