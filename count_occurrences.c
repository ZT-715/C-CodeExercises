// Write a program to count blanks, tabs, and newlines in a file.

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <err.h>

int main(int argc, char *argv[])
{
   if (argc != 2)
    {
        fprintf(stderr, "Use a text file as argument.\n");
        return EXIT_FAILURE;
    }

    FILE *fp;

    if ((fp = fopen(argv[1], "r" )) == NULL)
    {
        err(errno, "%s", argv[1]);
    }



    return 0;
}