#include <stdio.h>

float degrees_to_fahr(float degrees) {
  return (degrees * 9.0 / 5.0) + 32.0;
}

int main()
{
  float celsius;
  int lower = 0, upper = 100, step = 5;

  celsius = lower;
  printf("%3s\t%6s\n", "Deg", "Fahr");
  while (celsius <= upper) {
    printf("%3.0f\t%6.1f\n", celsius, degrees_to_fahr(celsius));
    celsius = celsius + step;
  }

  return 0;
}
