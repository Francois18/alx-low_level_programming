#include "dog.h"
#include <stdlib.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_dog - function declaration
 *@d: parameter
 *
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
