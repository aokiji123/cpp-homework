#include <iostream>
using namespace std;

int main()
{
  srand(time(0));

  // 1
  int arraySize = 5;
  int *array1 = new int[arraySize];
  int *array2 = new int[arraySize];

  for (int i = 0; i < arraySize; i++)
  {
    *(array1 + i) = rand() % 1000;
  }
  cout << "First array: ";
  for (int i = 0; i < arraySize; i++)
  {
    cout << *(array1 + i) << " ";
  }
  for (int i = 0; i < arraySize; i++)
  {
    *(array2 + i) = *(array1 + i);
  }
  cout << "\n";
  cout << "Second array: ";
  for (int i = 0; i < arraySize; i++)
  {
    cout << *(array2 + i) << " ";
  }
  cout << "\n";

  // 2
  int arraySize = 5, index;
  int *array = new int[arraySize];
  for (int i = 0; i < arraySize; i++)
  {
    *(array + i) = rand() % 1000;
    cout << *(array + i) << " ";
  }
  for (int i = 0; i < arraySize / 2; i++)
  {
    index = *(array + i);
    *(array + i) = *(array + arraySize - i - 1);
    *(array + arraySize - i - 1) = index;
  }
  cout << "\n";
  for (int i = 0; i < arraySize; i++)
  {
    cout << *(array + i) << " ";
  }
  cout << "\n";

  // 3
  int arraySize = 5;
  int *array1 = new int[arraySize];
  int *array2 = new int[arraySize];
  for (int i = 0; i < arraySize; i++)
  {
    *(array1 + i) = rand() % 1000;
  }
  for (int i = 0; i < arraySize; i++)
  {
    *(array2 + i) = *(array1 + arraySize - 1 - i);
  }
  cout << "First array: ";
  for (int i = 0; i < arraySize; i++)
  {
    cout << *(array1 + i) << " ";
  }
  cout << "\n";
  cout << "Second array ";
  for (int i = 0; i < arraySize; i++)
  {
    cout << *(array2 + i) << " ";
  }
  cout << "\n";
}