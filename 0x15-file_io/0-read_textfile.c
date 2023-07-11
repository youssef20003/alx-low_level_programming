#include "main.h"

/**
 * read_textfile - ...
 * @filename: The source file
 * @letters: Number of letters to reads and prints
 *
 * Return: ...
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fp;
char buf[1024 * 8];
size_t i;
int test;

if (!filename | !letters)
{
return (0);
}
fp = open(filename, O_RDONLY, 0600);
if (fp == -1)
{
return (0);
}
test = read(fp, buf[0], letters);
test = write(STDOUT_FILENO, buf[0], test);
return (i);
}
