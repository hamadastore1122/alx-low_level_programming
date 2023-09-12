#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/

int main(void)
{
        int n;
        int id;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        id = n % 10;
        if (id > 5)

                printf("last digit of %d and is %d greater than 5\n", n, id);

         if (id == 0)

                printf("last digit of %d and is %d and is 0\n", n, id);
        if (id < 6 && id != 0)



                printf("last digit of %d and is %d less than 6 and not 0\n",n, id);

        return (0);
}

