#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    char *buff;

    buff = (void*) malloc(16);

    gets(buff);
    puts(buff);

    return 0;
}
