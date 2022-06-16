#include <iostream>
using namespace std;

int main()
{
  int width = 28;
  int height = 15;
  int spaces = 0;

  cout << "\n";
  for (int y = 0; y < height; y++)
  {
    for (int x = 0; x < width; x++)
    {
      if (x < width / 2.5 && y < height / 2 + 1)
      {
        cout << "🔵";
        if (y % 2 != 0)
        {
          if (x % 2 != 0)
          {
            cout << "*";
            spaces++;
          }
        }
        else
        {
          if (x % 2 == 0)
          {
            cout << "*";
            spaces++;
          }
        }
      }
      else if (y % 2 == 0)
      {
        cout << "🔴";
      }
      else
      {
        cout << "⚪";
      }

      if (spaces == 0)
      {
        cout << " ";
        cout << " ";
      }
      else
      {
        cout << " ";
      }
      spaces = 0;
    }
    cout << "\n";
  }
  cout << "\n";
}