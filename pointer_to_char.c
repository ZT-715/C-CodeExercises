#include <stdio.h>

int main(int argc, char *argv[])
{
    char cah = '1';
    char *ch = &cah;

    printf("%c \n" , (char) *ch); // *ch is the ASCII int for '1', that is: 49

    if (argc == 2)
    {
        printf("%c \n",argv[1][0]);
    }

    return 0;
}