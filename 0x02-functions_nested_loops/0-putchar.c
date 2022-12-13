#include "main.h"
/**
 * main - print putchar
 *
 * Return: 0
 */
int main(void)
{
	char mati[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(mati[c]);
	}
	_putchar('\n');
	return (0);
}
