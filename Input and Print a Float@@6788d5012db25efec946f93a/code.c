#include <stdio.h>

int main() {
    float number;
    scan("%f", &number);
    printf("You entered: %f\n", number);
    return 0;
}