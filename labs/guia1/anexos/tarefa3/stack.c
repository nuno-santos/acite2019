/* stack.c */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int bof(char *str)
{
    char buffer[24];

    memset(&buffer, 0, sizeof(buffer));
    strcpy(buffer, str);
    printf("%s", buffer);

    return 0;
}

int main(int argc, char **argv)
{
    char str[517];
    FILE *badfile;

    memset(&str, 0, sizeof(str));
    badfile = fopen("badfile", "r");
    fread(str, sizeof(char), 517, badfile);
    bof(str);

    return 0;
}
