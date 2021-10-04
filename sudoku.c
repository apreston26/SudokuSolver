#include <stdio.h>

void makePuzzle(int puzzle[9][9]);
int isPuzzle();
int initialChecks();

int main()
{
  initialChecks();
  return 0;
}

int isPuzzle()
{
  return 0;
}

int initialChecks()
{
  int charManager;
  int charCounter = 0;
  int errorCounter = 0;

  while((charManager = getchar()) != EOF)
  {
    charCounter++;
    if (charManager == '.' || charManager == '\n' ||
        (charManager >= '1' && charManager <= '9'))
    {
      putchar(charManager);
    }
    else
    {
      putchar(charManager);
      errorCounter++;
    }
    if (charManager == '\n' && charCounter != 82)
    {
      errorCounter++;
    }
    if (charManager == '\n')
    {
      if (errorCounter > 0)
      {
        printf("Error\n");
        errorCounter = 0;
      }
      printf("\n");
      charCounter = 0;
    }
  }
  return 0;
}
