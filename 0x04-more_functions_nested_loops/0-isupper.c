#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppurcase character
 * @c: int representing a character
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
