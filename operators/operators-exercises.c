#include <stdio.h>

int main() {
    int numbers[4] = {5, 10, 15, 20}; [cite: 226, 229]
    int *p = numbers; // p points to the start of the array [cite: 214]

    // Different ways to access array elements [cite: 222]
    printf("First element (p[0]): %d\n", *p); [cite: 215, 218]
    printf("Second element (*(p+1)): %d\n", *(p + 1)); [cite: 220]
    
    // Pointer arithmetic [cite: 227]
    int *pSub = numbers + 2; [cite: 230]
    printf("Accessing numbers[2] via pointer: %d\n", *pSub); // Outputs 15 [cite: 231, 232]

    return 0;
}
