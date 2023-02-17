#include <stdio.h>

int main() {
  int num = 0;  // initialize a variable to hold the current number
  
  // loop over all single digit numbers from 0 to 9
  while(num < 10) {
    // print the current number using putchar
    putchar(num + '0');  // add the ASCII value of '0' to num to print the corresponding character
    num++;  // increment the number
  }
  
  // print a newline character using putchar to move to a new line
  putchar('\n');
  
  return 0;
}

