#include "main.h"
#include <string.h>
<<<<<<< HEAD
 /**
=======
#include <stdio.h>
#include "main.h"

/**
>>>>>>> bc00de5ef02b0fb2656736eac7ea38620ae0f22d
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
<<<<<<< HEAD
	_putchar (" %s ", strrev(*s));
	_putchar ("\n")
=======
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
>>>>>>> bc00de5ef02b0fb2656736eac7ea38620ae0f22d
}
