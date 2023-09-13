#include "main.h"
/**
 * _abs - computes the absloute value of an integer.
 * @c: the numper to be value of number or zero
 */
int _abs(int c)

{
if (c < 0)
{
int s;
s = c * -1;
return (s);
}
return (c);
}	
