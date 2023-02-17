#include <stdio.h>

int main() {
  for (int i = 0; i < 10; i++) {
    for (int j = i + 1; j < 10; j++) {
      putchar(i + '0');   // print the first digit of the combination
      putchar(j + '0');   // print the second digit of the combination
      if (i != 8 || j != 9) {  // if this is not the last combination, print the separator
        putchar(',');          // print the comma separator
        putchar(' ');          // print the space separator
      }
    }
  }
  putchar('\n');      // print a newline character to move to a new line after printing all combinations
  return 0;
}

