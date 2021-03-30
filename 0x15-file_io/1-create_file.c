#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: pointer to the file name to create
 * @text_content: pointer to the string to write to the file
 *
 * Return: -1 or 1 if fails or otherwise
 */
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t d, i = 0;

if (!filename)
return (-1);

fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (fd == -1)
return (-1);

if (text_content)
{
while (text_content[i])
i++;
d = write(fd, text_content, i);
if (d != i)
return (-1);
}

close(fd);

return (1);
}
