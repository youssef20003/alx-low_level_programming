#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
int i = 0;
while (i <= 9)
{
int a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
i++;
_putchar('\n');
}
}
