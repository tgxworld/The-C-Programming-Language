#include <stdio.h>

// Brute force
int any(char s1[], char s2[]) {
  int i, j;

  for (i = 0; s1[i] != '\0'; ++i) {
    for (j = 0; s2[j] != '\0'; ++j) {
      if (s1[i] == s2[j]) {
        return i;
      }
    }
  }

  return -1;
}

int main() {
  char s1[] = "abcdeccde";
  char s2[] = "cd";

  int position = any(s1, s2);
  printf("%d\n", position);

  return 0;
}
