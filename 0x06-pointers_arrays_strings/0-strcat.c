#include "main.h"
/**
 * _strcat - function that concetenates two string
 * @dest: pointer to the resulting string
 * @src: string appends to dest
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int index = strlen(dest);
	int n;
	int a = 0;

	while (a < n && *src)
	{
		dest[index + a] = *src;
		src++;
		a++;
	}
	dest[index + a] = *src;
	return (dest);
}
