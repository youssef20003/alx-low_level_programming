#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 * Return:0
 */
void print_alphabet(void)
{
int i = 0;
while (i <= 10)
{
int a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
}
}
