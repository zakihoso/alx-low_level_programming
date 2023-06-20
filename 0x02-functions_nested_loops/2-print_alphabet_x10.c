#include "main.h"

/**
 * Prints the lowercase alphabet 10 times followed by a new line.
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
	letter = 'a';
	{
		_putchar(letter);
		letter++;
	}
	}

	_putchar('\n');
}
