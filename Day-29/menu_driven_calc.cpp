#include <iostream>
using namespace std;
int main()
{
    int choice;
    double num1, num2, result;
    do
    {
        cout<<"xxxxx Menu-Driven Calculator xxxxx" << endl;
        cout<<"1. Addition (+)" << endl;
        cout<<"2. Subtraction (-)" << endl;
        cout<<"3. Multiplication (*)" << endl;
        cout<<"4. Division (/)" << endl;
        cout<<"5. Exit calculator" << endl;
        cout<<"Enter your choice(1/2/3/4/5): ";
        cin>>choice;
        
        if (choice >= 1 && choice <= 4)
        {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }
        switch (choice)
        {
            case 1:
            {
                result=num1 + num2;
                cout<<"Result: "<<num1<<" + "<<num2<<" = "<<result<<"\n"<<endl;
                break;
            }
            case 2:
            {
                result=num1 - num2;
                cout<<"Result: "<< num1 << " - " <<num2<< " = "<<result<<"\n"<<endl;
                break;
            }
            case 3:
            {
                result= num1 * num2;
                cout<< "Result: " << num1 << " * "<<num2<<" = " << result << "\n" <<endl;
                break;
            }
            case 4:
            {
                if (num2 != 0)
                {
                    result = num1 / num2;
                    cout<<"Result: "<<num1<<" / " <<num2 << " = " <<result<<"\n" << endl;
                }
                else
                {
                    cout << " Division by zero is not allowed!\n" << endl;
                }
                break;
            }
            case 5:
            {
                cout << "\nExiting calculator application." << endl;
                break;
            }
            default:
                cout << "\nInvalid choice input! Choose amongst 1 to 5" << endl;
                break;
        }

    } while (choice != 5);
    return 0;
}