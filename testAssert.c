//Trying out the use of <assert.h> and atoi()

//#define NDEBUG
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int number;

    if (argc == 2)
    {
        if (atoi(argv[1]))
        {
#ifndef NDEBUG // shows if the input accepted was integers only
            int i = 0;

            while (argv[1][++i] != '\0')
            {
                assert('0'<= argv[1][i] && argv[1][i] <= '9');     //asserts ASCII number  '0 <= x <= 9'
            }
#endif
            number = atoi(argv[1]);
            printf("number: %i\n", number);

            return EXIT_SUCCESS;
        }
        else
        {
            fprintf(stderr, "Use a single non-zero integer number as argument.\n");
            return EXIT_FAILURE;
        }
    }
    else
    {
        fprintf(stderr, "No argument, use a single non-zero number as argument.\n");
        return EXIT_FAILURE;
    }
}