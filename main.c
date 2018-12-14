#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{
  int i = 0, countUp = 0, countDown = 0, totalChar = 0;
  char k[10];

  printf("Enter a word: \n");
  gets(k);

for (i = 0; i < 10; i++)
    {
        if ( isupper(k[i]) )
        {
            countUp++;
        }
        if
            (islower (k[i]))
        {
            countDown++;
        }
        if (isalpha(k[i]))
        {
            totalChar++;
        }
    }


    printf("Upper: %d\nLower: %d\nTotal chars: %d", countUp, countDown, totalChar);


  return 0;

    //(y[i] == 'I' || y[i] == 'i' || y[i] =='O' || y[i]=='o' || y[i] == 'U' || y[i] == 'u')
}
