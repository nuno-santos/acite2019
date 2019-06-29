#include <stdlib.h>

int x = 100;       // no segmento de dados

int main() {

    int a = 2;     // na pilha
    float b = 2.5; // na pilha

    static int y;  // no segmento BSS

    // aloca memoria na heap
    int *ptr = (int *) malloc(2*sizeof(int));

    ptr[0] = 5;    // na heap
    ptr[1] = 6;    // na heap
    free(ptr);

    return 0;
}

