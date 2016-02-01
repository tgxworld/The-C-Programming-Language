#include <stdio.h>

void lower(char string[]) {
  int i = 0;
  int length = 'a' - 'A';

  for (i; string[i] != '\n' && string[i] != '\0'; ++i) {
    string[i] = string[i] > 'Z' ? string[i] : string[i] + length;
  }
}

int main() {
  char string[1000] = "AcBdE";
  lower(string);

  printf("%s\n", string);

  return 0;
}
