#include <iostream>
using namespace std;

// function found on the internet
int random(int min, int max) {
  int index = max - min + 1;
  return rand() % index + min;
}

int main() {
  // 1)
  int num;
  cin >> num;
    
  for (int i = 2; i < num; i++) {
    if (num % i == 0) {
      cout << "Number is not prime\n";
      return 0;
    }
  }
  cout << "Number is prime\n";

  // 2)
  int num;
  cin >> num;

  while (num >= 10) {
    if ((num % 100) % 11 == 0) {
      cout << "Yes\n";
      return 0;
    } else num /= 10;
  }
  if (num < 10) cout << "No\n";

  // 3)
  int num; 
  cout << "Enter number: "; 
  cin >> num; 
  
  for (; num > 0; num /= 10) { 
    if (num % 10 < num / 10 % 10) {
      cout << "Digits in number aren't disposing in non-decreasing order \n";
      return 0;
    } else {
      cout << "Digits in number are disposing in non-decreasing order \n"; 
  	  return 0;
    }
  } 

  // 4)
  int count = 0;
  int max = 100000000;
  
  for (int number = 10000000; number < max; number++) {
    if (number % 12345 == 0) {
      count += 1;
      cout << number << "\n";
    }
  }
  cout << "Total number of digits: " << count << "\n";
  // not done

  // 5)
  for (;;) {
    int randomNumber;
    int positivePercents = 0;
    int negativePercents = 0;
    int zeroPercents = 0;
    int evenPercents = 0;
    int oddPercents = 0;

    srand(time(0));
    for (int i = 1; i <= 100; i++) {
      randomNumber = random(-100, 100);

      if (randomNumber > 0) positivePercents++;
      else if (randomNumber < 0) negativePercents++;
      else zeroPercents++;
      
      if (randomNumber % 2 == 0) evenPercents++;
      else oddPercents++;
    }

    cout << "Percent of positive: " << positivePercents << "\n";
    cout << "Percent of negative: " << negativePercents << "\n";
    cout << "Percent of zero: " << zeroPercents << "\n";
    cout << "Percent of even: " << evenPercents << "\n";
    cout << "Percent of odd: " << oddPercents << "\n";
    return 0;
  }
}