#include <iostream>
using namespace std;

int random(int min, int max)
{
  int k = max - min + 1;
  return min + rand() % k;
}

int main()
{
  srand(time(0));
  rand();

  int counter = 0;
  int M, N;
  int k;

  cin >> M;
  cin >> N;
  cin >> k;

  int array[M][N];

  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j < N; j++)
    {
      array[i][j] = random(0, 1);
    }
  }

  cout << "\n";
  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j < N; j++)
    {
      cout << array[i][j] << " ";
    }
    cout << "\n";
  }

  cout << "\n";
  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if (array[i][j] == 0)
      {
        counter++;
        if (counter == k)
        {
          cout << "You can buy tickets"
               << "\n";
        }
      }
      else
      {
        counter = 0;
        cout << "You can't buy tickets"
             << "\n";
      }
    }
    cout << "\n";
  }
}