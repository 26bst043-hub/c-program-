#include <stdio.h>

int main() {
    int a = 5, b = 10;
    
    a = a + b; // a becomes 15
    b = a - b; // b becomes 5
    a = a - b; // a becomes 10

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
