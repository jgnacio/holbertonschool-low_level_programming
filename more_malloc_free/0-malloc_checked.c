#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);
	if (ptr == NULL)
		exit (98);
	return (ptr);
}
