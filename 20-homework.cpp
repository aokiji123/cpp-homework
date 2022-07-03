#include <iostream>
#include <iomanip>
using namespace std;

int random(int min, int max)
{
  int k = max - min + 1;
  return min + rand() % k;
}

int main()
{
  // 1)
  int numbers[5][4] = {};
  while (true)
  {
    srand(time(0));
    for (int i = 0; i < 5; i++)
    {
      for (int j = 0; j < 4; j++)
      {
        numbers[i][j] = random(0, 100);
        if (numbers[i][j] < 10)
          cout << numbers[i][j] << "  ";
        else
          cout << numbers[i][j] << " ";
      }
      cout << "\n";
    }
    break;
  }

  // 2)
  // ----------left----------- //
  char stars[5][5] = {};
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      stars[i][j] = '*';
      if (i <= 5 - 1 - j)
      {
        stars[i][j] = '*';
        cout << stars[i][j] << " ";
      }
      else
        cout << "  ";
    }
    cout << "\n";
  }
  // ---------right---------- //
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (i <= j)
      {
        stars[i][j] = '*';
        cout << stars[i][j] << " ";
      }
      else
        cout << "  ";
    }
    cout << "\n";
  }
}