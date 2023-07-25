#include "main.h"

/**
 * sp_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void sp_string(char *s)
{
	char sb = s[0];
	int psr = 0;
	int i;

	while (s[psr] != '\0')
	psr++;
	for (i = 0; i < psr; i++)
	{
		psr--;
		sb = s[i];
		s[i] = s[psr];
		s[psr] = sp;
	}
}
