#include <stdio.h>
#include <stdlib.h>

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

	/*printf(" >%d to %d diff %d\n >%d to %d diff %d\n"
			, 'a', 'z', 'a' - 'z', 'A', 'Z', 'A' - 'Z'); // bg
	*/
}
