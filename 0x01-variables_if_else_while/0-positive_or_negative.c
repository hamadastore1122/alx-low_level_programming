#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * descreption 'check for numpers if it is positive  or negitive'
 * return always o
 */

/* betty style doc for function main goes there */
int main(void)
{
                int n;

                        srand(time(0));
                                n = rand() - RAND_MAX / 2;
                                        if (n>0)
                                        {

                                                                    printf("%d is positive\n", n);
                                                                        }
                                            else if (n == 0)
                                                        {
                                                                        printf("%d is zero\n", n);
                                                                            }
                                                else
                                                            {
                                                                            printf("%d is  negetive\n",n);
                                                                                }
                                                        return (0);

}
