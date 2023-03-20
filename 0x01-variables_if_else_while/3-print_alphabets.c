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
int n = 'A';
int N = 'a';
while (N <= 'z')
{
putchar(N);
N++;
}
printf("\n");
while (n <= 'Z')
{
putchar(n);
n++;
}
printf("\n");
return (0);
}
