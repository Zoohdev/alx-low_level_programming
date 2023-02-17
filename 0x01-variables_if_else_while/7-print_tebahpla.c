#include <stdio.h>

int main() {
  // loop over the lowercase alphabet in reverse order
  for(char letter = 'z'; letter >= 'a'; letter--) {
    // print the current letter using putchar
    putchar(letter);
  }
  
  // print a newline character using putchar to move to a new line
  putchar('\n');
  
  return 0;
}

