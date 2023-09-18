#include "main.h"
/**
 * swap_int - task in two variable integers and swaps them
 * @author anisah
 * @a: swaps and stores address of b
 * @b: swaps and stores address of b
 */
void swap_int(int *a, int *b)

{
int change;
change = *b;
*b = *a;
*a = change;
}
