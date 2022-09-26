#include <iostream>
using namespace std;

int recursion(int number);

int main()
{
  int function = recursion(10);
}

int recursion(int number)
{
  if (0 < number)
  {
    cout << number << "\n";
    return recursion(number - 1);
  }
  return true;
}