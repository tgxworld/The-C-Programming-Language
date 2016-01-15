#include <stdio.h>

int main() {
  int i, c, lim = 100;
  char s[lim];

  for (i = 0; i < lim - 1; ++i) {
    if ((c = getchar()) == '\n') {
      break;
    } else if (c == EOF) {
      break;
    } else {
      s[i] = c;
    }
  }

  if (c == '\n') {
    s[i] = '\n';
    ++i;
  }

  s[i] = '\0';

  printf("%s", s);

  return 0;
}
