#include <stdio.h>
#include <stdlib.h>

/**
* main - prints 'a'-'z' execept 'q' and 'e'
*
* Return: 0 (Always)
*/

int main(void)
{
	int i;

	/* ascii char 'a' is 97 which follow serially to char 'z' which 122 */

	for (i = 'a'; i <= 'z'; i++)
	{
		if(i != 'e' && i != 'q' )
			putchar(i);
	}
	putchar('\n');

	return (0);

}
