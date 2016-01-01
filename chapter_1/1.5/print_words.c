#include <stdio.h>

#define IN 1
#define OUT 0

main() {
  char c;
  int state = OUT;

  while ((c = getchar()) != EOF) {
    if (c == '\n' || c == '\t' || c == ' ') {
      if (state == IN) {
        printf("\n");
        state = OUT;
      }
    } else {
      state = IN;
      printf("%c", c);
    }
  }

  return 0;
}
