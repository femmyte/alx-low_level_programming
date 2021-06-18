#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - consist of conditional statement
* Description: Get a random number and print the number
* Return: 0
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
