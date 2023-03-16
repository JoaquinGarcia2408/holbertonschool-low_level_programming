#include "main.h"
/**
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(sizeof(size));
	if (p == NULL)
		return (NULL);
	return (p);
}
