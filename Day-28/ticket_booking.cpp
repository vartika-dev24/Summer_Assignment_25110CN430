#include <iostream>
#include <string>
using namespace std;
struct TicketSystem
{
    string eventName;
    int bookingID;
    int seatsBooked;
};

int main()
{
    TicketSystem booking[20]; 
    int choice;
    int total = 0; 
    do
    {   cout <<"xxxxx Ticket Booking System xxxxx" << endl;
        cout <<"1. Book a new ticket" << endl;
        cout <<"2. Display all bookings" << endl;
        cout <<"3. Cancel a ticket booking" << endl;
        cout <<"4. Exit booking system" << endl;
        cout <<"Enter your choice(1/2/3/4): ";
        cin >> choice;
        switch (choice)
        {
            case 1:
            {
                if (total>=20)
                {
                    cout << "System booking capacity full" << endl;
                    break;
                }

                cout << "Enter name of the event: ";
                cin.ignore();
                getline(cin, booking[total].eventName);
                cout << "Enter a unique Booking ID: ";
                cin >> booking[total].bookingID;

                cout << "Enter number of seats to reserve: ";
                cin >> booking[total].seatsBooked;

                cout << "Tickets reserved successfully!\n" << endl;
                total++;
                break;
            }
            case 2:
            {
                if (total == 0)
                {
                    cout << "\nNo reservations found in the system." << endl;
                    break;
                }

                cout << "\n--- ACTIVE RESERVATIONS LIST ---" << endl;
                for (int i = 0; i < total; i++)
                {
                    cout<<"\nTicket " << i + 1 << " :" << endl;
                    cout<<"Event Name: " << booking[i].eventName << endl;
                    cout<<"Booking ID      : " << booking[i].bookingID << endl;
                    cout<<"Seats Reserved  : " << booking[i].seatsBooked << "\n" << endl;
                }
                break;
            }
            case 3:
            {
                if (total==0)
                {
                    cout << "\nNo bookings to cancel." << endl;
                    break;
                }

                int id;
                cout<<"\nEnter Booking ID to cancel: ";
                cin>>id;

                for (int i = 0; i < total; i++)
                {
                    if (id== booking[i].bookingID)
                    {
                        for (int j = i; j < total - 1; j++)
                        {
                            booking[j] = booking[j + 1];
                        }
                    
                        total--;
                        cout << "Booking ID " <<id<< " successfully canceled.\n" << endl;
                        break;
                    }
                     cout << "\nBooking ID not found.\n" << endl;
                }
                break;
            }
            case 4:
            {
                cout << "\nShutting down reservation system." << endl;
                break;
            }
            default:
                cout << "\nInvalid choice input! Choose amongst 1 to 4" << endl;
                break;
        }

    } while (choice != 4);
    return 0;
}