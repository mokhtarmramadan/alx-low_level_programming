#include <stdio.h>

int main() {
  int array[15];
  int i;

  for (i = 0; i < 15; i++) {
    array[i] = (i + 1);
  }

  for (i = 0; i < 15; i++) {
    printf("array[%d] = 0x%02x\n", i, array[i]);
  }

  return 0;
}
