#include <stdio.h>

int int_to_ascii(int n) {
  return (char) n;
}

int main() {
  int i = 6521;
  printf("The ASCII value of %c is %d\n", i, int_to_ascii(i));
  return 0;
}
