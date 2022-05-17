#include <iostream>
using namespace std;

int main() {
    // 1)
    double S, V;
    int t, hours, minutes, seconds;

    cout << "Enter S in m: ";
    cin >> S;
    cout << "Enter V in m/s: ";
    cin >> V;

    t = S / V;
    hours = t / 3600;
    minutes = (t - hours * 3600) / 60;
    seconds = t - (hours * 3600 + minutes * 60);

    cout << hours << " hours" <<"\n";
    cout << minutes << " minutes" <<"\n";
    cout << seconds << " seconds" <<"\n";

    // 2)
    double mass;
    cout << "Enter mass: ";
    cin >> mass;

    int ton = (int)mass;
    double kg = (mass - ton) * 1000;
    int gr = ((kg - (int)kg) * 1000) + 1;
    kg = int(kg);

    cout << ton << " ton" << "\n";
    cout << kg << " kg" << "\n";
    cout << gr << " gr" << "\n";

    // 3)
    int second;
    float days, hours, minutes, seconds;

    cout << "Enter number of seconds: ";
    cin >> second;

    days = second / 86400.0;
    hours = (days - int(days)) * 24;
    minutes = (hours - int(hours)) * 60;
    seconds = (minutes - int(minutes)) * 60;

    days = int(days);
    hours = int(hours);
    minutes = int(minutes);
    seconds = int(seconds);

    cout << days << " days ";
    cout << hours << " hours ";
    cout << minutes << " minutes ";
    cout << seconds << " seconds\n";

    // 4)
    int startHours, startMinutes, startSeconds;
    int endHours, endMinutes, endSeconds;

    cout << "Enter the begin time hours, minutes, seconds (like 23 03 04) ";
    cin >> startHours >> startMinutes >> startSeconds;
    cout << "Enter the end time hours, minutes, seconds (like 23 21 04) ";
    cin >> endHours >> endMinutes >> endSeconds;

    double fullStartTime = startHours * 60 + startMinutes + startSeconds / 60 + 0.5;
    double fullEndTime = endHours * 60 + endMinutes + endSeconds / 60 + 0.5;
    double cost = fullEndTime - fullStartTime;

    cout << "cost of call " << (cost * 0.3) / 2 << " UAH\n";
}