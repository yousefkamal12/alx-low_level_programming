#include <unistd.h>
/**
 * _putchar - writes the character c tp stdout
 * @c: the character to print
 *
 * return: on success 1.
 * on error, -1 is returend, and error is set appropriately
 */
int _putchar(char c)
{	
	return (write(1, &c, 1));
}
