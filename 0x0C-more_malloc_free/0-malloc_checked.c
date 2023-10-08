#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory
 *
 * @b: input int
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
