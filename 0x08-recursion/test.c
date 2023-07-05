#include <stdio.h>
#include <string.h>

void delete_first_last_char(char *str) {
  int len = strlen(str);
  char *new_str = str;

  // Move the characters in the string forward two places.
  memmove(new_str, new_str + 1, len - 2);

  // Overwrite the last character with a null terminator.
  new_str[len - 2] = '\0';

  printf("The new string is: %s\n", new_str);
}

int main() {
  char str[] = "Hello, world!";

  delete_first_last_char(str);

  return 0;
}

