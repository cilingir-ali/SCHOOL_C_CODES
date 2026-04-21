#include <stdio.h>

// Function to change value using a pointer [cite: 205]
void changeValue(int *ptr) { [cite: 205]
    *ptr = 100; // Update the value at the given address [cite: 206]
}

int main() {
    int x = 10; [cite: 209]
    printf("Before function: %d\n", x);
    
    changeValue(&x); // Send address of x [cite: 210]
    
    printf("After function (Call by Reference): %d\n", x); // Outputs 100 [cite: 211, 213]
    return 0;
}
