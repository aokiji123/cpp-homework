#include <iostream>
#define SIZE 5
#define MAIN int main()
#define BEGIN {
#define END }
#define FOR for (int i = 0; i < SIZE; i++)
#define FUNCTION1 int search(int array[SIZE], int key)
#define FUNCTION2 int search(int *array, int value)
#define CREATE_ARRAY_FUNCTION int **CreateArray(int n, int m)
#define SET_RANDOM_FUNCTION void SetRandom(int **arr, int n, int m, int a = 1, int b = 9)
#define ARRAY_OUTPUT_FUNCTION void ArrayOutput(int **arr, int n, int m)
#define ARRAY_SORTING_FUNCTION void ArraySorting(int **arr, int n, int m)
#define MAX_FUNCTION int Max(int **arr, int n)
#define MIN_FUNCTION int Min(int **arr, int n)
#define SRAND srand(time(0));
using namespace std;

// 1)
FUNCTION1;

MAIN
    BEGIN int array[SIZE] = {1, 2, 3, 4, 5};
cout << search(array, 4);
END

    FUNCTION1
        BEGIN
            FOR
                BEGIN if (array[i] == key)
                    BEGIN return i;
END
    END return 0;
END

    // 2)
    FUNCTION2;

MAIN
    BEGIN int array[SIZE];

FOR
    BEGIN
        array[i] = i;
END

        cout
    << search(array, 2);
END

    FUNCTION2
        BEGIN bool isFound = false;
FOR
    BEGIN if (value == array[i])
        isFound = true;
END return isFound;
END

    // 3)
    CREATE_ARRAY_FUNCTION;
SET_RANDOM_FUNCTION;
ARRAY_OUTPUT_FUNCTION;
ARRAY_OUTPUT_FUNCTION;
MAX_FUNCTION;
MIN_FUNCTION;

MAIN
    BEGIN int n = 4,
              m = 4;
int **arr = CreateArray(n, m);
SRAND
SetRandom(arr, n, m);
cout << "Source array:\n";
ArrayOutput(arr, n, m);
ArraySorting(arr, n, m);
cout << "Sorted array:\n";
ArrayOutput(arr, n, m);
cout << "Maximum element: " << Max(arr, n) << "\n";
cout << "Minimal element: " << Min(arr, n) << "\n";
END

    int **
    CreateArray(int n, int m)
        BEGIN
    int **arr = new int *[n];
for (int i = 0; i < n; i++)
  arr[i] = new int[m];
return arr;
END

    void
    SetRandom(int **arr, int n, int m, int a = 1, int b = 9)
        BEGIN
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++)
        arr[i][j] = a + rand() % (b - a + 1);
;
END

    void
    ArrayOutput(int **arr, int n, int m)
        BEGIN
    for (int i = 0; i < n; i++)
        BEGIN
    for (int j = 0; j < m; j++)
        cout
    << arr[i][j] << " ";
cout << endl;
END
    END

    void
    ArraySorting(int **arr, int n, int m)
        BEGIN
    for (int i = 0; i < n; i++)
        BEGIN
    for (int j = 0; j < m - 1; j++)
        BEGIN
    int index = j;
int minElement = arr[i][j];
for (int p = j; p < m; p++)
  BEGIN
if (minElement > arr[i][p])
  BEGIN
index = p;
minElement = arr[i][p];
END
    END
        swap(arr[i][j], arr[i][index]);
END
    END
        END

    int
    Max(int **arr, int n)
        BEGIN
    int max = arr[0][0];
for (int i = 1; i < n; i++)
  if (max < arr[i][i])
    max = arr[i][i];
return max;
END

    int
    Min(int **arr, int n)
        BEGIN
    int min = arr[0][0];
for (int i = 1; i < n; i++)
  if (min > arr[i][i])
    min = arr[i][i];
return min;
END
