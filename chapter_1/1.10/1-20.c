#include <stdio.h>

#define TABSTOP 2
#define MAXLINE 1000

int getmyline(char s[], int maxline) {
  int c, i;

  for (i = 0; (i < maxline - 1) && ((c = getchar()) != EOF) && (c != '\n'); ++i) {
    s[i] = c;
  }

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';

  return i;
}

void shift(char line[], int index, int by, int length) {
  int k;

  for (k = length - 1; k > index; --k) {
    line[k + by] = line[k];
  }

  line[length - 1 + by] = '\0';
}

void detab(char line[], int length) {
  int i, k;

  for (i = 0; i < length; ++i) {
    if (line[i] == '\t') {
      shift(line, i, TABSTOP - 1, length);

      length = length + TABSTOP - 1;

      for (k = 0; k < TABSTOP; ++k) {
        line[i + k] = ' ';
      }
    }
  }
}

int main() {
  int c, len;
  char line[MAXLINE];

  while ((len = getmyline(line, MAXLINE)) > 0) {
    detab(line, len);
    printf("%s\n", line);
  }

  return 0;
}
