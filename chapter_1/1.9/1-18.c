#include <stdio.h>
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

void strip_blanks(char input[], int len) {
  int i = len - 3;
  int character;

  for (i; i >= 0; --i) {
    character = input[i];

    if (character == ' ' || character == '\t') {
      input[i] = '\n';
      input[i + 1] = '\0';
    } else {
      break;
    }
  }

  if (input[0] == '\n')
    input[0] = '\0';
}

int main() {
  int len;
  char line[MAXLINE], longest[MAXLINE];

  while ((len = getmyline(line, MAXLINE)) > 0) {
    if (len > 0) {
      strip_blanks(line, len);
      printf("%s", line);
    }
  }

  return 0;
}
