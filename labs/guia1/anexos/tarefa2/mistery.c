/* mistery.c */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int imprime(char *arg)
{
    char buffer[100];
    memset(&buffer, 0, sizeof(buffer));

    strcpy(buffer, arg);

    printf("%s", buffer);
    return 0;
}

int main()
{
    char str[517];
    FILE *file;

    memset(&str, 0, sizeof(str));
    file = fopen("myfile", "r");
    fread(str, sizeof(char), 517, file);
    imprime(str);

    return 0;
}
