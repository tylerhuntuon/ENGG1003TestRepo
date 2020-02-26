#include <stdio.h>
#include <stdlib.h>

int main() {
    float x;
    float y;
    printf("Enter a number: ");
    scanf("%f", &x); // Note change of %d to %f
    // Complete the y = line below
    y = (x+2)/(1-x);
    printf("y: %f\n", y);
    return 0;
}
