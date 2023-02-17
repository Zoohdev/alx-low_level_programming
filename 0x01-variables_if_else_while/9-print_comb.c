#include <stdio.h>

int main() {
  for(int i = 0; i < 10; i++) {
    for(int j = i; j < 10; j++) {
      putchar(i + 48);   // print the first number in the combination
      putchar(',');      // print the comma separator
      putchar(' ');      // print the space separator
      putchar(j + 48);   // print the second number in the combination
      if(j != 9) {       // if the second number is not 9, print the comma separator and space separator for the next combination
        putchar(',');  
        putchar(' ');
      }
    }
  }
  putchar('\n');        // print a newline character to move to a new line after printing all combinations
  return 0;
}

