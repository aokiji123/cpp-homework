#include <iostream>
using namespace std;

// 1) Среднее арифметическое
int main() {
    float firstNumber;
    float secondNumber;
    float thirdNumber;

    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> secondNumber;
    cout << "Enter third number: ";
    cin >> thirdNumber;

    float average = (firstNumber + secondNumber + thirdNumber) / 3;
    cout << "Average: " << average << "\n";
}

// 2) Корень уравнения
int main() {
    float a;
    float b;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    float result = -(b) / a;

    cout << "Result: " << result << "\n";
}

// 3) Площадь и длинна окружности
int main() {
    const float pi = 3.14;
    float radius;

    cout << "Enter radius of the circle: ";
    cin >> radius;

    float circumference = 2.0 * pi * radius; // длина
    float circleArea = pi * (radius * radius); // площадь

    cout << "Circumference: " << circumference << "\n";
    cout << "Circle area: " << circleArea << "\n";
}

// 4) Километры в мили
int main() {
    
    float km;

    cout << "Enter km: ";
    cin >> km;

    double landMile = km / 1.609;
    double seaMile = km / 1.853;

    cout <<"Your km in land miles: " << landMile << "\n";
    cout <<"Your km in sea miles: " << seaMile << "\n";
   
}