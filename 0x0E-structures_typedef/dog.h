#ifndef DOG
#define DOG
/**
 * struct dog - definition of the structure
 * @name: first parameter
 * @age: second parameter
 * @owner: third parameter
 *
 * Description: structures syntax definition
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
