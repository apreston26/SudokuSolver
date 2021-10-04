#include <stdio.h>

void makePuzzle(int puzzle[9][9]);
int isPuzzle();

int main()
{
  int charManager;
  int charCounter = 0;
  int emptySpaces = 0;
  int errorCounter = 0;
  int numCounter = 0;
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
      if (sameNum == '2' && emptySpaces <= 9)
	{
	  numCounter++;
	}
      if (numCounter > 2)
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
	  numCounter = 0;
	  emptySpaces = 0;
	}
    }
  return 0;
}

int isPuzzle()
{
  return 0;
}





