#include <stdio.h>
#include "main.h"

/**
 * main - prints all the  arguments it receives in the program
 * @argc: number of arguments in the program
 * @argv: array of arguments in the program
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
