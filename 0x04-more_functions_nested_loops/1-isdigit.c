#include "main.h"

/**
 * _isdigit - checks if input is between 48 - 57
 * @c: input
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
