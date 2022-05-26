#include <iostream>
using namespace std;

int main() {
    // 1)
    double x1, y1, x2, y2;
    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter y1: ";
    cin >> y1;
    cout << "Enter x2: ";
    cin >> x2;
    cout << "Enter y2: ";
    cin >> y2;

    if (x1 == x2 && y1 == y2) {
        cout << "Parallel to the X and Y\n";
    }
    else if (x1 == x2) {
        cout << "Parallel to the Y\n";
    }
    else if (y1 == y2) {
        cout << "Parallel to the X\n";
    }
    else {
        cout << "Not parallel\n";
    }
    
    // 2)
    double number;

    cout << "Enter number: ";
    cin >> number;
    if (number - int(number) != 0) {
        cout << "Float\n";
    } else {
        cout << "Int\n";
    }
    
    // 3)
    int hours, minutes, seconds;

    cout << "Hours: ";
    cin >> hours;
    cout << "Minutes: ";
    cin >> minutes;
    cout << "Seconds: ";
    cin >> seconds;

    if (hours >= 24 || minutes >= 60 || seconds >= 60 || hours < 0  || minutes < 0 || seconds < 0) {
        cout << "Time isn't correct\n";
    } else{
        cout << "All is correct\n";
    }
    
    // 4)
    int ticketNumber;
    cout << "Number: ";
    cin >> ticketNumber;

    int firstPartOfTicketNumber = (ticketNumber / 100000 % 10) + (ticketNumber / 10000 % 10) + (ticketNumber / 1000 % 10);
    int secondPartOfTicketNumber = (ticketNumber / 100 % 10) + (ticketNumber / 10 % 10) + (ticketNumber % 10);

    if (firstPartOfTicketNumber == secondPartOfTicketNumber) {
        cout << "Lucky ticket\n";
    } else {
        cout << "Unlucky ticket\n";
    }
    
    // 5)
    int hourOfTheDay;
    cout << "Enter hour of the day: ";
    cin >> hourOfTheDay;

    if (hourOfTheDay >= 5 && hourOfTheDay <= 11) cout << "Good Morning\n";
    else if (hourOfTheDay >= 12 && hourOfTheDay <= 16) cout << "Good Afternoon\n";
    else if (hourOfTheDay >= 17 && hourOfTheDay <= 21) cout << "Good Evening\n";
    else if (hourOfTheDay == 22 || hourOfTheDay == 23) cout << "Good Night\n";
    else if (hourOfTheDay >= 0 && hourOfTheDay <= 4) cout << "Good Night\n";
    else cout << "Wrong input\n";
}