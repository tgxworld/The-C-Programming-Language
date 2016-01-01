#include <stdio.h>

main() {
  int c, i, num_white = 0, num_other = 0;
  int ndigit[10];

  for (i = 0; i < 10; ++i) {
    ndigit[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9') {
      ++ndigit[c - '0'];
    } else if (c == '\n' || c == '\t' || c == ' ') {
      ++num_white;
    } else {
      ++num_other;
    }
  }

  printf("digits =");

  for (i = 0; i < 10; ++i) {
    printf(" %d", ndigit[i]);
  }

  printf(", white space = %d, other = %d\n", num_white, num_other);
  return 0;
}
