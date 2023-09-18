#include "main.h"
/**
 * _strlen - checks the length of the strig
 * @s:-string to be checked
 * Return:the length of the string
 */
int _strlen(char *s)

{
int string_legth = 0;

while (s[string_legth])
string_legth++;
return (string_legth);
}
