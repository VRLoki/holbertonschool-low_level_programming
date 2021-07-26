#include "main.h"

/**
 * main - prints "Holberton"
 *
 * Return: always 0 (Success)
 */

int	main(void)
{
	int		i = 0;
	char	*str = "_putchar\n";

	while (str[i])
		_putchar(str[i++]);
	return (0);
}
