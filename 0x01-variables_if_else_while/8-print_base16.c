#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base64 in lowercase.
 * You can only use `putchar`, and only 3 times.
 * Return: 0
 */
int main(void)
{
char hexc;
int i;

for (i = 0; i < 10; i++)
putchar(i + '0');

for (hexc = 'a'; hexc < 'g'; hexc++)
putchar(hexc);
putchar('\n');

return (0);
}
