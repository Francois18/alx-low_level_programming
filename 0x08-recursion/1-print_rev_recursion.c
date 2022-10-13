#include "main.h"
#include <string.h>
/**
 *_print_rev_recursion - print the string reverse
 *@s: parameter
 *
 * Return void
 */
void _print_rev_recursion(char *s)
{
	int i, length, temp;
	length = strlen(s);

	for (i = 0;  i < length/2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
