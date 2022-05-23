#include <iostream>
using namespace std;

int main() {
    // 1)   
    char symbol;
    cout << "Enter something: ";
    cin >> symbol;

    if (symbol >= 48 && symbol <= 57) {
        cout << "This is a number \n";
    } else if (symbol >= 65 && symbol <= 122) {
        cout << "This is a letter \n";
    } else {
        cout << "This is a symbol \n";
    }
    
    // 2)
    int number;

    cout << "Enter your number: ";
    cin >> number;

    if (number % 3 == 0 && number % 5 == 0 && number % 7 == 0) {
        cout << "This number is a multiple of 3, 5 and 7\n";
    } else {
        cout << "This number isn\'t a multiple of 3, 5 and 7\n";
    }
        
    // 3)
    int number;
    cout << "Enter your number: ";
    cin >> number;

    int index = 0;
    while (number > 0) {
        number /= 10;
        index++;
    }

    cout << "Your number has " << index << " digits\n";
    
    // 4)
    int n, number, digit, reverse = 0;
    cout << "Enter a positive number: ";
    cin >> number;

    n = number;

    do {
        digit = number % 10;
        reverse = (reverse * 10) + digit;
        number /= 10;
    } while (number != 0);

    if (n == reverse) cout << "The number is a palindrome\n";
    else cout << "The number is not a palindrome\n";
    
    // 5)
    double leftCornerX, leftCornerY, rightCornerX, rightCornerY, x, y;
    cout << "Enter X coordinate of left upper corner: ";
    cin >> leftCornerX;
    cout << "Enter Y coordinate of left upper corner: ";
    cin >> leftCornerY;

    cout << "Enter X coordinate of right lower corner: ";
    cin >> rightCornerX;
    cout << "Enter Y coordinate of right lower corner: ";
    cin >> rightCornerY;

    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    if (((x >= leftCornerX && x <= rightCornerX) || (x <= leftCornerX && x >= rightCornerX)) && ((y >= leftCornerY && y <= rightCornerY) || (y <= leftCornerY && y >= rightCornerY))) {
        cout << "Dot is in the rectangle\n";
    } else {
        cout << "Dot isn't in the rectangle\n";
    }
}
