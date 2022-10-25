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
	int i = 0;

	srand(time(0));

	for (i = 0; i < ARRAYSIZE; i++)
		printf("%d ", i);//str[i] = NONNUM;

	sprintf(str, "%d", n);

	n = rand() - RAND_MAX / 2;


	return (0);
}
