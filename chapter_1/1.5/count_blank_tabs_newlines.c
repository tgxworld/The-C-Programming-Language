#include <stdio.h>

main() 
{
  int c, counter = 0;
  
  while ((c = getchar()) != EOF) {
    if (c == '\t' || c == '\n' || c == ' ') {
      counter++;
    }
  }

  printf("%d\n", counter);
}
