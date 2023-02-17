#include <stdio.h>

int main() {
  // loop over all the numbers of base 16 from 0 to 15
  for(int num = 0; num < 16; num++) {
    // print the current number in hexadecimal using putchar
    putchar(num < 10 ? num + 48 : num + 87);  // if num is less than 10, add the ASCII value of '0' to num to print the corresponding character; otherwise, add the ASCII value of 'a' - 10 to num to print the corresponding character
    
    // print a newline character using putchar after the 8th character to split the output into two lines
    if(num == 7) {
      putchar('\n');
    }
  }
  
  // print a newline character using putchar to move to a new line after printing all the numbers
  putchar('\n');
  
  return 0;
}

