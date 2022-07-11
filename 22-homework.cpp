#include <iostream>
using namespace std;

// 1)
void ShowLine(int amount, char sign, bool choose)
{
  if (choose == true)
  {
    for (int i = 0; i < amount; i++)
    {
      cout << sign;
    }
    cout << "\n";
  }
  else
  {
    for (int i = 0; i < amount; i++)
    {
      cout << sign << endl;
    }
    cout << "\n";
  }
}

// 2)
double cubeOfTheNumber(int number)
{
  return number * number * number; // or pow(number, 3)
}

// 3)
void isNumberPrime(int number)
{
  int counter = 0;
  for (int i = 1; i <= number; i++)
  {
    if (number % i == 0)
      counter++;
  }
  if (counter == 2)
    cout << "It's a prime number"
         << "\n";
  else
    cout << "It's not a prime number"
         << "\n";
}

int main()
{
  // 1)
  ShowLine(20, '@', true);

  // 2)
  cout << cubeOfTheNumber(3) << "\n";

  // 3)
  isNumberPrime(18);
}