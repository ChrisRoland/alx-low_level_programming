#include "main.h"

/**
 * malloc_checked - cause a normal process termination with status value of 98
 *
 * @b: allocated memory
 *
 * Return: a pointer to the created memory
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);

}
/*chris*/
