<<<<<<< HEAD
#include <stdio.h>
/**
 * main - main block
 *
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
=======
#include <studio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	char d;

	c = 'a';
	d = 'A';
	while
		(c <= 'z')
		{
			putchar(c);
			c++
		}
	while
		(d <= 'Z')
		{
			putchar(d);
			d++
		}
>>>>>>> 010be6a472ffe6541792e6289391c196be104675
	putchar('\n');
	return (0);
}
