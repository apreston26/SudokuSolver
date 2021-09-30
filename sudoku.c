#include <stdio.h>

int main()
{
  int charManager;
  int charCounter = 0;
  int errorCounter = 0;
  
  while((charManager = getchar()) != EOF)
    {
      charCounter++;
      if (charManager != '.' && charManager > '9')
	{
	  putchar(charManager);
          errorCounter++;
	}
		
      else
	{
	  putchar(charManager);
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

