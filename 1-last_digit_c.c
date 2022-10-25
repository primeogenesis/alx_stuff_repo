#include <stdlib.h>
#include <time.h>
#include <stdio.h>
//#include <string.h>
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
	int j;
	int temp = 0;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	temp = n;


	for(j = 0; j < 100; j++)
	{

		//srand(time(0));
		n = rand() - RAND_MAX / 2;

		if(temp == n && j > 0)//dg
		{//dg
			j--;//dg
			continue;//dg
		}else{ temp = n; }//dg

		sprintf(str, "%d", n);

		while(str[i])
		{
			i++;
		}
		i--;
		lastdigit = strtol(str + i, NULL, 10);
		printf("lastdigit of %d is: %ld\n", n, lastdigit);

	}
	return (0);

}
