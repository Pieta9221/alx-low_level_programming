#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: value
 * @src: value
 *@n: value
 * Return: dest
 */

char *_strcpy(char *dest, char *src, int n)

{
	int i;

	i = 0;
	while (i < n && src [i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);

}
