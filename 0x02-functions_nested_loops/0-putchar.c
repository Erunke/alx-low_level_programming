#include <unistd.h>

/**
 * main - Entry point
 * Description: prints _putchar followed by newline
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
