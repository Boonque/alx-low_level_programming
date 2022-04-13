#include "main.h"
/**
 *print_alphabet - prints the alphabet, in lowercase, followed by new line
 */
void print_alphabet(void)
{
char alph = 'a';
while (alph <= 'z')
{
_putchar(alph);
alph++;
}
_putchar('\n');
return;
}
