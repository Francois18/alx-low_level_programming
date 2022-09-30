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


	for (count = 1; count < argc; count++)
	{
		printf("%s\t\n", argv[count]);
	}

	return (0);
}
