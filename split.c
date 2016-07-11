/**
 * Splits a string to `n` number
 * @param {char} buffer
 * @param {char} spl - Char for splitting
 * @param {void} ptr - Pointer to pass results to
 * @param {int} n - number of splits
 **/ 
int split(char *buffer, char *spl, void *ptr, int n) {
  // Declarations
  char *p, *token;
  char tmp_buf[2048];
  int i;
  ptr = calloc(n, sizeof(ptr));
  // Copy the passed in buffer to a temp
  strncpy(tmp_buf, buffer, sizeof(tmp_buf));
  // Create the token
  token = strtok_r(tmp_buf, spl, &p);
  i = 0;
  while (token != NULL) {
    ptr[i] = token;
    token = strtok_r(NULL, spl, &p);
  }
  return 0;
}

