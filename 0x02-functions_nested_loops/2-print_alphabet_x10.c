#include "main.h"
/**
 * print_alphabet_x10 - write a function that prints alphabet 10 times
 */
void print_alphabet_x10(void)
{
int i;
char alph = 'a';
for (i = 0; i < 10; i++)
{
for (alph = 'a'; alph <= 'z'; alph++)
_putchar(alph);
_putchar('\n');
}
return;
}
