#include <stdio.h>
#include <string.h>
#include <math.h>

int htoi(char s[]) {
  int length = strlen(s);
  int i = 0, sum = 0;

  if (i == 0 && s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
    i = 2;
  }

  if (s[length - 1] == '\0')
    length--;

  if (s[length - 1] == '\n')
    length--;

  for (i; i <= length - 1; ++i) {
    sum = sum + ((s[i] - '0') * pow(16, length - 1 - i));
  }

  return sum;
}

int main() {
  int decimal;

  decimal = htoi("0x6400");
  printf("%d\n", decimal);

  return 0;
}
