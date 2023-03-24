#include "main.h"
#include <stdio.h>

/**
 * main - prints the number from 1 to 100 by new line
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz\n");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz\n");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz\n");
		}
		else if (i == 1)
		{
			printf("%d\n", i);
		}
		else
		{
			printf("%d\n", i);
		}
	}
	printf("\n");

	return (0);
}
