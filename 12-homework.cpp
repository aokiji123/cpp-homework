#include <iostream>
using namespace std;

int main() {
  // 1)
  int startRange;
  int endRange;
  double fahrenheit;

  cout << "Enter the start and the end of the range: ";
	cin >> startRange;
  cin >> endRange;

	while (startRange <= endRange) {
		fahrenheit = (startRange * 1.8) + 32;
		cout << fahrenheit << "\n";
		startRange++;
	}

  // 2)
  int number;
  int discharge;
  int reversedNumber;

  cout << "Enter a number that should be reversed: ";
  cin >> number;

  while (number != 0) {
    discharge = number % 10;
    reversedNumber = (reversedNumber * 10) + discharge;
    number = number / 10;
  }

  cout << "Reversed number: " << reversedNumber << "\n";

  // 3)
  int number;
	int indexNumber = 1;

	cout << "Enter the number: ";
	cin >> number;

	while (indexNumber <= number) {
		if (number % indexNumber == 0) {
			cout << indexNumber << "\n";
		}
		indexNumber++;
	}
}
