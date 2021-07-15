#include "holberton.h"

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	 int i;
	 char *arr;
	 arr = malloc(size * nmemb);
	 if(nmemb == 0 || size == 0)
	 {
		 return NULL;
	 }
	 if(arr == NULL)
	 {
		 return NULL;
	 }
	 for(i = 0; i < nmemb; i++)
	 {
		 arr[i] = 0;
	 }
	 return arr;
}
