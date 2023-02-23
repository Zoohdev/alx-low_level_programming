/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line
 */
void print_alphabet(void)
{
    char letter = 'a'; // Initialize a char variable 'letter' with value 'a'

    while (letter <= 'z') // Loop until 'letter' becomes greater than 'z'
    {
        _putchar(letter); // Print the current value of 'letter'
        letter++; // Increment 'letter' by 1
    }

    _putchar('\n'); // Print a newline character after the loop ends
}

