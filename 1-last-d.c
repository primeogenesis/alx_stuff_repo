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

		while (str[i])
		{
			i++;
		}
		i--;
		lastdigit = strtol(str + i, NULL, 10);

		if (lastdigit == 0)
		{
			printf("Last digit of %d is %ld and is 0", n, lastdigit);
		}
		else if (lastdigit < 6)
		{
			printf("Last digit of %d is %ld and is less than 6 and not 0", n, lastdigit);
		}
		else
		{
			printf("Last digit of %d is %ld and is greater than 5", n, lastdigit);
		}
		/*printf("lastdigit of %d is: %ld\n", n, lastdigit); //test */



	return (0);

}
