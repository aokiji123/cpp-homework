#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(0, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string word;
    char rhymeWord[200];
    FILE *f;
    fopen_s(&f, "database.txt", "r");

    cout << "Enter word: ";
    cin >> word;

    while (true)
    {
        fgets(rhymeWord, 199, f);
        string temp = rhymeWord;
        if (feof(f) != 0)
            break;
        if (word[word.length() - 2] == temp[temp.length() - 3] && word[word.length() - 1] == temp[temp.length() - 2])
            cout << temp;
    }
    fclose(f);
}