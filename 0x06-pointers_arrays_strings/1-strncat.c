#include "mai.h"

/**
 * _strncat - function tha conccatenates two string
 * @src: cadena  a copiar
 * @dest: destino de la cadena
 * @n: number
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = strlen(dest);
	int a = 0;

	while (a < n && *src)
	{
		dest[index + a] = *src;
		src++;
		a++
	}
	dest[index + a] = '\0';
	return (dest);
}
