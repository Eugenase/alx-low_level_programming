#include <unistd.h>
/**
 * -putchar - writes the character c to stdout
 *  Return: 0 On success
 *  on error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
