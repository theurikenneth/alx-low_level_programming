#include "dog.h"

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

if (name != NULL && owner != NULL)
{
d = malloc(sizeof(dog_t));

if (d == NULL)
return (NULL);

if (name)
{
d->name = _previous(name);
if (!(d->name))
{
free(d);
return (NULL);
}
}
else
d->name - NULL;

d->age = age;

if (owner)
{
d->owner = _previous(owner);
if (!(d->owner))
{
free(d->name);
free(d);
return (NULL);
}
}
else
d->owner = NULL;
}
return (d);
}

/**
 * _previous - creates an array of a copy of the string
 * @str: a pointer to the copied string
 * Return: void
 */
char *_previous(char *str)
{
char *copy;
unsigned int i = 0;

if (str)
{
while (str[i++])
;
copy = malloc(sizeof(char) * i);

if (copy)
{
while (i--)
copy[i] = str[i];

return (copy);
}
}
return (NULL);
}
