#include <stdio.h>

main()
{
  char c;

  while ((c = getchar()) != EOF) {
    while (c == ' ') {
      c = getchar();
      if (c != ' ') printf(" ");
    }

    printf("%c", c);
  }

  return 0;
}

