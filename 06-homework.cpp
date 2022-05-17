#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // 1)
    double number;

    cout << "Enter number: ";
    cin >> number;
    cout << round(number * 100) / 100 << "\n";

    // 2)
    double whoPassed, whoNotPassed;

    cout << "Enter how many passed: ";
    cin >> whoPassed;
    cout << "Enter how many didn't pass: ";
    cin >> whoNotPassed;

    double percent = (whoNotPassed * 100) / (whoPassed + whoNotPassed);
    cout << percent << "% of class didn't pass their homework" << "\n";

    // 3)
    int time, allSeconds, hours, minutes, seconds;

    cout << "Time gone from the beginning of the day: ";
    cin >> time;

    int allDay = 24 * 3600;
    if (allDay <= time) {
        cout << "It is night already" << "\n";
    } else {
        allSeconds = allDay - time;
        hours = allSeconds / 60 / 60;
        minutes = allSeconds / 60 % 60;
        seconds = allSeconds % 60;
        cout << hours << "hours " << minutes << "minutes " << seconds << "seconds until midnight \n";
    }

    // 4)
    double grnSum, yearPercent, finalSum;
    int months;
    
    cout << "Enter grns: ";
    cin >> grnSum;
    cout << "Enter the deposit term in months: ";
    cin >> months;
    cout << "Enter the percentage for the year: ";
    cin >> yearPercent;

    finalSum = grnSum + grnSum * yearPercent * int(months / 12) / 100;
    cout << finalSum << endl;

    // 5)
    float equatorialRadius = 6378.1, polarRadius = 6356.8;
    const float p = 1.6;
    const double pi = 3.14;
    long long S;
    
    S = 4 * pi * pow((pow(equatorialRadius, p) * pow(equatorialRadius, p) / 3 + 2 * pow(polarRadius, p) * pow(equatorialRadius, p) / 3), 1 / p);
    cout << "Earth area = " << S << " km²" << "\n";

    // or just can do this
    cout << "Earth area = 509805777 km² and it's an accepted fact :)\n";
}