#include <stdio.h>
#include <stdlib.h>

/**
* main - prints a-z and then newline
* Description: did it with 1 putchar(),
* 	gotta sacrifice simplicity though.
* Return: 0 (Always)
*/

int main()
{
	int i;

	/* ascii char 'a' is 97 which follow serially to char 'z' which 122 */

	for(i = 'a'; i < 'z' + 2; i++)
	{
		if(i > 'z')
		{
			i = '\n';
		}
		putchar(i);
		if(i  == '\n')
		{
			break;
		}
	}

	return (0);
	/*printf(" >%d to %d diff %d\n >%d to %d diff %d\n"
			, 'a', 'z', 'a' - 'z', 'A', 'Z', 'A' - 'Z'); // bg
	*/
}
