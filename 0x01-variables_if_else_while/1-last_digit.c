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
  int n, num;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  num = n % 10;
  if (num > 5)
        printf("Last digit of %d is %d and is greater than five\n", n, num);	
  else if (num == 0)
             printf("Last digit of %d is %d and is 0\n", n, num);
  else if (num < 6)
                printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num);
		
  return (0);
}
