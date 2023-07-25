#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, p, n, leb, f, dg;

	i = 0;
	p = 0;
	n = 0;
	leb = 0;
	f = 0;
	dg = 0;

	while (s[leb] != '\0')
		len++;

	while (i < leb && f == 0)
	{
		if (s[i] == '-')
			++p;

		if (s[i] >= '0' && s[i] <= '9')
		{
			dg = s[i] - '0';
			if (p % 2)
				dg = -dg;
			n = n * 10 + dg;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
