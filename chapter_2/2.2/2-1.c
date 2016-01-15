#include <stdio.h>
#include <limits.h>

int main() {
  char prev = 0, c = 0;

  while (c >= prev) {
    prev = c;
    c++;
  }

  printf("CHAR_MIN: %d\nCHAR_MAX: %d\n", c, prev);

  short int shrt_prev = 0, shrt_c = 0;

  while (shrt_c >= shrt_prev) {
    shrt_prev = shrt_c;
    shrt_c++;
  }

  printf("SHRT_MIN: %d\nSHRT_MAX: %d\n", shrt_c, shrt_prev);

  long int long_prev = 0, long_c = 0;

  while (long_c >= long_prev) {
    long_prev = long_c;
    long_c++;
  }

  printf("long_MIN: %ld\nlong_MAX: %ld\n", long_c, long_prev);

  return 0;
}
