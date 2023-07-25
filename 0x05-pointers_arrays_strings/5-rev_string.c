#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int psr = 0;
	int i;

	while (s[psr] != '\0')
	psr++;
	for (i = 0; i < psr; i++)
	{
		psr--;
		rev = s[i];
		s[i] = s[psr];
		s[psr] = rev;
	}
}
