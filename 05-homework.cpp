#include <iostream>
using namespace std;

int main() {
    // 1)
    double firstNumber;
    cout << "Enter first number: ";
    cin >> firstNumber;

    double secondNumber;
    cout << "Enter second number: ";
    cin >> secondNumber;

    int intSum = firstNumber + secondNumber;
    float floatSum = firstNumber + secondNumber - intSum;

    cout << "Sum of integers = " << intSum << "\n";
    cout << "Sum of fractions = " << floatSum << "\n";

    // 2)
    double S;
    double t;
    double V;

    cout << "Enter S in km: ";
    cin >> S;

    cout << "Enter t in minutes: ";
    cin >> t;

    t /= 60;
    V = S / t;

    cout << "You need to drive with speed " << V << "km per hour\n";

    // 3)
    double seconds;
    cout << "Time, gone from the beginning of the day: ";
    cin >> seconds;

    double jobTime = 8 * 60 * 60;

    if (seconds >= jobTime) {
        cout << "Work is finished";
    } else {
        cout << "You have left to sit at work for another " << (jobTime - seconds) / 60 / 60 << " hours\n";
    }
    
    // 4)
    double cost;
    double laptops;
    double discount;

    cout << "Enter the cost of one laptop: ";
    cin >> cost;
    cout << "Enter how many laptops are you buying: ";
    cin >> laptops;
    cout << "Enter the discount: ";
    cin >> discount;

    double price = (cost * laptops) - ((cost * laptops) * (discount / 100));
    cout << "Your final cost: " << price << "\n";

    // 5)
    double filmSize;
    double internetSpeed;

    cout << "Enter the film size in gb: ";
    cin >> filmSize;
    cout << "Enter the internet speed in bytes per second: ";
    cin >> internetSpeed;

    internetSpeed = internetSpeed *  0.000000000125; // 1.25 x 10^-10

    int seconds;
    int minutes;
    int hours;

    seconds = filmSize / internetSpeed;

    hours = seconds / 3600;
	minutes = (seconds - hours * 3600) / 60;
	seconds = seconds - (hours * 3600 + minutes * 60);

    cout << hours << " hours " << minutes << " minutes " << seconds << " seconds\n";
} 