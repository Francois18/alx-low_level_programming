#include <stdio.h>
/**
 * main - entry point
 * @argc: parameter
 * @argv: parameter
 * Return: int
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
