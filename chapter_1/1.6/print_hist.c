#include <stdio.h>

main() {
  char c;
  int freq_words[34];
  int i, j, count = 0;

  for (i = 0; i < 34; ++i) {
    freq_words[i] = 0;
  }

  while((c = getchar()) != EOF) {
    if (c == '\n' || c == '\t' || c == ' ') {
      ++freq_words[count];
      count = 0;
    } else {
      ++count;
    }
  }

  for (i = 0; i < 34; ++i) {
    printf("%2d", i);

    for (j = 0; j < freq_words[i]; ++j) {
      printf("-");
    }

    printf("\n");
  }
}
