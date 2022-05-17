#include <iostream>
using namespace std;

// 1)
int main() {
    double a = 10;
    double b = 15;
    double c;

    c = a;
    a = b;
    b = c;

    cout << "a: " << a << "\n";
    cout << "b: " << b << "\n";

    // a: 15
    // b: 10
}

// 2)
int main() {
    double a = 10;
    double b = 15;
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    cout << "a: " << a << "\n";
    cout << "b: " << b << "\n";
    
    // a: 15
    // b: 10
}