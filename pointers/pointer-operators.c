#include <stdio.h>

int main(void) {
    int a = 7; [cite: 165]
    int *aPtr = &a; // aPtr holds the address of 'a' [cite: 167]

    printf("The address of a is %p\n", &a); [cite: 170]
    printf("The value of aPtr is %p\n", aPtr); [cite: 176]
    
    printf("\nThe value of a is %d\n", a); [cite: 174]
    printf("The value of *aPtr is %d\n", *aPtr); // Dereferencing [cite: 177]

    // Showing that * and & are complements of each other [cite: 180, 181]
    printf("\nComplement test:\n");
    printf("&*aPtr = %p\n", &*aPtr); [cite: 187]
    printf("*&aPtr = %p\n", *&aPtr); [cite: 187]

    return 0;
}
