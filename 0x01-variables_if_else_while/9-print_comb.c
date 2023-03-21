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
int n = 48;
while (n <= 57)
{
if(n==57){
putchar(n);
break;
}
putchar(n);
putchar(',');
putchar(' ');
n++;
}
return (0);
}
