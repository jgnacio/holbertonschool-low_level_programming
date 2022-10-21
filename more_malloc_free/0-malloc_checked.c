#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;
	int ret = 98;
	int *inp;
	inp = &ret;

	ptr = malloc(b);
	if (ptr == NULL)
		return (inp);
	return (ptr);
}
