#include <stdio.h>

int main() {
  // loop over all single digit numbers from 0 to 9
  for(int num = 0; num < 10; num++) {
    // print the current number using putchar
    putchar(num + 48);  // add the ASCII value of '0' (which is 48) to num to print the corresponding character
  }
  
  // print a newline character using putchar to move to a new line
  putchar(10);  // add the ASCII value of '\n' (which is 10) to print the newline character
  
  return 0;
}

