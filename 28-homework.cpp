#include <iostream>
using namespace std;

int main()
{
  int size = 500;
  char *str = new char[size];
  gets_s(str, size - 1);

  int vowel = 0;
  int consonant = 0;
  int punctuation = 0;
  int number = 0;
  int word = 1;
  int other = 0;

  char vowels[] = "aeuyioAEUYIO";                                 // гласные
  char consonants[] = "qwrtphjklzsdfgxcvbnmQWRTPHJKLZSDFGXCVBNM"; // согласные
  char punctuations[] = ".,!?-:;/_";
  char numbers[] = "0123456789";

  for (int i = 0; i < strlen(str); i++)
  {
    if (strchr(vowels, str[i]))
    {
      vowel++;
    }
    else if (strchr(consonants, str[i]))
    {
      consonant++;
    }
    else if (strchr(punctuations, str[i]))
    {
      punctuation++;
    }
    else if (strchr(numbers, str[i]))
    {
      number++;
    }
    else if (str[i] == ' ')
    {
      if (str[i + 1] == ' ')
      {
        continue;
      }
      else
      {
        word++;
      }
    }
    else
    {
      other++;
    }
  }

  cout << "Vowels: " << vowel << "\n";
  cout << "Consonants: " << consonant << "\n";
  cout << "Punctuations: " << punctuations << "\n";
  cout << "Numbers: " << number << "\n";
  cout << "Words: " << word << "\n";
  cout << "Other: " << other << "\n";

  delete[] str;
}