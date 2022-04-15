#include "main.h"
/**
 * print_most_numbers - Prints except 2 and 4.
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
int num;

for (num = 0; num < 10; num++)
{
if (num == 2 || num == 4)
{
num++;
}
_putchar(num + '0');
}
_putchar('\n');
}
