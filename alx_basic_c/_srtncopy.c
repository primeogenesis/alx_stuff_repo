
#include <stdio.h>
#include "main.h"

/**
*	_strncopy - copies string
*	using n as a delimiter for data
*	from string @src
*
* 	@dest: the string to be copied over
*	the string should have sufficient space to
*	contain source @src
*
*	@src: the string copied to @dest
*
*	Return: @dest would be copied to.
*
*/

char *_strncopy(char *dest, char *src, int n)
{

	int i = 0;

	if (dest == NULL || src == NULL || n <= 0)
		return (dest);

/*	while (dest[end_idx] != '\0')
	{
		end_idx++;
	}
*/
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'; /* terminates
*dest with null without this statement.
* reason unknown
*/
	return (dest);

}
