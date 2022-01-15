#include <stdio.h>
#include <stdlib.h>


    // Due to integer limitations, cannot find n>12, for n!
int main()
{
    int fac = 1;
    int value, i;

    printf("Find The Factorial Of: ");
    scanf("%d", &value);

    for(i=1; i<value+1; i++)
    {
        fac *= i;
    }
    return fac;
}
