#include "main.h"
/**
 * print_rev - funtion that prints a strings, in reverse.
 * @s:the used string reference pointer
 * Retur: 0
 */
void print_rev(char *s)
{

int start = 0;
while (s[start])
start++;
while (start--)
_putchar(s[start]);
_putchar('\n');
}
