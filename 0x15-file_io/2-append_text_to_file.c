#include "holberton.h"

/**
 * append_text_to_file - appends text atthe file's end
 * @filename: a pointer to the filename
 * @text_content: the string to add to the end of the file
 *
 * Return: -1 or 1 if it fails and otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
int o, w, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}

o = open(filename, O_WRONLY | O_APPEND);
w = write(o, text_content, len);

if (o == -1 || w == -1)
return (-1);

close(o);

return (1);
}
