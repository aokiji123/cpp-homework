#include <iostream>
#include <stdio.h>
using namespace std;

void addColumn(int **arr, int rows, int cols, int index);
void delColumn(int **arr, int rows, int cols, int index);
bool isSymbols(string str);

int main()
{

  // 1)
  int rows = 5;
  int columns = 5;
  int **array = new int *[rows];
  for (int i = 0; i < rows; i++)
  {
    array[i] = new int[columns];
  }
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      array[i][j] = i * columns + j;
    }
  }
  cout << "First array: "
       << "\n";
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      cout << array[i][j] << "\t";
    }
    cout << "\n";
  }

  addColumn(array, rows, columns, 3);
  columns++;

  cout << "New array: "
       << "\n";
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      cout << array[i][j] << "\t";
    }
    cout << "\n";
  }
  for (int i = 0; i < rows; i++)
  {
    delete[] array[i];
  }
  delete[] array;
  cout << "\n";

  // 2)
  int rows = 5;
  int columns = 5;
  int **array = new int *[rows];
  for (int i = 0; i < rows; i++)
  {
    array[i] = new int[columns];
  }
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      array[i][j] = i * columns + j;
    }
  }
  cout << "First array: "
       << "\n";
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      cout << array[i][j] << "\t";
    }
    cout << "\n";
  }

  delColumn(array, rows, columns, 3);
  columns--;

  cout << "New array: "
       << "\n";
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    {
      cout << array[i][j] << "\t";
    }
    cout << "\n";
  }
  for (int i = 0; i < rows; i++)
  {
    delete[] array[i];
  }
  delete[] array;
  cout << "\n";

  // 3)
  int answer;
  int count = 1, info = 2;
  string **db = new string *[count];
  for (int i = 0; i < info; i++)
  {
    db[i] = new string[info];
  }
  do
  {
    cout << "What do you want to do?"
         << "\n"
         << "1. Add new data"
         << "\n"
         << "2. Search data"
         << "\n"
         << "3. See all data"
         << "\n"
         << "4. Exit"
         << "\n";
    cin >> answer;
    if (answer == 1)
    {
      string name, phone;
      do
      {
      newDate:
        cout << "Enter new name: ";
        cin >> name;
        cout << "Enter new phone: ";
        cin >> phone;
        if (phone[0] != '+')
        {
          goto newDate;
        }
      } while (isSymbols(phone));
      db[count - 1][0] = name;
      db[count - 1][1] = phone;
      count++;
    }
    else if (answer == 2)
    {
      string name, phone;
      do
      {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter phone: ";
        cin >> phone;
      } while (phone[1] != '+' && isSymbols(phone));
      for (int i = 0; i < count; i++)
      {
        if (db[i][0] == name && db[i][1] == phone)
        {
          char ans;
        question:
          cout << "Do you want to change data? (y / n): ";
          cin >> ans;
          if (ans == 'n')
          {
            cout << "Ok"
                 << "\n";
            break;
          }
          else if (ans == 'y')
          {
            string newName, newPhone;
            do
            {
            updateDate:
              cout << "Enter new name: ";
              cin >> newName;
              cout << "Enter new phone: ";
              cin >> newPhone;
              if (newPhone[0] != '+')
              {
                goto updateDate;
              }
            } while (isSymbols(newPhone));
            db[i][0] = newName;
            db[i][1] = newPhone;
            break;
          }
          else
          {
            goto question;
          }
        }
      }
    }
    else if (answer == 3)
    {
      for (int i = 0; i < count - 1; i++)
      {
        cout << db[i][0] << ": " << db[i][1] << "\n";
      }
    }
    else if (answer == 4)
    {
      cout << "Goodbye!"
           << "\n";
      for (int i = 0; i < count; i++)
      {
        delete[] db[i];
      }
      delete[] db;
    }
  } while (answer != 4);
}

void addColumn(int **arr, int rows, int cols, int index)
{
  for (int i = 0; i < rows; i++)
  {
    int *newRow = new int[cols + 1];
    int tmp = 0;
    for (int j = 0; j < cols; j++)
    {
      if (j == index)
      {
        newRow[tmp] = 0;
        tmp++;
      }
      newRow[tmp] = arr[i][j];
      tmp++;
    }
    delete[] arr[i];
    arr[i] = newRow;
  }
}

void delColumn(int **arr, int rows, int cols, int index)
{
  for (int i = 0; i < rows; i++)
  {
    int *newRow = new int[cols - 1];
    int tmp = 0;
    for (int j = 0; j < cols; j++)
    {
      if (j != index)
      {
        newRow[tmp] = arr[i][j];
        tmp++;
      }
    }
    delete[] arr[i];
    arr[i] = newRow;
  }
}

bool isSymbols(string str)
{
  for (int i = 0; i < str.size() - 1; i++)
  {
    if (str[i + 1] < 48 || str[i + 1] > 57)
    {
      return true;
    }
    return false;
  }
}