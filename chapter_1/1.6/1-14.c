#include <stdio.h>

main() {
  int c, i, j;
  int chars[128];

  for (i = 0; i < 128; ++i) {
    chars[i] = 0;
  }

  while((c = getchar()) != EOF) {
    if (!(c == '\n' || c == '\t' || c == ' ')) {
      ++chars[c];
    }
  }

  for (i = 0; i < 128; ++i) {
    if (chars[i] > 0) {
      printf("%2c: ", i);

      for (j = 0; j < chars[i]; ++j) {
        printf("-");
      }

      printf("\n");
    }
  }

  return 0;
}
