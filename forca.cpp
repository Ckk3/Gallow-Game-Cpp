#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[])
{

  char word[30], letter[1], secret[30];

  int length, i, chances, hits;

  bool hit;

  hits = 6;
  length = 0;
  i = 0;
  chances = 3;
  hit = false;
  hits = 0;

  cout << "Type anything: ";
  cin >> word;

  system("cls");

  while (word[i] != '\0')
  {
    //cout << "Aqui";
    i++;
    length++;
  }

  for (i = 0; i < 30; i++)
  {
    secret[i] = '-';
  }

  while ((chances > 0) && (hits < length))
  {
    cout << "Chances you have " << chances << "\n\n";
    cout << "Secret word: ";

    for (i = 0; i < length; i++)
    {
      cout << secret[i];
    }

    cout << "\n\n Type one letter: ";
    cin >> letter[0];

    for (i = 0; i < length; i++)
    {
      if (tolower(word[i]) == tolower(letter[0]))
      {
        hit = true;
        secret[i] = word[i];
        hits++;
      }
    }

    if (!hit)
    {
      chances--;
    }

    hit = false;
    system("cls");
  }

  if (hits == length)
  {
    cout << "You win \n\n";
  }
  else
  {
    cout << "You lose \n\n";
  }

  system("pause");

  return 0;
}
