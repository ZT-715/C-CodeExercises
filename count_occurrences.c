// Write a program to count blanks, tabs, and newlines in a text file:

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <err.h>

int main(int argc, char *argv[])
{
    FILE *fp;

    volatile unsigned long num_blanks;
    volatile unsigned long num_tabs;
    volatile unsigned long num_lines;

    unsigned int current_value;

    if (argc != 2)
    {
        fprintf(stderr, "Use a text file as argument.\n");
        return EXIT_FAILURE;
    }

    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        err(errno, "%s", argv[1]);
    }

    while (current_value != EOF)
    {
        current_value = fgetc(fp);

        switch (current_value)
        {
            case ' ':
                num_blanks++;
                break;

            case '\t':
                num_tabs++;
                break;

            case '\n':
                num_lines++;
                break;

            default:
                break;
        }
    }
    fclose(fp);

    printf("Number of blanks:   %li \n", num_blanks);
    printf("Number of tabs:     %li \n", num_tabs);
    printf("Number of lines:    %li \n", num_lines);

    return EXIT_SUCCESS;
}