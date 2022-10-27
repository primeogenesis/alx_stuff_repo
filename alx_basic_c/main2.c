#include <stdio.h>

/**
* main - outputs all the digit of HEX
*
*Return: 0 (Always)
*/

int main()
{
	int i = 0;
	int hexchar = '0';

	while (i < 16)
	{
		putchar(hexchar);
		if (hexchar == '9')
			hexchar = 'A' - 1;
		/*
		*skips to 'A'
		*'A' - 1 to upset premature incrementation
		*/
		hexchar++;
		i++;
	}

	return (0);
}
