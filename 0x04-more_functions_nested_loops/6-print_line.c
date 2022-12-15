#include "main.h"
#include <stdio.h>
/**
 * print_line - draws a string line
 * @n: num of time character
 * Return: 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');

}
