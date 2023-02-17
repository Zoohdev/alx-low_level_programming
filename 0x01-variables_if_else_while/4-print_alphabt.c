#include <stdio.h>

int main() {
  char c = 'a';
  
  // loop over all lowercase letters from 'a' to 'z'
  while(c <= 'z') {
    // check if the letter is not 'q' and not 'e'
    if(c != 'q' && c != 'e') {
      // print the letter using putchar
      putchar(c);
    }
    // increment the letter
    c++;
  }
  
  // print a newline character using putchar to move to a new line
  putchar('\n');
  
  return 0;
}

