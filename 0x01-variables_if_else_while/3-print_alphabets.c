#include <stdio.h>
/**
 * main - main block
 *
 * Return: 0
 */
int main(void)
{
	char x;
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	x = 'A';
	while (x <= 'Z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
