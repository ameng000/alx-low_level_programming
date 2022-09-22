#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: string that is added to
 *
 * @src: string to be appended
 *
 * @n: the number of bytes from @src
 *
 * Return: a pointer to the resulting string @dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
int dlen = 0, j = 0;
while (dest[dlen])
{
dlen++;
}
while (j < n && src[j])
{
dest[dlen] = src[j];
dlen++;
j++;
}
dest[dlen + n + 1] = '\0';
return (dest);
}
