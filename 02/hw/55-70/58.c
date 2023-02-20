/*
Write a procedure is_little_endian that will return 1 when compiled and run on a little-endian machine, and will return 0 when compiled and run on a big-endian machine. This program should run on any machine, regardless of its word size.
 */

#include <stdio.h>
#include <assert.h>

typedef unsigned char* byte_pointer;

int is_little_endian() {
  int test_num = 0xff;
  byte_pointer byte_start = (byte_pointer) &test_num;

  if (byte_start[0] == 0xff) {
    return 1;
  }
  return 0;
}

int main(int argc, char* argv[]) {
  assert(is_little_endian());
  int little_endian = is_little_endian();
  printf("Is little endian? %d\n", little_endian);
  return 0;
}



