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
char buf[READ_BUF_SIZE * 8];
size_t i;
int test;

if (!filename | !letters)
{
return (0);
}
fp = open(filename, 0_RDONLY);
if (fp == -1)
{
return (0);
}
i = read(fp, &buf[0], letters);
i = write(STDOUT_FILENO, &buf[0], i);
return (i);
}
