// x &= (x - 1)
// x = x & (x - 1)
// x =           0110 (6)
// x - 1 =       0101 (5)
// x & (x - 1) = 0100 (4)
#include <stdio.h>
#include <time.h>

void bitcount_slower(unsigned x) {
  int b;

  for (b = 0; x != 0; x>>= 1) {
    if (x & 01)
      b++;
  }

  printf("%d\n", b);
}

void bitcount_faster(unsigned x) {
  int b;

  while ((x &= (x -1))) {
    b++;
  }

  printf("%d\n", ++b);
}

int main() {
  //  11010 = 10
  //  11010 = 26
  //  11111 = 31
  int x = 31;
  bitcount_faster(x);
  bitcount_slower(x);

  return 0;
}
