/*
Problem: Write a program to Create ticket booking
system.
*/

/*
Approach:
1. I will initialize total available seats.
2. Then I will take passenger details and number of seats.
3. If seats are available then I will book ticket and update remaining seats.

TC:O(Number of bookings)
SC:O(1)

*/

//code

#include <bits/stdc++.h>
using namespace std;

int main() {

    int totalSeats = 50;
    int choice;

    do {
        cout << "\n1. Book Ticket";
        cout << "\n2. Check Available Seats";
        cout << "\n3. Exit";
        cout << "\nEnter Your Choice" << endl;
        cin >> choice;

        if (choice == 1) {
            string name;
            int seats;

            cout << "Enter Passenger Name" << endl;
            cin >> name;

            cout << "Enter Number of Seats" << endl;
            cin >> seats;

            if (seats <= 0) {
                cout << "Invalid Number of Seats" << endl;
            } else if (seats > totalSeats) {
                cout << "Seats Not Available" << endl;
            } else {
                totalSeats -= seats;
                cout << "Ticket Booked Successfully for " << name << endl;
                cout << "Remaining Seats: " << totalSeats << endl;
            }
        } else if (choice == 2) {
            cout << "Available Seats: " << totalSeats << endl;
        } else if (choice == 3) {
            cout << "Thank You";
        } else {
            cout << "Invalid Choice" << endl;
        }
    } while (choice != 3);

    return 0;
}
