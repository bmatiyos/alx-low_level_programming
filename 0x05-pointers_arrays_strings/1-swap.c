#include "main.h"
/**
 * swap_int - function that swap the values ot two integers
 * @a: variable to swaps
 * @b: variable to swaps
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
