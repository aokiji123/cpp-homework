#include <iostream>
#include <cmath>
using namespace std;

int random(int min, int max)
{
  int k = max - min + 1;
  return min + rand() % k;
}

int main()
{
  // 1)
  // const int size = 5;
  // int arr[size];

  // cout << "Enter 5 number: ";
  // for (int i = 0; i < size; i++)
  //   cin >> arr[i];

  // for (int i = size - 1; i >= 0; i--)
  //   cout << arr[i] << " ";
  // cout << "\n";

  // 2)
  // const int size = 20;
  // int number[size] = {};

  // srand(time(0));
  // rand();

  // for (int i = 0; i < size; i++)
  // {
  //   number[i] = rand();
  //   if (i % 2 == 0)
  //   {
  //     cout << number[i] << "\n";
  //   }
  // }
  // cout << "\n";

  // 3)
  // const int size = 10;
  // int number[size] = {};
  // int amount = 0;
  // int sum = 0;
  // int average;
  // while (true)
  // {
  //   srand(time(0));
  //   for (int i = 0; i < size; i++)
  //   {
  //     number[i] = random(-20, 20);
  //     if (number[i] > 0)
  //     {
  //       sum += number[i];
  //       amount++;
  //     }
  //   }
  //   break;
  // }
  // average = double(sum / amount);
  // cout << "Amount of positive numbers: " << amount << "\n";
  // cout << "Sum of positive numbers: " << sum << "\n";
  // cout << "Average of positive numbers: " << average << "\n";

  // 4)
  // const int size = 100;
  // int symbol[size] = {};
  // int letters = 0, numbers = 0, chars = 0;
  // while (true)
  // {
  //   srand(time(0));
  //   for (int i = 0; i < size; i++)
  //   {
  //     symbol[i] = random(0, 127);
  //     if (symbol[i] >= 48 && symbol[i] <= 57)
  //       numbers++;
  //     else if ((symbol[i] >= 65 && symbol[i] <= 90) || (symbol[i] >= 97 && symbol[i] <= 122))
  //       letters++;
  //     else
  //       chars++;
  //   }
  //   break;
  // }
  // cout << "Letters: " << letters << "%\n";
  // cout << "Numbers: " << numbers << "%\n";
  // cout << "Symbols: " << chars << "%\n";

  // 5)
  // int personInput;
  // int counter = 0;
  // const int size = 100;
  // int number[size] = {};

  // cout << "Enter your number: ";
  // cin >> personInput;

  // srand(time(0));
  // rand();

  // for (int i = 0; i < size; i++)
  // {
  //   number[i] = rand();
  //   if (personInput == i)
  //   {
  //     counter++;
  //   }
  // }
  // cout << "Your number is repeating " << counter << " times\n";

  // 6)
  // const int size = 20;
  // int number[size] = {};
  // int counter;
  // int sum = 0;
  // while (true)
  // {
  //   srand(time(0));
  //   for (int i = 0; i < size; i++)
  //   {
  //     number[i] = random(-10, 30);
  //     if (number[i] < 0)
  //     {
  //       counter = i;
  //       break;
  //     }
  //   }
  //   for (int i = counter; i < size; i++)
  //   {
  //     number[i] = random(-10, 30);
  //     sum += number[i];
  //   }
  //   break;
  // }
  // cout << "Sum after first negative number: " << sum << "\n";

  // 7)
  // const int size = 20;
  // int number[size] = {};
  // int max = 0, min = 0;
  // int indexMax, indexMin;
  // while (true)
  // {
  //   srand(time(0));
  //   for (int i = 0; i < size; i++)
  //   {
  //     number[i] = rand();
  //     cout << number[i] << " ";
  //     if (number[i] > max)
  //     {
  //       max = number[i];
  //       indexMax = i + 1;
  //     }
  //   }
  //   min = max;
  //   for (int i = 0; i < size; i++)
  //   {
  //     if (number[i] < min)
  //     {
  //       min = number[i];
  //       indexMin = i + 1;
  //     }
  //   }
  //   break;
  // }
  // cout << "\n";
  // cout << max << " №" << indexMax << "\n";
  // cout << min << " №" << indexMin << "\n";

  // 8)
  // const int size = 100;
  // double numbers[size] = {};
  // int index = 0;
  // int indexNumbers;

  // srand(time(0));
  // for (int i = 0; i < size; i++)
  //   numbers[i] = round(rand() / double(RAND_MAX) * 10000) / 10;

  // for (int i = 0; i < size; i++)
  // {
  //   indexNumbers = numbers[i];
  //   if (numbers[i] == indexNumbers)
  //   {
  //     index++;
  //   }
  // }
  // cout << "Int digits: " << index << "\n";

  // 9)
  // const int size = 200;
  // int numbers[size] = {};
  // int singleDigitNumbers = 0;
  // int twoDigitNumbers = 0;
  // int threeDigitNumbers = 0;
  // while (true)
  // {
  //   srand(time(0));
  //   for (int i = 0; i < size; i++)
  //   {
  //     numbers[i] = random(0, 200);
  //     if (numbers[i] / 10 == 0)
  //       singleDigitNumbers++;
  //     else if (numbers[i] / 10 > 0 && numbers[i] / 10 < 10)
  //       twoDigitNumbers++;
  //     else
  //       threeDigitNumbers++;
  //   }
  //   break;
  // }

  // singleDigitNumbers /= 2.0;
  // twoDigitNumbers /= 2.0;
  // threeDigitNumbers /= 2.0;

  // cout << "Single-digit numbers: " << singleDigitNumbers << "%"
  //      << "\n";
  // cout << "Double-digit numbers: " << twoDigitNumbers << "%"
  //      << "\n";
  // cout << "Three-digit numbers: " << threeDigitNumbers << "%"
  //      << "\n";
}