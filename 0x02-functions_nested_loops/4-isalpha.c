#include "main.h"
/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to be checked.
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 */
int _isalpha(int c)
{
char lower, upper;
int aletter = 0;

for (lower = 'a'; lower <= 'z'; lower++)
{
for (upper = 'A'; upper <= 'Z'; upper++)
{
if (c == lower || c == upper)
aletter = 1;
}
}
return (aletter);
}
