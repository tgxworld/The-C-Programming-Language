#include <stdio.h>

#define IN 1
#define OUT 0

main() {
  int num_lines, num_words, num_chars, state;
  char c;

  state = OUT;
  num_lines = num_words = num_chars = 0;

  while ((c = getchar()) != EOF) {
    ++num_chars;

    if (c == '\n') {
      ++num_lines;
    }

    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
    } else if (state == OUT) {
      state = IN;
      ++num_words;
    }
  }

  printf("%d %d %d\n", num_lines, num_words, num_chars);
}
