#include <stdio.h>

//TODO: Needs error handling
int read_stdin(char *buf) {
  int c;
  int i = 0;
  while ( (c = getc(stdin)) != EOF ) {
    buf[i] = (char) c;
    ++i;
  }
  return 0;
}
