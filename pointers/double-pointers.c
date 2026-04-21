#include <stdio.h>

int main() {
    int a = 10; [cite: 237]
    int *p = &a;    // Pointer to int [cite: 238]
    int **pp = &p;  // Pointer to pointer [cite: 239]

    printf("Value of a: %d\n", a);
    printf("Value via single pointer (*p): %d\n", *p);
    printf("Value via double pointer (**pp): %d\n", **pp); // Dereference twice [cite: 240, 247, 253]

    return 0;
}
