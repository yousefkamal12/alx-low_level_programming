#include "main.h"

/**
 * print_most_numbers - print num except 2 and 4
 *
 * return: void
 */

void print_most_numbers(void)
{
	int num;

	for (c = 0; c <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
			_putchar(num + 48);
	}
	_putchar('\n');
}
