#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by sp
 * @tr: copy to
 * @sp: copy from
 * Return: string
 */
char *_strcpy(char *tr, char *sp)
{
	int l = 0;
	int x = 0;

	while (*(sp + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		tr[x] = sp[x];
	}
	tr[l] = '\0';
	return (tr);
}
