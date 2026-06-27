#include <iostream>
#include <string>

using namespace std;

//struct to hold gross pay, deductions, and final net salary
struct SalarySystem
{
    string name;
    int id;
    double grossSalary;
    double deductions;
    double netSalary;
};

int main()
{
    SalarySystem employee[20]; 
    int choice;
    int total = 0;
    do
    {
        cout << "xxxxx Salary Management System xxxxx" << endl;
        cout << "1. Add Employee salary record" << endl;
        cout << "2. Display all salary records" << endl;
        cout << "3. Search salary record by employee ID" << endl;
        cout << "4. Exit salary management system" << endl;
        cout << "Enter your choice(1/2/3/4): ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
                if (total >= 20)
                {
                    cout << "Salary record full!" << endl;
                    break;
                }

                cout << "Enter name of the employee: ";
                cin.ignore(); 
                getline(cin, employee[total].name);
                cout << "Enter employee ID: ";
                cin >> employee[total].id;
                cout << "Enter Gross Monthly Salary: ";
                cin >> employee[total].grossSalary;
                cout << "Enter Total Deductions (Taxes/PF): ";
                cin >> employee[total].deductions;

                // net Salary = Gross Salary - Deductions
                employee[total].netSalary = employee[total].grossSalary - employee[total].deductions;

                cout << "New record added!\n" << endl;
                total++;
                break;
            }

            case 2:
            {
                if (total == 0)
                {
                    cout << "\nEmployee record is empty\n" << endl;
                    break;
                }

                for (int i = 0; i < total; i++)
                {
                    cout << "\nEmployee " << i + 1 << " :" << endl;
                    cout << "Name of Employee: " << employee[i].name << endl;
                    cout << "Employee ID: " << employee[i].id << endl;
                    cout << "Gross Salary: " << employee[i].grossSalary << endl;
                    cout << "Deductions: " << employee[i].deductions << endl;
                    cout << "Net Pay: " << employee[i].netSalary << "\n" << endl;
                }
                break;
            }

            case 3:
            {
                int inputID;
                cout << "\nEnter employee ID of worker: ";
                cin >> inputID;

                for (int i = 0; i < total; i++)
                {
                    if (inputID == employee[i].id)
                    {
                        cout << "\nEmployee record found! :" << endl;
                        cout << "Name of Employee: " << employee[i].name << endl;
                        cout << "Employee ID: " << employee[i].id << endl;
                        cout << "Gross Salary: " << employee[i].grossSalary << endl;
                        cout << "Deductions: " << employee[i].deductions << endl;
                        cout << "Net Pay: " << employee[i].netSalary << "\n" << endl;                 
                        break; 
                    }
                     cout << "\nEmployee record not found\n" << endl;
                }
                break;
            }

            case 4:
            {
                cout << "\nExiting salary management system" << endl;
                break;
            }

            default:
                cout << "\nInvalid choice input! Choose amongst 1 to 4" << endl;
                break;
        }

    } while (choice != 4);

    return 0;
}