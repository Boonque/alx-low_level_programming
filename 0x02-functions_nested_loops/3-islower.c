#include "main.h"
/**
 * _islower - Check Holberton
 * @c: Input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
char lc;
int lower = 0;

for (lc = 'a'; lc <= 'z'; lc++)
{
if (lc == c)
lower = 1;
}
return (lower);
}
