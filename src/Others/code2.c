#include <stdint.h>

const int lookupTable[16] = {
    0, // 0000
    1, // 0001
    1, // 0010
    2, // 0011
    1, // 0100
    2, // 0101
    2, // 0110
    3, // 0111
    1, // 1000
    2, // 1001
    2, // 1010
    3, // 1011
    2, // 1100
    3, // 1101
    3, // 1110
    4  // 1111
};

int countSetBits(int num)
{
  uint8_t lower4 = num & 0x0F;        
  uint8_t upper4 = (num >> 4) & 0x0F; 
  return lookupTable[lower4] + lookupTable[upper4];
}

int main()
{
  uint8_t num = 0b10111001; // Example 8-bit number
  printf("Number of set bits: %d", countSetBits(num));
  return 0;
}
