#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - creates a new dog
 * @name: the new dog's name
 * @age: the new dog's age
 * @owner: the new dog's owner
 *
 * Return: NULL or pointer of the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
int new_name = 0, new_owner = 0;

if (name != NULL && owner != NULL)
{
new_name = _strlen(name) + 1;
new_owner = _strlen(owner) + 1;
d = malloc(sizeof(dog_t));

if (d == NULL)
return (NULL);

d->name = malloc(sizeof(char) * new_name);

if (d->name == NULL)
{
free(d);
return (NULL);
}

d->owner = malloc(sizeof(char) * new_owner);

if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}

d->name = _strcpy(d->name, name);
d->owner = _strcpy(d->owner, owner);
d->age = age;
}
return (d);
}

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
int c = 0;

for (; *s != '\0'; s++)
{
c++;
}

return (c);
}

/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}

dest[i++] = '\0';

return (dest);
}
