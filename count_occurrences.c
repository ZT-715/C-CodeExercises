// Write a program to count blanks, tabs, and newlines in a text file:

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <err.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Use a text file as argument.\n");
        return EXIT_FAILURE;
    }

    FILE *fp;

    if ((fp = fopen(argv[1], "r")) == NULL) {
        err(errno, "%s", argv[1]);
    }

    volatile unsigned long num_blanks;
    volatile unsigned long num_tabs;
    volatile unsigned long num_lines;

    unsigned int current;

    while (current != EOF) {
        current = fgetc(fp);

        switch (current) {
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