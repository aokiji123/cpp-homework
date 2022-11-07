#include <iostream>
using namespace std;

struct Date
{
  int day;
  int month;
  int year;
};

// 1)
struct Phone
{
  string type;
  string material;
  string name;
  Date creationDate;
  double weight;
  bool isItOld;
  bool isItSmall;
};

// 2)
struct Laptop
{
  string type;
  string material;
  string name;
  Date creationDate;
  double weight;
  bool isItNew;
  bool isItBig;
};

// 3)
struct myCat
{
  string type;
  string breed; // порода
  string name;
  string color;
  Date birthday;
  int age;
  int weight;
  int length;
  bool isHeAngry;
  bool isHeFunny;
  bool isHeFluffy;
};

// 4)
struct Pen
{
  string type;
  string name;
  string penColor;
  string inksColor;
  double length;
  double weight;
  bool isItHelium;
};

// 5)
struct Flat
{
};

int main()
{
}