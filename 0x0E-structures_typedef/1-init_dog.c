#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function declaration
 * @name: paramter
 * @age:parameter
 * @owner: parameter
 * @d: fourth parameter
 *
 * Description: initializing variable of type dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
