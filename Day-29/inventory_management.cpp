#include <iostream>
#include <string>
using namespace std;
struct InventorySystem
{
    string prodName;
    int prodID;
    int quantity;
    double price;
};
int main()
{
    InventorySystem product[10]; 
    int choice;
    int total = 0;
    do
    {
        cout << "xxxxx Inventory Management System xxxxx" << endl;
        cout << "1. Add new product to stock" << endl;
        cout << "2. Display current stock registry" << endl;
        cout << "3. Search for product by Product ID" << endl;
        cout << "4. Exit inventory system" << endl;
        cout << "Enter your choice(1/2/3/4): ";
        cin >> choice;
        switch (choice)
        {
            case 1:
            {
                if (total >= 10)
                {
                    cout << "Inventory database full! Cannot log new items." << endl;
                    break;
                }
                cout << "Enter product name: ";
                cin.ignore(); 
                getline(cin, product[total].prodName);
                cout << "Enter unique Product ID: ";
                cin >> product[total].prodID;
                cout << "Enter quantity received: ";
                cin >> product[total].quantity;
                cout << "Enter unit price per item: ";
                cin >> product[total].price;
                cout << "Product successfully added to warehouse storage!\n" << endl;
                total++;
                break;
            }
            case 2:
            {
                if (total==0)
                {
                    cout << "\nInventory registry is empty" << endl;
                    break;
                }
                cout << "\n--- CURRENT INVENTORY REGISTRY ---" << endl;
                for (int i=0;i<total; i++)
                {
                    cout<< "\nProduct Item <<" << i + 1 << ">> :" << endl;
                    cout<< "Product Name: " << product[i].prodName << endl;
                    cout<< "Product ID  : " << product[i].prodID << endl;
                    cout<< "Quantity    : " << product[i].quantity << " units" << endl;
                    cout<< "Price/Unit  : " << product[i].price << endl;
                    cout<< "Total Value : " << (product[i].quantity * product[i].price) << "\n" << endl;
                }
                break;
            }
            case 3:
            {
                if (total == 0)
                {
                    cout << "\nInventory is empty. Nothing to search." << endl;
                    break;
                }

                int targetID;
                cout << "\nEnter Product ID to search: ";
                cin >> targetID;
                for (int i = 0; i < total; i++)
                {
                    if (targetID == product[i].prodID)
                    {
                        cout << "\nProduct Record Identified! :" << endl;
                        cout << "Product Name: " << product[i].prodName << endl;
                        cout << "Product ID  : " << product[i].prodID << endl;
                        cout << "Quantity    : " << product[i].quantity << " units" << endl;
                        cout << "Price/Unit  : " << product[i].price << endl;
                        cout << "Total Value : " << (product[i].quantity * product[i].price) << "\n" << endl;
                        break;
                    }
                     cout << "\nError: Product ID not found in database.\n" << endl;
                }
                break;
            }
            case 4:
            {
                cout << "\nClosing inventory management system. Goodbye!" << endl;
                break;
            }
            default:
                cout << "\nInvalid choice input! Choose amongst 1 to 4" << endl;
                break;
        }
    } while (choice != 4);
    return 0;
}