#include <iostream>
#include <math.h>
using namespace std;

// found function
bool Armstrong(int i)
{
  int a, b;
  int step;
  int amountOfNumber = 0;
  int sum = 0;
  a = b = i;

  while (a)
  {
    a /= 10;
    amountOfNumber++;
  }

  step = pow(10, amountOfNumber - 1);
  while (b)
  {
    sum += int(pow(double(b % 10), double(amountOfNumber)));
    b /= 10;
    step /= 10;
  }

  if (sum == i)
    return true;
  return false;
}

int main()
{
  // 1)
  for (int i = 1; i < 10; i++)
  {
    for (int j = 1; j < 10; j++)
    {
      cout << i * j << " ";
    }
    cout << "\n";
  }

  // 2)
  int digit;
  cout << "Enter digit: ";
  cin >> digit;

  int ourDigit = digit;
  int newDigit = 0;

  while (digit > 0)
  {
    int discharge = digit % 10;
    newDigit = newDigit * 10 + discharge;
    digit = digit / 10;
  }

  if (newDigit == ourDigit)
    cout << "Palindrom"
         << "\n";
  else
    cout << "Not palindrom"
         << "\n";

  // 3)
  int A;
  int B;
  int C;

  cout << "Enter height: ";
  cin >> A;
  cout << "Enter width: ";
  cin >> B;
  cout << "Enter length: ";
  cin >> C;

  for (int i = 0; i < B / 2; i++)
    cout << ' ';
  for (int i = 0; i < C; i++)
    cout << '*';

  for (int i = 1; i < B / 2; i++)
  {
    cout << "\n";
    for (int j = 0; j < B / 2 - i; j++)
      cout << ' ';
    cout << '*';
    for (int j = 1; j < i; j++)
      cout << ' ';
    cout << '*';
    for (int j = 2; j < C / 2; j++)
      cout << ' ';
    for (int j = 0; j < C / 2 - i; j++)
      cout << ' ';
    cout << '*';
    for (int j = 1; j < i; j++)
      cout << ' ';
    cout << '*';
  }
  cout << "\n";
  for (int i = 0; i < C; i++)
    cout << '*';
  for (int i = 1; i < B / 2; i++)
    cout << ' ';
  cout << '*';

  for (int i = 2; i < A / 2; i++)
  {
    cout << "\n";
    cout << '*';
    for (int j = 1; j < B / 2; j++)
      cout << ' ';
    cout << '*';
    for (int j = 2; j < C - B / 2; j++)
      cout << ' ';
    cout << '*';
    for (int j = 1; j < B / 2; j++)
      cout << ' ';
    cout << '*';
  }

  cout << "\n";
  cout << '*';
  for (int i = 1; i < B / 2; i++)
    cout << ' ';
  for (int i = 0; i < C; i++)
    cout << '*';

  for (int i = 0; i < B / 2 - 1; i++)
  {
    cout << "\n";
    cout << '*';
    for (int j = 2; j < B / 2 - i; j++)
      cout << ' ';
    cout << '*';
    for (int j = 1; j < C - B / 2 + i; j++)
      cout << ' ';
    cout << '*';
    for (int j = 2; j < B / 2 - i; j++)
      cout << ' ';
    cout << '*';
  }
  cout << "\n";
  for (int i = 0; i < C; i++)
    cout << '*';
  return 0;

  // 4)
  int counter = 0;
  int number = 0;

  for (int i = 2; i <= 10000000; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      if (i % j == 0)
      {
        number++;
      }
    }
    if (number == 2)
    {
      cout << i << endl;
      counter++;
    }
    number = 0;
  }
  cout << "There are " << counter << " prime numbers\n";

  // 5)
  for (int i = 1; i <= 10000000; i++)
  {
    if (Armstrong(i))
      cout << i << "\n";
  }
}