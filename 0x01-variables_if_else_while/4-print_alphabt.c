#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - entry point
 *disctiptin : 'checks if number is + or -'
 *Return: always 0
  */
int main(void)
{
int n = 'a';
while (n <= 'z')
{
if (n == 'q' || n == 'e')
{
n++;
}
else
{
putchar(n);
n++;
}
}
printf("\n");
return (0);
}
