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
	int j = 'A';

	/* ascii char 'a' is 97 which follow serially to char 'z' which 122 */

	for (i = '0'; i <= '9'; i++)
	{
		if(i)
			putchar(i);
	}
	putchar('\n');

	return (0);

}
