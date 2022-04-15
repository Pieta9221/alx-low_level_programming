#include "main.h"
/**
 * print_triangle - display a triangle
 * @size:integer
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, x;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = size - i; j > 1; j--)
			_putchar(' ');
		for (x = i + j; x >= 1; x--)
			_putchar('#');
		_putchar('\n');
	}
}
