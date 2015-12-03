#include <stdio.h>

main()
{
  float fahr, celsius;
  int lower = 0, upper = 100, step = 5;

  celsius = lower;
  printf("%3s\t%6s\n", "Deg", "Fahr");
  while (celsius <= upper) {
    fahr = (celsius * 9.0 / 5.0) + 32.0;
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
} 
