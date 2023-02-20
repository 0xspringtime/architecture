/*
Suppose we number the bytes in a w-bit word from 0 (least significant) to w/8 – 1 (most significant). Write code for the following C function, which will return an unsigned value in which byte i of argument x has been replaced by byte b
 */

#include <stdio.h>
#include <assert.h>

unsigned replace_byte(unsigned x, int i, unsigned char b) {
  if (i < 0) {
    printf("error: i is negetive\n");
    return x;
  }
  if (i > sizeof(unsigned)-1) {
    printf("error: too big i");
    return x;
  }

  // 1 byte has 8 bits, << 3 means * 8
  unsigned mask = ((unsigned) 0xFF) << (i << 3);
  unsigned pos_byte = ((unsigned) b) << (i << 3);

  return (x & ~mask) | pos_byte;
}

int main(int argc, char *argv[]) {
  unsigned rep_0 = replace_byte(0x12345678, 0, 0xAB);
  unsigned rep_3 = replace_byte(0x12345678, 3, 0xAB);

  assert(rep_0 == 0x123456AB);
  assert(rep_3 == 0xAB345678);
  return 0;
}

