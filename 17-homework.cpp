#include <iostream>
using namespace std;

int main()
{
  // 1)
  int number;
  int length;
  int space = 0;
  cout << "Enter the number of stairs: ";
  cin >> number;
  cout << "Enter step length: ";
  cin >> length;

  cout << "\n";
  for (int i = 0; i < number; ++i)
  {
    for (int j = 0; j < length; ++j)
    {
      cout << "*";
    }
    space++;
    cout << "\n";
    for (int j = 0; j < space; j++)
    {
      cout << " ";
    }
  }
  cout << "\n";

  // 2)
  int steps;
  int counter = 0;
  cout << "Amount of stairs: ";
  cin >> steps;

  for (int i = 0; i < steps; i++)
  {
    for (int y = 0; y < counter; y++)
    {
      cout << " ";
    }
    cout << "***";
    cout << "\n";
    counter += 2;

    for (int y = 0; y < counter; y++)
    {
      cout << " ";
    }
    cout << "*";
    cout << "\n";
  }

  for (int y = 0; y < counter; y++)
  {
    cout << " ";
  }
  cout << "***";
  cout << "\n";

  // 3)
  int height, amount, number;
  int n1 = 1;
  int n2 = 0;
  int n3 = 2;
  int n4 = 0;

  cout << "Enter the height of each parts of the tree: ";
  cin >> height;
  cout << "Enter the amount of tree parts: ";
  cin >> amount;
  for (int i = 0; i < amount; i++)
  {
    number = height + amount - n3;
    n1 += n4;
    for (int i = 0; i < height; i++)
    {
      for (int j = 0; j < number - n2; j++)
      {
        cout << "  ";
      }
      for (int k = 0; k < n1; k++)
      {
        cout << "<>";
      }
      n1 += 2;
      n2 += 1;
      cout << "\n";
    }
    n1 = 1;
    n2 = 0;
    n3 += 1;
    n4 += 2;
  }
  for (int j = 0; j < 3; j++)
  {
    number = height + amount - 4;
    for (int k = 0; k < number; k++)
    {
      cout << "  ";
    }
    for (int i = 0; i < 5; i++)
    {
      cout << "<>";
    }
    cout << "\n";
  }
  cout << "\n";
}