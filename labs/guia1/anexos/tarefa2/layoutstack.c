#include <stdio.h>

void f(int a, int b) {
    
    int x, y;

    x = a + b;
    y = a - b;

    printf("[f] x=%d, y=%d\n", x, y);
}

int main() {

    f(10, 3);
    printf("[main] fim.\n");

    return 0;
}
