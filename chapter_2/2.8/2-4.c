#include <stdio.h>

// Brute force
int includes(char s2[], char c) {
  int i;

  for (i = 0; s2[i] != '\0'; ++i) {
    if (s2[i] == c)
      return 1;
  }

  return 0;
}

void squeeze(char s1[], char s2[]) {
  int i, j;

  for (i = j = 0; s1[i] != '\0'; ++i) {
    if (!includes(s2, s1[i]))
      s1[j++] = s1[i];
  }

  s1[j] = '\0';
}

int main() {
  char s1[] = "abcdeccde";
  char s2[] = "cd";

  squeeze(s1, s2);
  printf("%s\n", s1);

  return 0;
}
