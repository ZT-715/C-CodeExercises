#include <stdio.h>

// prints max value of unsigned long long int

int printfint(unsigned long long n);

int main(void)
{
    unsigned long long i = ~0;
    printfint(i);
    printf("\n%llu \n", i);


    return 0;
}

int printfint(unsigned long long n) //prints int on 000.000.000 format
{
    if (n < 1000)
    {
        printf ("%llu", n);
        return 0;
    }
    printfint (n/1000);

    printf (".%03llu", n%1000);

    return 0;
}