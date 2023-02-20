/*
 Write a C expression that will yield a word consisting of the least significant byte of x and the remaining bytes of y. For operands x = 0x89ABCDEF and y = 0x76543210, this would give 0x765432EF.
 */

#include <stdio.h>
#include <assert.h>

int main(int argc, char* argv[]) {
  size_t mask = 0xff;
  size_t x = 0x89ABCDEF;
  size_t y = 0x76543210;

  size_t res = (x & mask) | (y & ~mask);
  assert(res == 0x765432EF);

  return 0;
}

