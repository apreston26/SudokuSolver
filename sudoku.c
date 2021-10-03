#include <stdio.h>

void makePuzzle(int puzzle[9][9]);
int isPuzzle();

int main()
{
  int charManager;
  int charCounter = 0;
  int emptySpaces = 0;
  int errorCounter = 0;
  int sameNum = 0;
  
  while((charManager = getchar()) != EOF)
    {
      emptySpaces++;
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
      
      if (charManager >= '1' && charManager <= '9')
	{
	  sameNum = charManager;
	  
	}
      if (sameNum == charManager && emptySpaces <= 9)
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
      if (emptySpaces == 10)
	{
	  emptySpaces = 0;
	}
    }
  return 0;
}

int isPuzzle()
{
  return 0;
}





