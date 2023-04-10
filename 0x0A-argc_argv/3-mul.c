#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two input numbers and prints the result
 * @argc: number of arguments passed
 * @argv: pointer to array of arguments passed
 *
 * Return: 0 if successful, else return 1
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
/*chris*/
