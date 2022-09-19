#include <iostream>
#include <vector>
using namespace std;

void Options();

vector<vector<int>> fillRandomly(int width, int height);
vector<vector<int>> fillZeroes(int width, int height);
vector<vector<int>> fillCin(int width, int height);

void showNumber(vector<vector<int>> array, int width, int height);
int sumOfElements(vector<vector<int>> array, int width, int height);
int minElement(vector<vector<int>> array, int width, int height);
int maxElement(vector<vector<int>> array, int width, int height);
double averageOfElements(vector<vector<int>> array, int width, int height);

int main()
{
  Options();

  vector<vector<int>> numbers;
  int width;
  int height;

  cout << "Enter width: ";
  cin >> width;
  cout << "Enter height: ";
  cin >> height;

  numbers = fillRandomly(width, height);
  showNumber(numbers, width, height);

  numbers = fillZeroes(width, height);
  showNumber(numbers, width, height);

  numbers = fillCin(width, height);
  showNumber(numbers, width, height);

  int sum = sumOfElements(numbers, width, height);
  cout << "Sum: " << sum << "\n";

  int min = minElement(numbers, width, height);
  cout << "Min: " << min << "\n";

  int max = maxElement(numbers, width, height);
  cout << "Max: " << max << "\n";

  double average = averageOfElements(numbers, width, height);
  cout << "Average: " << average << "\n";
}

void Options()
{
  srand(time(0));
}

vector<vector<int>> fillRandomly(int width, int height)
{
  vector<vector<int>> array;
  for (int y = 0; y < height; y++)
  {
    vector<int> row;
    for (int x = 0; x < width; x++)
    {
      row.push_back(rand() % 100);
    }
    array.push_back(row);
  }
  return array;
}

vector<vector<int>> fillZeroes(int width, int height)
{
  vector<vector<int>> array;
  for (int y = 0; y < height; y++)
  {
    vector<int> row;
    for (int x = 0; x < width; x++)
    {
      row.push_back(0);
    }
    array.push_back(row);
  }
  return array;
}

vector<vector<int>> fillCin(int width, int height)
{
  vector<vector<int>> array;
  for (int y = 0; y < height; y++)
  {
    vector<int> row;
    for (int x = 0; x < width; x++)
    {
      int number;
      cin >> number;
      row.push_back(number);
    }
    array.push_back(row);
  }
  return array;
}

void showNumber(vector<vector<int>> array, int width, int height)
{
  for (int y = 0; y < height; y++)
  {
    for (int x = 0; x < width; x++)
    {
      cout << array[y][x] << "\t";
    }
    cout << "\n";
  }
}

int sumOfElements(vector<vector<int>> array, int width, int height)
{
  int sum = 0;
  for (int y = 0; y < height; y++)
  {
    for (int x = 0; x < width; x++)
    {
      sum += array[y][x];
    }
  }
  return sum;
}

int minElement(vector<vector<int>> array, int width, int height)
{
  int min = array[0][0];
  for (int y = 0; y < height; y++)
  {
    for (int x = 0; x < width; x++)
    {
      if (min > array[y][x])
      {
        min = array[y][x];
      }
    }
  }
  return min;
}

int maxElement(vector<vector<int>> array, int width, int height)
{
  int max = array[0][0];
  for (int y = 0; y < height; y++)
  {
    for (int x = 0; x < width; x++)
    {
      if (max < array[y][x])
      {
        max = array[y][x];
      }
    }
  }
  return max;
}

double averageOfElements(vector<vector<int>> array, int width, int height)
{
  double average = double(sumOfElements(array, width, height) / (width * height));
  return average;
}