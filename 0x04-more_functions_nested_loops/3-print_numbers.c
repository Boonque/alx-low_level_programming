#include "main.h"
/**
 * print_numbers - Prints the number zero to nine
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
char num;

for (num = '0'; num <= '9'; num++)
{
_putchar(num);
}
_putchar('\n');

return;
}
