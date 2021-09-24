#include <stdio.h>

int main()
{
  int charManager;
  int workingNum = 0;
  int charCounter = 0;
  int value = 0;
  
  while((charManager = getchar()) != EOF)
    {
      charCounter++;
      if (charManager >= '0' && charManager <= '9')
	{
	  workingNum = charManager - '0';
	  value = value * 10;
	  value = value + workingNum;
	}
      if (charManager != '.' || !(charManager >= '0' && charManager <= '9'))
	{
          putchar(charManager);
	}
      else if (charManager == '\n' && charCounter == 82)
	{
	  printf("\nError\n");
	}
      else if (charManager == '\n')
	{
	  printf("\n");
	  charCounter = 0;
	}
    }
  return 0;
}
