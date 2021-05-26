#include <stdio.h>

int main() {

    int *a, *b;

    *a = 4;
    printf("%d\n", *a);
    a = b;
    printf("%d\n", *b);

    *b = 8;

    printf("%d %d", *a, *b);

    return 0;
}