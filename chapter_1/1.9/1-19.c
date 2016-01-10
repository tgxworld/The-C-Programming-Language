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

void reverse(char input[], int len) {
  char output[MAXLINE];
  len = len - 1;
  int i = 0;
  int k = 0;

  for (i; i <= len; ++i) {
    if (input[len - i] != '\n' && input[len - i] != '\0') {
      output[k] = input[len - i];
      k++;
    }
  }

  for (int j = 0; j < k; ++j) {
    input[j] = output[j];
  }
}

int main() {
  int len;
  char line[MAXLINE], longest[MAXLINE];

  while ((len = getmyline(line, MAXLINE)) > 0) {
    if (len > 0) {
      reverse(line, len);
      printf("%s", line);
    }
  }

  return 0;
}
