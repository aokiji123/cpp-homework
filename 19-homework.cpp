#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  // 1)
  const int size = 10;
  int numbers[size] = {};

  srand(time(0));
  rand();

  cout << "1) ";
  for (int i = 0; i < size; i++) // randomizing numbers in array
  {
    numbers[i] = rand();
    cout << numbers[i] << "; ";
  }
  cout << "\n\n";

  reverse(numbers, numbers + size); // reversing array
  cout << "2) ";
  for (int i = 0; i < size; i++) // array output
  {
    cout << numbers[i] << "; ";
  }
  cout << "\n\n";

  // 2)
  int numbersA[5] = {1, 2, 3, 4, 5};
  int numbersB[5] = {1, 2, 3, 4, 5};
  int numbersC[10] = {}; // output need to be 1 1 2 2 3 3 4 4 5 5

  for (int i = 0, j = 0; i < 10; i += 2, j++)
  {
    numbersC[i] = numbersA[j];
  }
  for (int i = 1, j = 0; i < 10; i += 2, j++)
  {
    numbersC[i] = numbersB[j];
  }
  cout << "\n";

  for (int i = 0; i < 10; i++)
  {
    cout << numbersC[i] << " ";
  }
  cout << "\n\n";

  // 3)
  const int size = 20;
  int numbers[size] = {1, 5, -3, 6, 0, 0, 2, -6, -5, 2, 5, 0, 6, 5, 9, -5, 7, 0, -1, 3};
  int numbersNew[size] = {}, index = 0;

  cout << "\n";
  for (int i = 0; i < size; i++)
    cout << numbers[i] << " "; // array output
  cout << "\n";
  for (int i = 0; i < size; i++)
  {
    if (numbers[i] > 0)
    {
      numbersNew[index] = numbers[i]; // positive numbers from the array
      index++;
    }
  }
  for (int i = 0; i < size; i++)
  {
    if (numbers[i] == 0)
    {
      numbersNew[index] = numbers[i]; // zeroes from the array
      index++;
    }
  }
  for (int i = 0; i < size; i++)
  {
    if (numbers[i] < 0)
    {
      numbersNew[index] = numbers[i]; // negative numbers from the array
      index++;
    }
  }
  for (int i = 0; i < size; i++)
    cout << numbersNew[i] << " "; // new array output
  cout << "\n\n";
}