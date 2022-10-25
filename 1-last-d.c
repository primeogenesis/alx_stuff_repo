#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define ARRAYSIZE 65
#define NONNUM 'g'

/**
* main - label random number
*
* Return: o (always)
*/

int main(void)
{
	int n;
	char str[ARRAYSIZE];
	long int lastdigit;
	int i = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

		sprintf(str, "%d", n);

		while(str[i])
		{
			i++;
		}
		i--;
		lastdigit = strtol(str + i, NULL, 10);
		//printf("lastdigit of %d is: %ld\n", n, lastdigit);



	return (0);

}
