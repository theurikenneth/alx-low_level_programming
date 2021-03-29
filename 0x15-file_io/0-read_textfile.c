#include "holberton.h"

/**
 * read_textfile - reads a text file
 * @filename: the source file
 * @letters: no. of letters to read and print
 *
 * Return: 0 or -1
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buf = malloc(sizeof(char *) * letters);

if (!buf)
return (0);

if (!filename)
return (0);

fd = open(filename, O_RDONLY, 0600);

if (fd == -1)
return (0);

done = read(fd, buf, letters);
write(STDOUT_FILENO, buf, done);

free(buf);
close(fd);
return (done);
}
