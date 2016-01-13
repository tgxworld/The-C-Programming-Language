// We can do better but I'm tired today
#include <stdio.h>

#define COLUMN 10
#define MAX_LOOK_BACK 7 // We will stop look after 7 chars
#define MAXLINE 1000

int getmyline(char s[]) {
  int c, i;

  for (i = 0; (i < MAXLINE - 1) && ((c = getchar()) != EOF) && (c != '\n'); ++i) {
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

  line[length - 1 + by] = '\n';
  line[length + by] = '\0';
}

void fold(char line[], int length) {
  int i;
  int found = 0;
  length = length - 1; // Remove '\0' from length

  for (i = COLUMN - 1; i > MAX_LOOK_BACK && !found; --i) {
    if (line[i] == '\t' || line[i] == ' ') {
      line[i] = '\n';
      found = 1;
    }
  }

  if (found != 1 && length != COLUMN) {
    shift(line, COLUMN - 1, 2, length);
    line[COLUMN] = '-';
    line[COLUMN + 1] = '\n';
  }
}

int main() {
  int length;
  char line[MAXLINE];

  while ((length = getmyline(line)) != 0) {
    if (length > COLUMN) {
      fold(line, length);
    }
    printf("%s", line);
  }

  return 0;
}
