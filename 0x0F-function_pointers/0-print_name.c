#include "function_pointers.h"
/**
 * print_name - function
 * @name: parameter
 * @f: parameter
 * Retrun: void
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
