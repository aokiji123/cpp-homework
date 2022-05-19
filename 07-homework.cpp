#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // 1)
    double length, width, height, N, M, R, roomSurfaceArea, allPrice, howMuchPaintNeed;

    cout << "Room length in metres: ";
    cin >> length;
    cout << "Room width in metres: ";
    cin >> width;
    cout << "Room height in metres: ";
    cin >> height;
    cout << "How much paint for 1m of the room: ";
    cin >> N;
    cout << "How much % is for doors and windows: ";
    cin >> M;
    cout << "How much cost 1l of paint: ";
    cin >> R;

    roomSurfaceArea = 2 * (length * width + width * height + length * height);
    roomSurfaceArea -= roomSurfaceArea * M / 100;
    howMuchPaintNeed = ceil(roomSurfaceArea * N);
    allPrice = howMuchPaintNeed * R;

    cout << "To paint the room will cost: " << allPrice << " grn\n";
    cout << "You need " << howMuchPaintNeed << " litres\n";

    // 2)
    int a, b, c;
     
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
 
    if (a < b && a < c) {
        cout << a << "\n";
    } else if (b < c) {
        cout << b << "\n";
    } else cout << c << "\n";

    // 3)
    double number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    if (number > 0) {
        cout << "Number is positive\n";
    } else if (number < 0) {
        cout << "Number is negative\n";
    } else cout << "Number is equal to zero\n";

    // 4)
    double a, b;
    char symbol;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Choose what do you want to do:\n";
    cout << "1) " << a << " + " << b << "\n";
    cout << "2) " << a << " - " << b << "\n";
    cout << "3) " << a << " * " << b << "\n";
    cout << "4) " << a << " / " << b << "\n";
    cout << "5) " << a << " % " << b << "\n";
    cin >> symbol;
    
    if (symbol != '1' && symbol != '2' && symbol != '3' && symbol != '4' && symbol != '5') {
        cout << "Incorrect number\n";
        return 0;
    }
    
    if (symbol == '1') {
        cout << a + b << "\n";
    } else if (symbol == '2') {
        cout << a - b << "\n";
    } else if (symbol == '3') {
        cout << a * b << "\n";
    } else if (symbol == '4' && b == 0) {
        cout << "You can't divide by 0\n";
    } else if (symbol == '4') {
        cout << a / b << "\n";
    } else {
        cout << int(a) % int(b) << "\n";
    }
}
