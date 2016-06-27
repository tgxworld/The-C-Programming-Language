#include <stdio.h>

int binsearch(int x, int v[], int n) {
  int low, high, mid;

  low = 0;
  high = n - 1;

  while (low < high) {
    mid = low + ((high - low) / 2);

    if (v[mid] < x) {
      low = mid + 1;
    } else {
      high = mid;
    }
  }

  if (low < n && v[low] == x) {
    return low;
  } else {
    return -1;
  }
}

int main() {
  int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  printf("%d\n", binsearch(1, array, 10));
  printf("%d\n", binsearch(2, array, 10));
  printf("%d\n", binsearch(3, array, 10));
  printf("%d\n", binsearch(4, array, 10));
  printf("%d\n", binsearch(5, array, 10));
  printf("%d\n", binsearch(6, array, 10));
  printf("%d\n", binsearch(7, array, 10));
  printf("%d\n", binsearch(8, array, 10));
  printf("%d\n", binsearch(9, array, 10));
  printf("%d\n", binsearch(10, array, 10));

  return 0;
}
