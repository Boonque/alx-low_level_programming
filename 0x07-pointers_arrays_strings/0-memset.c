#include "main.h"

/**
 * _memset - files memeory with a constant byte,
 * @s: memory area.
 * @b: costant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
*(s + i) =  b;

return (s);
}
